/* This file is part of Clementine.
   Copyright 2010, David Sansome <me@davidsansome.com>

   Clementine is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   Clementine is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with Clementine.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "playbacksettingspage.h"

#include "engines/gstengine.h"
#include "engines/alsadevicefinder.h"
#include "engines/devicefinder.h"
#include "iconloader.h"
#include "playlist/playlist.h"
#include "settingsdialog.h"
#include "ui_playbacksettingspage.h"

PlaybackSettingsPage::PlaybackSettingsPage(SettingsDialog* dialog)
    : SettingsPage(dialog), ui_(new Ui_PlaybackSettingsPage) {
  ui_->setupUi(this);
  setWindowIcon(IconLoader::Load("media-playback-start", IconLoader::Base));


  connect(ui_->buffer_min_fill, SIGNAL(valueChanged(int)),
          SLOT(BufferMinFillChanged(int)));
  connect(ui_->alsa_exclusive, SIGNAL(toggled(bool)),
          SLOT(AlsaExclusiveToggled(bool)));
  ui_->buffer_min_fill_value_label->setMinimumWidth(
      QFontMetrics(ui_->buffer_min_fill_value_label->font()).width("WW%"));

  connect(ui_->replaygain_preamp, SIGNAL(valueChanged(int)),
          SLOT(RgPreampChanged(int)));
  ui_->replaygain_preamp_label->setMinimumWidth(
      QFontMetrics(ui_->replaygain_preamp_label->font()).width("-WW.W dB"));
  RgPreampChanged(ui_->replaygain_preamp->value());

  ui_->sample_rate->setItemData(0, GstEngine::kAutoSampleRate);
  ui_->sample_rate->setItemData(1, 44100);
  ui_->sample_rate->setItemData(2, 48000);
  ui_->sample_rate->setItemData(3, 96000);
  ui_->sample_rate->setItemData(4, 192000);

  ui_->output_format->setItemData(0, GstEngine::kOutFormatDetect);
  ui_->output_format->setItemData(1, GstEngine::kOutFormatS16LE);
  ui_->output_format->setItemData(2, GstEngine::kOutFormatF32LE);
}

PlaybackSettingsPage::~PlaybackSettingsPage() { delete ui_; }

void PlaybackSettingsPage::Load() {
  const GstEngine* engine = dialog()->gst_engine();
  if (!engine) {
    qLog(Warning) << "PlaybackSettingsPage: GstEngine is null; PCM outputs not available (DSD engine active?).";
    return;
  }


  ui_->gst_output->clear();
  ui_->alsa_device_combo->clear();
  for (const GstEngine::OutputDetails& output : engine->GetOutputsList()) {
    QIcon icon;
    if (!output.icon_name.isEmpty()) {
      // Strip components off the icon name until we find one.
      QStringList components = output.icon_name.split("-");
      while (icon.isNull() && !components.isEmpty()) {
        icon = IconLoader::Load(components.join("-"), IconLoader::Base);
        components.removeLast();
      }
    }

    ui_->gst_output->addItem(icon, output.description,
                             QVariant::fromValue(output));
  }

  QSettings s;

  s.beginGroup(Playlist::kSettingsGroup);
  ui_->current_glow->setChecked(s.value("glow_effect", true).toBool());
  s.endGroup();


  s.beginGroup(GstEngine::kSettingsGroup);
  QString sink = s.value("sink", GstEngine::kAutoSink).toString();
  QVariant device = s.value("device");
  bool alsa_exclusive = s.value("alsa_exclusive", true).toBool();
  QString alsa_device = s.value("alsa_device", QString()).toString();

  ui_->gst_output->setCurrentIndex(0);
  for (int i = 0; i < ui_->gst_output->count(); ++i) {
    GstEngine::OutputDetails details =
        ui_->gst_output->itemData(i).value<GstEngine::OutputDetails>();

    if (details.gstreamer_plugin_name == sink &&
        details.device_property_value == device) {
      ui_->gst_output->setCurrentIndex(i);
      break;
    }
  }

  ui_->replaygain->setChecked(s.value("rgenabled", false).toBool());
  ui_->replaygain_mode->setCurrentIndex(s.value("rgmode", 0).toInt());
  ui_->replaygain_preamp->setValue(s.value("rgpreamp", 0.0).toDouble() * 10 +
                                   150);
  ui_->replaygain_compression->setChecked(
      s.value("rgcompression", true).toBool());
  ui_->buffer_duration->setValue(s.value("bufferduration", 4000).toInt());
  ui_->mono_playback->setChecked(s.value("monoplayback", false).toBool());
  ui_->sample_rate->setCurrentIndex(ui_->sample_rate->findData(
      s.value("samplerate", GstEngine::kAutoSampleRate).toInt()));
  ui_->output_format->setCurrentIndex(ui_->output_format->findData(
      s.value(GstEngine::kSettingFormat, GstEngine::kOutFormatDetect)
          .toString()));
  ui_->buffer_min_fill->setValue(s.value("bufferminfill", 33).toInt());
  ui_->alsa_exclusive->setChecked(alsa_exclusive);
  ui_->alsa_device_label->setEnabled(alsa_exclusive);
  ui_->alsa_device_combo->setEnabled(alsa_exclusive);

  // Populate ALSA devices list using AlsaDeviceFinder directly
  QList<DeviceFinder::Device> alsa_devices;
#ifdef HAVE_ALSA
  {
    AlsaDeviceFinder finder;
    if (finder.Initialise()) {
      alsa_devices = finder.ListDevices();
    }
  }
#endif
  for (const DeviceFinder::Device& dev : alsa_devices) {
    QString desc = dev.description.isEmpty() ? dev.device_property_value.toString() : dev.description;
    ui_->alsa_device_combo->addItem(desc, dev.device_property_value);
  }
  // Also add a manual entry if previous setting isn't in the list
  if (!alsa_device.isEmpty()) {
    int idx = ui_->alsa_device_combo->findData(QVariant(alsa_device));
    if (idx < 0) {
      ui_->alsa_device_combo->addItem(alsa_device, QVariant(alsa_device));
      idx = ui_->alsa_device_combo->count() - 1;
    }
    ui_->alsa_device_combo->setCurrentIndex(idx);
  }
  s.endGroup();
}

void PlaybackSettingsPage::Save() {
  QSettings s;

  s.beginGroup(Playlist::kSettingsGroup);
  s.setValue("glow_effect", ui_->current_glow->isChecked());
  s.endGroup();


  GstEngine::OutputDetails details =
      ui_->gst_output->itemData(ui_->gst_output->currentIndex())
          .value<GstEngine::OutputDetails>();

  s.beginGroup(GstEngine::kSettingsGroup);
  if (ui_->alsa_exclusive->isChecked()) {
    s.setValue("alsa_exclusive", true);
    s.setValue("alsa_device", ui_->alsa_device_combo->currentData().toString());
    s.setValue("sink", QString("alsasink"));
    s.setValue("device", ui_->alsa_device_combo->currentData());
  } else {
    s.setValue("alsa_exclusive", false);
    s.setValue("alsa_device", QString());
    s.setValue("sink", details.gstreamer_plugin_name);
    s.setValue("device", details.device_property_value);
  }
  s.setValue("rgenabled", ui_->replaygain->isChecked());
  s.setValue("rgmode", ui_->replaygain_mode->currentIndex());
  s.setValue("rgpreamp", float(ui_->replaygain_preamp->value()) / 10 - 15);
  s.setValue("rgcompression", ui_->replaygain_compression->isChecked());
  s.setValue("bufferduration", ui_->buffer_duration->value());
  s.setValue("monoplayback", ui_->mono_playback->isChecked());
  s.setValue(
      "samplerate",
      ui_->sample_rate->itemData(ui_->sample_rate->currentIndex()).toInt());
  s.setValue(GstEngine::kSettingFormat,
             ui_->output_format->itemData(ui_->output_format->currentIndex())
                 .toString());
  s.setValue("bufferminfill", ui_->buffer_min_fill->value());
  s.endGroup();
}

void PlaybackSettingsPage::RgPreampChanged(int value) {
  float db = float(value) / 10 - 15;
  QString db_str;
  db_str = QString::asprintf("%+.1f dB", db);
  ui_->replaygain_preamp_label->setText(db_str);
}

void PlaybackSettingsPage::BufferMinFillChanged(int value) {
  ui_->buffer_min_fill_value_label->setText(QString::number(value) + "%");
}


void PlaybackSettingsPage::AlsaExclusiveToggled(bool on) {
  ui_->alsa_device_label->setEnabled(on);
  ui_->alsa_device_combo->setEnabled(on);
}
