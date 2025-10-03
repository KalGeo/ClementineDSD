/********************************************************************************
** Form generated from reading UI file 'behavioursettingspage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEHAVIOURSETTINGSPAGE_H
#define UI_BEHAVIOURSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BehaviourSettingsPage
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *b_show_tray_icon_;
    QCheckBox *b_scroll_tray_icon_;
    QCheckBox *b_keep_running_;
    QFrame *line;
    QCheckBox *b_warn_close_playlist_;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_13;
    QComboBox *language;
    QLabel *label_10;
    QGroupBox *startup_group_;
    QVBoxLayout *verticalLayout_8;
    QRadioButton *b_always_show_;
    QRadioButton *b_always_hide_;
    QRadioButton *b_remember_;
    QCheckBox *b_click_edit_inline_;
    QCheckBox *resume_after_start_;
    QCheckBox *stop_play_if_fail_;
    QCheckBox *b_grey_out_deleted_;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_18;
    QComboBox *menu_playmode;
    QGroupBox *groupBox_previous;
    QVBoxLayout *verticalLayout_19;
    QComboBox *menu_previousmode;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *doubleclick_addmode;
    QComboBox *doubleclick_playmode;
    QGroupBox *groupBox_doubleclick_playlist;
    QVBoxLayout *layout_doubleclick_playlist;
    QComboBox *doubleclick_playlist_addmode;
    QGroupBox *groupBox_seekstep;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_seekstep;
    QSpinBox *seek_step_sec;
    QSpacerItem *horizontalSpacer_seekstep;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *b_automatic_path;
    QRadioButton *b_absolute_path;
    QRadioButton *b_relative_path;
    QRadioButton *b_ask_path;
    QSpacerItem *verticalSpacer_7;
    QCheckBox *b_write_metadata;
    QGroupBox *groupBox_sort_ignore;
    QHBoxLayout *horizontalLayout;
    QCheckBox *sort_ignore_prefix;
    QLineEdit *sort_ignore_prefix_list;
    QGroupBox *groupBox_play_count;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *b_play_count_normal_duration;
    QRadioButton *b_play_count_short_duration;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *BehaviourSettingsPage)
    {
        if (BehaviourSettingsPage->objectName().isEmpty())
            BehaviourSettingsPage->setObjectName(QString::fromUtf8("BehaviourSettingsPage"));
        BehaviourSettingsPage->resize(602, 1395);
        verticalLayout = new QVBoxLayout(BehaviourSettingsPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        b_show_tray_icon_ = new QCheckBox(BehaviourSettingsPage);
        b_show_tray_icon_->setObjectName(QString::fromUtf8("b_show_tray_icon_"));
        b_show_tray_icon_->setChecked(true);

        verticalLayout->addWidget(b_show_tray_icon_);

        b_scroll_tray_icon_ = new QCheckBox(BehaviourSettingsPage);
        b_scroll_tray_icon_->setObjectName(QString::fromUtf8("b_scroll_tray_icon_"));
        b_scroll_tray_icon_->setChecked(false);

        verticalLayout->addWidget(b_scroll_tray_icon_);

        b_keep_running_ = new QCheckBox(BehaviourSettingsPage);
        b_keep_running_->setObjectName(QString::fromUtf8("b_keep_running_"));

        verticalLayout->addWidget(b_keep_running_);

        line = new QFrame(BehaviourSettingsPage);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        b_warn_close_playlist_ = new QCheckBox(BehaviourSettingsPage);
        b_warn_close_playlist_->setObjectName(QString::fromUtf8("b_warn_close_playlist_"));

        verticalLayout->addWidget(b_warn_close_playlist_);

        groupBox_3 = new QGroupBox(BehaviourSettingsPage);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_13 = new QVBoxLayout(groupBox_3);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        language = new QComboBox(groupBox_3);
        language->addItem(QString());
        language->setObjectName(QString::fromUtf8("language"));

        verticalLayout_13->addWidget(language);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_13->addWidget(label_10);


        verticalLayout->addWidget(groupBox_3);

        startup_group_ = new QGroupBox(BehaviourSettingsPage);
        startup_group_->setObjectName(QString::fromUtf8("startup_group_"));
        verticalLayout_8 = new QVBoxLayout(startup_group_);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        b_always_show_ = new QRadioButton(startup_group_);
        b_always_show_->setObjectName(QString::fromUtf8("b_always_show_"));

        verticalLayout_8->addWidget(b_always_show_);

        b_always_hide_ = new QRadioButton(startup_group_);
        b_always_hide_->setObjectName(QString::fromUtf8("b_always_hide_"));

        verticalLayout_8->addWidget(b_always_hide_);

        b_remember_ = new QRadioButton(startup_group_);
        b_remember_->setObjectName(QString::fromUtf8("b_remember_"));
        b_remember_->setChecked(true);

        verticalLayout_8->addWidget(b_remember_);


        verticalLayout->addWidget(startup_group_);

        b_click_edit_inline_ = new QCheckBox(BehaviourSettingsPage);
        b_click_edit_inline_->setObjectName(QString::fromUtf8("b_click_edit_inline_"));

        verticalLayout->addWidget(b_click_edit_inline_);

        resume_after_start_ = new QCheckBox(BehaviourSettingsPage);
        resume_after_start_->setObjectName(QString::fromUtf8("resume_after_start_"));
        resume_after_start_->setChecked(false);

        verticalLayout->addWidget(resume_after_start_);

        stop_play_if_fail_ = new QCheckBox(BehaviourSettingsPage);
        stop_play_if_fail_->setObjectName(QString::fromUtf8("stop_play_if_fail_"));
        stop_play_if_fail_->setChecked(false);

        verticalLayout->addWidget(stop_play_if_fail_);

        b_grey_out_deleted_ = new QCheckBox(BehaviourSettingsPage);
        b_grey_out_deleted_->setObjectName(QString::fromUtf8("b_grey_out_deleted_"));

        verticalLayout->addWidget(b_grey_out_deleted_);

        groupBox_8 = new QGroupBox(BehaviourSettingsPage);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        verticalLayout_18 = new QVBoxLayout(groupBox_8);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        menu_playmode = new QComboBox(groupBox_8);
        menu_playmode->addItem(QString());
        menu_playmode->addItem(QString());
        menu_playmode->addItem(QString());
        menu_playmode->setObjectName(QString::fromUtf8("menu_playmode"));

        verticalLayout_18->addWidget(menu_playmode);


        verticalLayout->addWidget(groupBox_8);

        groupBox_previous = new QGroupBox(BehaviourSettingsPage);
        groupBox_previous->setObjectName(QString::fromUtf8("groupBox_previous"));
        verticalLayout_19 = new QVBoxLayout(groupBox_previous);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        menu_previousmode = new QComboBox(groupBox_previous);
        menu_previousmode->addItem(QString());
        menu_previousmode->addItem(QString());
        menu_previousmode->setObjectName(QString::fromUtf8("menu_previousmode"));

        verticalLayout_19->addWidget(menu_previousmode);


        verticalLayout->addWidget(groupBox_previous);

        groupBox_7 = new QGroupBox(BehaviourSettingsPage);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        horizontalLayout_6 = new QHBoxLayout(groupBox_7);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        doubleclick_addmode = new QComboBox(groupBox_7);
        doubleclick_addmode->addItem(QString());
        doubleclick_addmode->addItem(QString());
        doubleclick_addmode->addItem(QString());
        doubleclick_addmode->addItem(QString());
        doubleclick_addmode->setObjectName(QString::fromUtf8("doubleclick_addmode"));

        horizontalLayout_6->addWidget(doubleclick_addmode);

        doubleclick_playmode = new QComboBox(groupBox_7);
        doubleclick_playmode->addItem(QString());
        doubleclick_playmode->addItem(QString());
        doubleclick_playmode->addItem(QString());
        doubleclick_playmode->setObjectName(QString::fromUtf8("doubleclick_playmode"));

        horizontalLayout_6->addWidget(doubleclick_playmode);


        verticalLayout->addWidget(groupBox_7);

        groupBox_doubleclick_playlist = new QGroupBox(BehaviourSettingsPage);
        groupBox_doubleclick_playlist->setObjectName(QString::fromUtf8("groupBox_doubleclick_playlist"));
        layout_doubleclick_playlist = new QVBoxLayout(groupBox_doubleclick_playlist);
        layout_doubleclick_playlist->setObjectName(QString::fromUtf8("layout_doubleclick_playlist"));
        doubleclick_playlist_addmode = new QComboBox(groupBox_doubleclick_playlist);
        doubleclick_playlist_addmode->addItem(QString());
        doubleclick_playlist_addmode->addItem(QString());
        doubleclick_playlist_addmode->setObjectName(QString::fromUtf8("doubleclick_playlist_addmode"));

        layout_doubleclick_playlist->addWidget(doubleclick_playlist_addmode);


        verticalLayout->addWidget(groupBox_doubleclick_playlist);

        groupBox_seekstep = new QGroupBox(BehaviourSettingsPage);
        groupBox_seekstep->setObjectName(QString::fromUtf8("groupBox_seekstep"));
        horizontalLayout_7 = new QHBoxLayout(groupBox_seekstep);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_seekstep = new QLabel(groupBox_seekstep);
        label_seekstep->setObjectName(QString::fromUtf8("label_seekstep"));

        horizontalLayout_7->addWidget(label_seekstep);

        seek_step_sec = new QSpinBox(groupBox_seekstep);
        seek_step_sec->setObjectName(QString::fromUtf8("seek_step_sec"));
        seek_step_sec->setMinimum(1);
        seek_step_sec->setMaximum(20);
        seek_step_sec->setValue(10);

        horizontalLayout_7->addWidget(seek_step_sec);

        horizontalSpacer_seekstep = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_seekstep);


        verticalLayout->addWidget(groupBox_seekstep);

        groupBox_9 = new QGroupBox(BehaviourSettingsPage);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        verticalLayout_2 = new QVBoxLayout(groupBox_9);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        b_automatic_path = new QRadioButton(groupBox_9);
        b_automatic_path->setObjectName(QString::fromUtf8("b_automatic_path"));
        b_automatic_path->setChecked(true);

        verticalLayout_2->addWidget(b_automatic_path);

        b_absolute_path = new QRadioButton(groupBox_9);
        b_absolute_path->setObjectName(QString::fromUtf8("b_absolute_path"));

        verticalLayout_2->addWidget(b_absolute_path);

        b_relative_path = new QRadioButton(groupBox_9);
        b_relative_path->setObjectName(QString::fromUtf8("b_relative_path"));

        verticalLayout_2->addWidget(b_relative_path);

        b_ask_path = new QRadioButton(groupBox_9);
        b_ask_path->setObjectName(QString::fromUtf8("b_ask_path"));

        verticalLayout_2->addWidget(b_ask_path);

        verticalSpacer_7 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_7);

        b_write_metadata = new QCheckBox(groupBox_9);
        b_write_metadata->setObjectName(QString::fromUtf8("b_write_metadata"));
        b_write_metadata->setChecked(true);

        verticalLayout_2->addWidget(b_write_metadata);


        verticalLayout->addWidget(groupBox_9);

        groupBox_sort_ignore = new QGroupBox(BehaviourSettingsPage);
        groupBox_sort_ignore->setObjectName(QString::fromUtf8("groupBox_sort_ignore"));
        horizontalLayout = new QHBoxLayout(groupBox_sort_ignore);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        sort_ignore_prefix = new QCheckBox(groupBox_sort_ignore);
        sort_ignore_prefix->setObjectName(QString::fromUtf8("sort_ignore_prefix"));

        horizontalLayout->addWidget(sort_ignore_prefix);

        sort_ignore_prefix_list = new QLineEdit(groupBox_sort_ignore);
        sort_ignore_prefix_list->setObjectName(QString::fromUtf8("sort_ignore_prefix_list"));

        horizontalLayout->addWidget(sort_ignore_prefix_list);


        verticalLayout->addWidget(groupBox_sort_ignore);

        groupBox_play_count = new QGroupBox(BehaviourSettingsPage);
        groupBox_play_count->setObjectName(QString::fromUtf8("groupBox_play_count"));
        verticalLayout_3 = new QVBoxLayout(groupBox_play_count);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        b_play_count_normal_duration = new QRadioButton(groupBox_play_count);
        b_play_count_normal_duration->setObjectName(QString::fromUtf8("b_play_count_normal_duration"));
        b_play_count_normal_duration->setChecked(true);

        verticalLayout_3->addWidget(b_play_count_normal_duration);

        b_play_count_short_duration = new QRadioButton(groupBox_play_count);
        b_play_count_short_duration->setObjectName(QString::fromUtf8("b_play_count_short_duration"));

        verticalLayout_3->addWidget(b_play_count_short_duration);


        verticalLayout->addWidget(groupBox_play_count);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(BehaviourSettingsPage);

        menu_playmode->setCurrentIndex(0);
        menu_previousmode->setCurrentIndex(0);
        doubleclick_addmode->setCurrentIndex(0);
        doubleclick_playmode->setCurrentIndex(1);
        doubleclick_playlist_addmode->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BehaviourSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *BehaviourSettingsPage)
    {
        BehaviourSettingsPage->setWindowTitle(QCoreApplication::translate("BehaviourSettingsPage", "Behavior", nullptr));
        b_show_tray_icon_->setText(QCoreApplication::translate("BehaviourSettingsPage", "Show tray icon", nullptr));
        b_scroll_tray_icon_->setText(QCoreApplication::translate("BehaviourSettingsPage", "Scroll over icon to change track", nullptr));
        b_keep_running_->setText(QCoreApplication::translate("BehaviourSettingsPage", "Keep running in the background when the window is closed", nullptr));
        b_warn_close_playlist_->setText(QCoreApplication::translate("BehaviourSettingsPage", "Warn me when closing a playlist tab", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("BehaviourSettingsPage", "Language", nullptr));
        language->setItemText(0, QCoreApplication::translate("BehaviourSettingsPage", "Use the system default", nullptr));

        label_10->setText(QCoreApplication::translate("BehaviourSettingsPage", "You will need to restart Clementine if you change the language.", nullptr));
        startup_group_->setTitle(QCoreApplication::translate("BehaviourSettingsPage", "When Clementine starts", nullptr));
        b_always_show_->setText(QCoreApplication::translate("BehaviourSettingsPage", "Always show &the main window", nullptr));
        b_always_hide_->setText(QCoreApplication::translate("BehaviourSettingsPage", "Alwa&ys hide the main window", nullptr));
        b_remember_->setText(QCoreApplication::translate("BehaviourSettingsPage", "Remember from &last time", nullptr));
#if QT_CONFIG(tooltip)
        b_click_edit_inline_->setToolTip(QCoreApplication::translate("BehaviourSettingsPage", "If activated, clicking a selected song in the playlist view will let you edit the tag value directly", nullptr));
#endif // QT_CONFIG(tooltip)
        b_click_edit_inline_->setText(QCoreApplication::translate("BehaviourSettingsPage", "Enable song metadata inline edition with click", nullptr));
        resume_after_start_->setText(QCoreApplication::translate("BehaviourSettingsPage", "Resume playback on start", nullptr));
        stop_play_if_fail_->setText(QCoreApplication::translate("BehaviourSettingsPage", "Stop playback if song fails to play", nullptr));
        b_grey_out_deleted_->setText(QCoreApplication::translate("BehaviourSettingsPage", "Grey out non existent songs in my playlists", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("BehaviourSettingsPage", "Using the menu to add a song will...", nullptr));
        menu_playmode->setItemText(0, QCoreApplication::translate("BehaviourSettingsPage", "Never start playing", nullptr));
        menu_playmode->setItemText(1, QCoreApplication::translate("BehaviourSettingsPage", "Play if there is nothing already playing", nullptr));
        menu_playmode->setItemText(2, QCoreApplication::translate("BehaviourSettingsPage", "Always start playing", nullptr));

        groupBox_previous->setTitle(QCoreApplication::translate("BehaviourSettingsPage", "Pressing \"Previous\" in player will...", nullptr));
        menu_previousmode->setItemText(0, QCoreApplication::translate("BehaviourSettingsPage", "Jump to previous song right away", nullptr));
        menu_previousmode->setItemText(1, QCoreApplication::translate("BehaviourSettingsPage", "Restart song, then jump to previous if pressed again", nullptr));

        groupBox_7->setTitle(QCoreApplication::translate("BehaviourSettingsPage", "Double clicking a song will...", nullptr));
        doubleclick_addmode->setItemText(0, QCoreApplication::translate("BehaviourSettingsPage", "Append to the playlist", nullptr));
        doubleclick_addmode->setItemText(1, QCoreApplication::translate("BehaviourSettingsPage", "Replace the playlist", nullptr));
        doubleclick_addmode->setItemText(2, QCoreApplication::translate("BehaviourSettingsPage", "Open in new playlist", "Refers to behavior settings in Clementine settings page."));
        doubleclick_addmode->setItemText(3, QCoreApplication::translate("BehaviourSettingsPage", "Add to the queue", nullptr));

        doubleclick_playmode->setItemText(0, QCoreApplication::translate("BehaviourSettingsPage", "Never start playing", nullptr));
        doubleclick_playmode->setItemText(1, QCoreApplication::translate("BehaviourSettingsPage", "Play if there is nothing already playing", nullptr));
        doubleclick_playmode->setItemText(2, QCoreApplication::translate("BehaviourSettingsPage", "Always start playing", nullptr));

        groupBox_doubleclick_playlist->setTitle(QCoreApplication::translate("BehaviourSettingsPage", "Double clicking a song in the playlist will...", nullptr));
        doubleclick_playlist_addmode->setItemText(0, QCoreApplication::translate("BehaviourSettingsPage", "Change the currently playing song", nullptr));
        doubleclick_playlist_addmode->setItemText(1, QCoreApplication::translate("BehaviourSettingsPage", "Add to the queue", nullptr));

        groupBox_seekstep->setTitle(QCoreApplication::translate("BehaviourSettingsPage", "Seeking using a keyboard shortcut or mouse wheel", nullptr));
        label_seekstep->setText(QCoreApplication::translate("BehaviourSettingsPage", "Time step", nullptr));
        seek_step_sec->setSuffix(QCoreApplication::translate("BehaviourSettingsPage", " s", nullptr));
        seek_step_sec->setPrefix(QString());
        groupBox_9->setTitle(QCoreApplication::translate("BehaviourSettingsPage", "When saving a playlist, file paths should be", nullptr));
        b_automatic_path->setText(QCoreApplication::translate("BehaviourSettingsPage", "A&utomatic", nullptr));
        b_absolute_path->setText(QCoreApplication::translate("BehaviourSettingsPage", "Absolute", nullptr));
        b_relative_path->setText(QCoreApplication::translate("BehaviourSettingsPage", "Relative", nullptr));
        b_ask_path->setText(QCoreApplication::translate("BehaviourSettingsPage", "As&k when saving", nullptr));
        b_write_metadata->setText(QCoreApplication::translate("BehaviourSettingsPage", "Write metadata", nullptr));
        groupBox_sort_ignore->setTitle(QCoreApplication::translate("BehaviourSettingsPage", "When sorting artists, albums and titles", nullptr));
        sort_ignore_prefix->setText(QCoreApplication::translate("BehaviourSettingsPage", "Ignore prefix word(s)", nullptr));
#if QT_CONFIG(tooltip)
        sort_ignore_prefix_list->setToolTip(QCoreApplication::translate("BehaviourSettingsPage", "Comma separated list of prefix words to ignore when sorting", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_play_count->setTitle(QCoreApplication::translate("BehaviourSettingsPage", "When calculating play counts, use", nullptr));
        b_play_count_normal_duration->setText(QCoreApplication::translate("BehaviourSettingsPage", "Normal duration (at least 4 minutes or half the track length)", nullptr));
        b_play_count_short_duration->setText(QCoreApplication::translate("BehaviourSettingsPage", "Short duration (at least 1 minute or half the track length)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BehaviourSettingsPage: public Ui_BehaviourSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEHAVIOURSETTINGSPAGE_H
