/********************************************************************************
** Form generated from reading UI file 'playbacksettingspage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYBACKSETTINGSPAGE_H
#define UI_PLAYBACKSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/stickyslider.h"

QT_BEGIN_NAMESPACE

class Ui_PlaybackSettingsPage
{
public:
    QVBoxLayout *verticalLayout_3;
    QCheckBox *current_glow;
    QGroupBox *replaygain_group;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *replaygain;
    QWidget *widget;
    QFormLayout *formLayout_4;
    QLabel *label_8;
    QComboBox *replaygain_mode;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_4;
    QLabel *replaygain_preamp_label;
    StickySlider *replaygain_preamp;
    QCheckBox *replaygain_compression;
    QGroupBox *gst_group;
    QFormLayout *formLayout_3;
    QLabel *label_7;
    QComboBox *gst_output;
    QCheckBox *alsa_exclusive;
    QLabel *alsa_device_label;
    QComboBox *alsa_device_combo;
    QLabel *buffer_duration_label;
    QSpinBox *buffer_duration;
    QLabel *buffer_min_fill_label;
    QHBoxLayout *horizontalLayout_3;
    QLabel *buffer_min_fill_value_label;
    QSlider *buffer_min_fill;
    QLabel *sample_rate_label;
    QHBoxLayout *sample_rate_layout;
    QComboBox *sample_rate;
    QSpacerItem *horizontalSpacer_3;
    QLabel *output_format_label;
    QCheckBox *mono_playback;
    QHBoxLayout *output_format_layout;
    QComboBox *output_format;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PlaybackSettingsPage)
    {
        if (PlaybackSettingsPage->objectName().isEmpty())
            PlaybackSettingsPage->setObjectName(QString::fromUtf8("PlaybackSettingsPage"));
        PlaybackSettingsPage->resize(596, 766);
        verticalLayout_3 = new QVBoxLayout(PlaybackSettingsPage);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        current_glow = new QCheckBox(PlaybackSettingsPage);
        current_glow->setObjectName(QString::fromUtf8("current_glow"));
        current_glow->setChecked(true);

        verticalLayout_3->addWidget(current_glow);

        replaygain_group = new QGroupBox(PlaybackSettingsPage);
        replaygain_group->setObjectName(QString::fromUtf8("replaygain_group"));
        verticalLayout_2 = new QVBoxLayout(replaygain_group);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        replaygain = new QCheckBox(replaygain_group);
        replaygain->setObjectName(QString::fromUtf8("replaygain"));

        verticalLayout_2->addWidget(replaygain);

        widget = new QWidget(replaygain_group);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setEnabled(false);
        formLayout_4 = new QFormLayout(widget);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_8);

        replaygain_mode = new QComboBox(widget);
        replaygain_mode->addItem(QString());
        replaygain_mode->addItem(QString());
        replaygain_mode->setObjectName(QString::fromUtf8("replaygain_mode"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, replaygain_mode);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_9);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        replaygain_preamp_label = new QLabel(widget);
        replaygain_preamp_label->setObjectName(QString::fromUtf8("replaygain_preamp_label"));

        horizontalLayout_4->addWidget(replaygain_preamp_label);

        replaygain_preamp = new StickySlider(widget);
        replaygain_preamp->setObjectName(QString::fromUtf8("replaygain_preamp"));
        replaygain_preamp->setMaximum(300);
        replaygain_preamp->setValue(150);
        replaygain_preamp->setOrientation(Qt::Horizontal);
        replaygain_preamp->setProperty("sticky_center", QVariant(150));

        horizontalLayout_4->addWidget(replaygain_preamp);


        formLayout_4->setLayout(1, QFormLayout::FieldRole, horizontalLayout_4);

        replaygain_compression = new QCheckBox(widget);
        replaygain_compression->setObjectName(QString::fromUtf8("replaygain_compression"));

        formLayout_4->setWidget(2, QFormLayout::SpanningRole, replaygain_compression);


        verticalLayout_2->addWidget(widget);


        verticalLayout_3->addWidget(replaygain_group);

        gst_group = new QGroupBox(PlaybackSettingsPage);
        gst_group->setObjectName(QString::fromUtf8("gst_group"));
        formLayout_3 = new QFormLayout(gst_group);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_7 = new QLabel(gst_group);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_7);

        gst_output = new QComboBox(gst_group);
        gst_output->setObjectName(QString::fromUtf8("gst_output"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, gst_output);

        alsa_exclusive = new QCheckBox(gst_group);
        alsa_exclusive->setObjectName(QString::fromUtf8("alsa_exclusive"));
        alsa_exclusive->setChecked(true);

        formLayout_3->setWidget(1, QFormLayout::SpanningRole, alsa_exclusive);

        alsa_device_label = new QLabel(gst_group);
        alsa_device_label->setObjectName(QString::fromUtf8("alsa_device_label"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, alsa_device_label);

        alsa_device_combo = new QComboBox(gst_group);
        alsa_device_combo->setObjectName(QString::fromUtf8("alsa_device_combo"));
        alsa_device_combo->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, alsa_device_combo);

        buffer_duration_label = new QLabel(gst_group);
        buffer_duration_label->setObjectName(QString::fromUtf8("buffer_duration_label"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, buffer_duration_label);

        buffer_duration = new QSpinBox(gst_group);
        buffer_duration->setObjectName(QString::fromUtf8("buffer_duration"));
        buffer_duration->setMaximum(60000);
        buffer_duration->setSingleStep(100);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, buffer_duration);

        buffer_min_fill_label = new QLabel(gst_group);
        buffer_min_fill_label->setObjectName(QString::fromUtf8("buffer_min_fill_label"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, buffer_min_fill_label);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        buffer_min_fill_value_label = new QLabel(gst_group);
        buffer_min_fill_value_label->setObjectName(QString::fromUtf8("buffer_min_fill_value_label"));

        horizontalLayout_3->addWidget(buffer_min_fill_value_label);

        buffer_min_fill = new QSlider(gst_group);
        buffer_min_fill->setObjectName(QString::fromUtf8("buffer_min_fill"));
        buffer_min_fill->setMinimum(1);
        buffer_min_fill->setMaximum(50);
        buffer_min_fill->setValue(33);
        buffer_min_fill->setOrientation(Qt::Horizontal);
        buffer_min_fill->setTickInterval(1);

        horizontalLayout_3->addWidget(buffer_min_fill);


        formLayout_3->setLayout(4, QFormLayout::FieldRole, horizontalLayout_3);

        sample_rate_label = new QLabel(gst_group);
        sample_rate_label->setObjectName(QString::fromUtf8("sample_rate_label"));

        formLayout_3->setWidget(5, QFormLayout::LabelRole, sample_rate_label);

        sample_rate_layout = new QHBoxLayout();
        sample_rate_layout->setObjectName(QString::fromUtf8("sample_rate_layout"));
        sample_rate = new QComboBox(gst_group);
        sample_rate->addItem(QString());
        sample_rate->addItem(QString());
        sample_rate->addItem(QString());
        sample_rate->addItem(QString());
        sample_rate->addItem(QString());
        sample_rate->setObjectName(QString::fromUtf8("sample_rate"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sample_rate->sizePolicy().hasHeightForWidth());
        sample_rate->setSizePolicy(sizePolicy);
        sample_rate->setBaseSize(QSize(0, 0));
        sample_rate->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        sample_rate_layout->addWidget(sample_rate);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        sample_rate_layout->addItem(horizontalSpacer_3);


        formLayout_3->setLayout(5, QFormLayout::FieldRole, sample_rate_layout);

        output_format_label = new QLabel(gst_group);
        output_format_label->setObjectName(QString::fromUtf8("output_format_label"));

        formLayout_3->setWidget(6, QFormLayout::LabelRole, output_format_label);

        mono_playback = new QCheckBox(gst_group);
        mono_playback->setObjectName(QString::fromUtf8("mono_playback"));

        formLayout_3->setWidget(7, QFormLayout::SpanningRole, mono_playback);

        output_format_layout = new QHBoxLayout();
        output_format_layout->setObjectName(QString::fromUtf8("output_format_layout"));
        output_format = new QComboBox(gst_group);
        output_format->addItem(QString());
        output_format->addItem(QString());
        output_format->addItem(QString());
        output_format->setObjectName(QString::fromUtf8("output_format"));
        output_format->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        output_format_layout->addWidget(output_format);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        output_format_layout->addItem(horizontalSpacer_4);


        formLayout_3->setLayout(6, QFormLayout::FieldRole, output_format_layout);


        verticalLayout_3->addWidget(gst_group);

        verticalSpacer = new QSpacerItem(20, 114, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        retranslateUi(PlaybackSettingsPage);
        QObject::connect(replaygain, SIGNAL(toggled(bool)), widget, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(PlaybackSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *PlaybackSettingsPage)
    {
        PlaybackSettingsPage->setWindowTitle(QCoreApplication::translate("PlaybackSettingsPage", "Playback", nullptr));
        current_glow->setText(QCoreApplication::translate("PlaybackSettingsPage", "Show a glowing animation on the current track", nullptr));
        replaygain_group->setTitle(QCoreApplication::translate("PlaybackSettingsPage", "Replay Gain", nullptr));
        replaygain->setText(QCoreApplication::translate("PlaybackSettingsPage", "Use Replay Gain metadata if it is available", nullptr));
        label_8->setText(QCoreApplication::translate("PlaybackSettingsPage", "Replay Gain mode", nullptr));
        replaygain_mode->setItemText(0, QCoreApplication::translate("PlaybackSettingsPage", "Radio (equal loudness for all tracks)", nullptr));
        replaygain_mode->setItemText(1, QCoreApplication::translate("PlaybackSettingsPage", "Album (ideal loudness for all tracks)", nullptr));

        label_9->setText(QCoreApplication::translate("PlaybackSettingsPage", "Pre-amp", nullptr));
        replaygain_compression->setText(QCoreApplication::translate("PlaybackSettingsPage", "Apply compression to prevent clipping", nullptr));
        gst_group->setTitle(QCoreApplication::translate("PlaybackSettingsPage", "Audio output", nullptr));
        label_7->setText(QCoreApplication::translate("PlaybackSettingsPage", "Output device", nullptr));
        alsa_exclusive->setText(QCoreApplication::translate("PlaybackSettingsPage", "Use ALSA hardware device (exclusive, no Pulse/PipeWire)", nullptr));
        alsa_device_label->setText(QCoreApplication::translate("PlaybackSettingsPage", "ALSA device", nullptr));
#if QT_CONFIG(tooltip)
        alsa_device_combo->setToolTip(QCoreApplication::translate("PlaybackSettingsPage", "Select an ALSA hardware device", nullptr));
#endif // QT_CONFIG(tooltip)
        buffer_duration_label->setText(QCoreApplication::translate("PlaybackSettingsPage", "Buffer duration", nullptr));
        buffer_duration->setSuffix(QCoreApplication::translate("PlaybackSettingsPage", " ms", nullptr));
        buffer_min_fill_label->setText(QCoreApplication::translate("PlaybackSettingsPage", "Minimum buffer fill", nullptr));
        buffer_min_fill_value_label->setText(QString());
        sample_rate_label->setText(QCoreApplication::translate("PlaybackSettingsPage", "Sample rate", nullptr));
        sample_rate->setItemText(0, QCoreApplication::translate("PlaybackSettingsPage", "Auto", nullptr));
        sample_rate->setItemText(1, QCoreApplication::translate("PlaybackSettingsPage", "44,100Hz", nullptr));
        sample_rate->setItemText(2, QCoreApplication::translate("PlaybackSettingsPage", "48,000Hz", nullptr));
        sample_rate->setItemText(3, QCoreApplication::translate("PlaybackSettingsPage", "96,000Hz", nullptr));
        sample_rate->setItemText(4, QCoreApplication::translate("PlaybackSettingsPage", "192,000Hz", nullptr));

#if QT_CONFIG(tooltip)
        sample_rate->setToolTip(QCoreApplication::translate("PlaybackSettingsPage", "Changes will take place when the next song starts playing", nullptr));
#endif // QT_CONFIG(tooltip)
        output_format_label->setText(QCoreApplication::translate("PlaybackSettingsPage", "Format", nullptr));
#if QT_CONFIG(tooltip)
        mono_playback->setToolTip(QCoreApplication::translate("PlaybackSettingsPage", "Changing mono playback preference will be effective for the next playing songs", nullptr));
#endif // QT_CONFIG(tooltip)
        mono_playback->setText(QCoreApplication::translate("PlaybackSettingsPage", "Mono playback", nullptr));
        output_format->setItemText(0, QCoreApplication::translate("PlaybackSettingsPage", "Detect", nullptr));
        output_format->setItemText(1, QCoreApplication::translate("PlaybackSettingsPage", "S16LE (16-bit)", nullptr));
        output_format->setItemText(2, QCoreApplication::translate("PlaybackSettingsPage", "F32LE (32-bit)", nullptr));

#if QT_CONFIG(tooltip)
        output_format->setToolTip(QCoreApplication::translate("PlaybackSettingsPage", "The format is only updated when a pipeline starts.", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class PlaybackSettingsPage: public Ui_PlaybackSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYBACKSETTINGSPAGE_H
