/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "analyzers/analyzercontainer.h"
#include "playlist/playlistcontainer.h"
#include "playlist/playlistsequence.h"
#include "widgets/fancytabwidget.h"
#include "widgets/multiloadingindicator.h"
#include "widgets/nowplayingwidget.h"
#include "widgets/sliderwidget.h"
#include "widgets/trackslider.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_previous_track;
    QAction *action_play_pause;
    QAction *action_stop;
    QAction *action_next_track;
    QAction *action_quit;
    QAction *action_stop_after_this_track;
    QAction *action_love;
    QAction *action_clear_playlist;
    QAction *action_edit_track;
    QAction *action_renumber_tracks;
    QAction *action_selection_set_value;
    QAction *action_edit_value;
    QAction *action_configure;
    QAction *action_about;
    QAction *action_shuffle;
    QAction *action_add_file;
    QAction *action_add_stream;
    QAction *action_open_media;
    QAction *action_open_cd;
    QAction *action_cover_manager;
    QAction *action_rain;
    QAction *action_hypnotoad;
    QAction *action_enterprise;
    QAction *action_kittens;
    QAction *action_console;
    QAction *action_shuffle_mode;
    QAction *action_repeat_mode;
    QAction *action_remove_from_playlist;
    QAction *action_equalizer;
    QAction *action_transcode;
    QAction *action_add_folder;
    QAction *action_jump;
    QAction *action_new_playlist;
    QAction *action_save_playlist;
    QAction *action_load_playlist;
    QAction *action_next_playlist;
    QAction *action_previous_playlist;
    QAction *action_update_library;
    QAction *action_visualisations;
    QAction *action_queue_manager;
    QAction *action_about_qt;
    QAction *action_mute;
    QAction *action_full_library_scan;
    QAction *action_auto_complete_tags;
    QAction *action_toggle_scrobbling;
    QAction *action_add_podcast;
    QAction *action_remove_duplicates;
    QAction *action_add_files_to_transcoder;
    QAction *action_rip_audio_cd;
    QAction *action_remove_unavailable;
    QAction *action_view_stream_details;
    QAction *action_toggle_show_sidebar;
    QAction *action_next_album;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_8;
    QSplitter *splitter;
    QWidget *sidebar_layout;
    QVBoxLayout *verticalLayout_4;
    FancyTabWidget *tabs;
    NowPlayingWidget *now_playing;
    QWidget *playlist_layout;
    QVBoxLayout *verticalLayout_7;
    PlaylistContainer *playlist;
    QHBoxLayout *horizontalLayout_4;
    QFrame *line_6;
    QWidget *player_controls_container;
    QVBoxLayout *player_controls_layout;
    QFrame *player_controls;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *clear_playlist_button;
    QFrame *line_3;
    QToolButton *back_button;
    QToolButton *pause_play_button;
    QToolButton *stop_button;
    QToolButton *forward_button;
    QWidget *last_fm_controls;
    QHBoxLayout *horizontalLayout_3;
    QFrame *lastfm_line;
    QToolButton *love_button;
    QFrame *line;
    AnalyzerContainer *analyzer;
    QSpacerItem *horizontalSpacer;
    QFrame *line_4;
    Amarok::VolumeSlider *volume;
    QWidget *status_bar;
    QVBoxLayout *status_bar_layout;
    QFrame *status_bar_line;
    QWidget *status_bar_internal;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *status_bar_stack;
    MultiLoadingIndicator *multi_loading_indicator;
    QWidget *playlist_summary_page;
    QVBoxLayout *playlist_summary_layout;
    QLabel *playlist_summary;
    QFrame *line_5;
    PlaylistSequence *playlist_sequence;
    QFrame *line_2;
    QToolButton *scrobbling_button;
    TrackSlider *track_slider;
    QMenuBar *menuBar;
    QMenu *menu_music;
    QMenu *menu_playlist;
    QMenu *menu_help;
    QMenu *menu_extras;
    QMenu *menu_tools;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1131, 685);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action_previous_track = new QAction(MainWindow);
        action_previous_track->setObjectName(QString::fromUtf8("action_previous_track"));
#if QT_CONFIG(shortcut)
        action_previous_track->setShortcut(QString::fromUtf8("F5"));
#endif // QT_CONFIG(shortcut)
        action_play_pause = new QAction(MainWindow);
        action_play_pause->setObjectName(QString::fromUtf8("action_play_pause"));
#if QT_CONFIG(shortcut)
        action_play_pause->setShortcut(QString::fromUtf8("F6"));
#endif // QT_CONFIG(shortcut)
        action_stop = new QAction(MainWindow);
        action_stop->setObjectName(QString::fromUtf8("action_stop"));
        action_stop->setEnabled(false);
#if QT_CONFIG(shortcut)
        action_stop->setShortcut(QString::fromUtf8("F7"));
#endif // QT_CONFIG(shortcut)
        action_next_track = new QAction(MainWindow);
        action_next_track->setObjectName(QString::fromUtf8("action_next_track"));
#if QT_CONFIG(shortcut)
        action_next_track->setShortcut(QString::fromUtf8("F8"));
#endif // QT_CONFIG(shortcut)
        action_quit = new QAction(MainWindow);
        action_quit->setObjectName(QString::fromUtf8("action_quit"));
#if QT_CONFIG(shortcut)
        action_quit->setShortcut(QString::fromUtf8("Ctrl+Q"));
#endif // QT_CONFIG(shortcut)
        action_quit->setMenuRole(QAction::QuitRole);
        action_stop_after_this_track = new QAction(MainWindow);
        action_stop_after_this_track->setObjectName(QString::fromUtf8("action_stop_after_this_track"));
#if QT_CONFIG(shortcut)
        action_stop_after_this_track->setShortcut(QString::fromUtf8("Ctrl+Alt+V"));
#endif // QT_CONFIG(shortcut)
        action_love = new QAction(MainWindow);
        action_love->setObjectName(QString::fromUtf8("action_love"));
        action_love->setEnabled(false);
#if QT_CONFIG(shortcut)
        action_love->setShortcut(QString::fromUtf8("Ctrl+L"));
#endif // QT_CONFIG(shortcut)
        action_clear_playlist = new QAction(MainWindow);
        action_clear_playlist->setObjectName(QString::fromUtf8("action_clear_playlist"));
#if QT_CONFIG(shortcut)
        action_clear_playlist->setShortcut(QString::fromUtf8("Ctrl+K"));
#endif // QT_CONFIG(shortcut)
        action_edit_track = new QAction(MainWindow);
        action_edit_track->setObjectName(QString::fromUtf8("action_edit_track"));
#if QT_CONFIG(shortcut)
        action_edit_track->setShortcut(QString::fromUtf8("Ctrl+E"));
#endif // QT_CONFIG(shortcut)
        action_renumber_tracks = new QAction(MainWindow);
        action_renumber_tracks->setObjectName(QString::fromUtf8("action_renumber_tracks"));
        action_selection_set_value = new QAction(MainWindow);
        action_selection_set_value->setObjectName(QString::fromUtf8("action_selection_set_value"));
        action_edit_value = new QAction(MainWindow);
        action_edit_value->setObjectName(QString::fromUtf8("action_edit_value"));
#if QT_CONFIG(shortcut)
        action_edit_value->setShortcut(QString::fromUtf8("F2"));
#endif // QT_CONFIG(shortcut)
        action_configure = new QAction(MainWindow);
        action_configure->setObjectName(QString::fromUtf8("action_configure"));
#if QT_CONFIG(shortcut)
        action_configure->setShortcut(QString::fromUtf8("Ctrl+P"));
#endif // QT_CONFIG(shortcut)
        action_configure->setMenuRole(QAction::PreferencesRole);
        action_about = new QAction(MainWindow);
        action_about->setObjectName(QString::fromUtf8("action_about"));
#if QT_CONFIG(shortcut)
        action_about->setShortcut(QString::fromUtf8("F1"));
#endif // QT_CONFIG(shortcut)
        action_about->setMenuRole(QAction::AboutRole);
        action_shuffle = new QAction(MainWindow);
        action_shuffle->setObjectName(QString::fromUtf8("action_shuffle"));
#if QT_CONFIG(shortcut)
        action_shuffle->setShortcut(QString::fromUtf8("Ctrl+H"));
#endif // QT_CONFIG(shortcut)
        action_add_file = new QAction(MainWindow);
        action_add_file->setObjectName(QString::fromUtf8("action_add_file"));
#if QT_CONFIG(shortcut)
        action_add_file->setShortcut(QString::fromUtf8("Ctrl+Shift+A"));
#endif // QT_CONFIG(shortcut)
        action_add_stream = new QAction(MainWindow);
        action_add_stream->setObjectName(QString::fromUtf8("action_add_stream"));
#if QT_CONFIG(shortcut)
        action_add_stream->setShortcut(QString::fromUtf8("Ctrl+O"));
#endif // QT_CONFIG(shortcut)
        action_open_media = new QAction(MainWindow);
        action_open_media->setObjectName(QString::fromUtf8("action_open_media"));
        action_open_cd = new QAction(MainWindow);
        action_open_cd->setObjectName(QString::fromUtf8("action_open_cd"));
        action_cover_manager = new QAction(MainWindow);
        action_cover_manager->setObjectName(QString::fromUtf8("action_cover_manager"));
        action_rain = new QAction(MainWindow);
        action_rain->setObjectName(QString::fromUtf8("action_rain"));
        action_rain->setCheckable(true);
        action_hypnotoad = new QAction(MainWindow);
        action_hypnotoad->setObjectName(QString::fromUtf8("action_hypnotoad"));
        action_hypnotoad->setCheckable(true);
        action_enterprise = new QAction(MainWindow);
        action_enterprise->setObjectName(QString::fromUtf8("action_enterprise"));
        action_enterprise->setCheckable(true);
        action_kittens = new QAction(MainWindow);
        action_kittens->setObjectName(QString::fromUtf8("action_kittens"));
        action_kittens->setCheckable(true);
        action_console = new QAction(MainWindow);
        action_console->setObjectName(QString::fromUtf8("action_console"));
        action_shuffle_mode = new QAction(MainWindow);
        action_shuffle_mode->setObjectName(QString::fromUtf8("action_shuffle_mode"));
        action_repeat_mode = new QAction(MainWindow);
        action_repeat_mode->setObjectName(QString::fromUtf8("action_repeat_mode"));
        action_remove_from_playlist = new QAction(MainWindow);
        action_remove_from_playlist->setObjectName(QString::fromUtf8("action_remove_from_playlist"));
        action_equalizer = new QAction(MainWindow);
        action_equalizer->setObjectName(QString::fromUtf8("action_equalizer"));
        action_transcode = new QAction(MainWindow);
        action_transcode->setObjectName(QString::fromUtf8("action_transcode"));
        action_add_folder = new QAction(MainWindow);
        action_add_folder->setObjectName(QString::fromUtf8("action_add_folder"));
        action_jump = new QAction(MainWindow);
        action_jump->setObjectName(QString::fromUtf8("action_jump"));
#if QT_CONFIG(shortcut)
        action_jump->setShortcut(QString::fromUtf8("Ctrl+J"));
#endif // QT_CONFIG(shortcut)
        action_new_playlist = new QAction(MainWindow);
        action_new_playlist->setObjectName(QString::fromUtf8("action_new_playlist"));
#if QT_CONFIG(shortcut)
        action_new_playlist->setShortcut(QString::fromUtf8("Ctrl+N"));
#endif // QT_CONFIG(shortcut)
        action_save_playlist = new QAction(MainWindow);
        action_save_playlist->setObjectName(QString::fromUtf8("action_save_playlist"));
#if QT_CONFIG(shortcut)
        action_save_playlist->setShortcut(QString::fromUtf8("Ctrl+S"));
#endif // QT_CONFIG(shortcut)
        action_load_playlist = new QAction(MainWindow);
        action_load_playlist->setObjectName(QString::fromUtf8("action_load_playlist"));
#if QT_CONFIG(shortcut)
        action_load_playlist->setShortcut(QString::fromUtf8("Ctrl+Shift+O"));
#endif // QT_CONFIG(shortcut)
        action_next_playlist = new QAction(MainWindow);
        action_next_playlist->setObjectName(QString::fromUtf8("action_next_playlist"));
        action_previous_playlist = new QAction(MainWindow);
        action_previous_playlist->setObjectName(QString::fromUtf8("action_previous_playlist"));
        action_update_library = new QAction(MainWindow);
        action_update_library->setObjectName(QString::fromUtf8("action_update_library"));
        action_visualisations = new QAction(MainWindow);
        action_visualisations->setObjectName(QString::fromUtf8("action_visualisations"));
        action_queue_manager = new QAction(MainWindow);
        action_queue_manager->setObjectName(QString::fromUtf8("action_queue_manager"));
        action_about_qt = new QAction(MainWindow);
        action_about_qt->setObjectName(QString::fromUtf8("action_about_qt"));
        action_about_qt->setMenuRole(QAction::AboutQtRole);
        action_mute = new QAction(MainWindow);
        action_mute->setObjectName(QString::fromUtf8("action_mute"));
        action_mute->setCheckable(true);
#if QT_CONFIG(shortcut)
        action_mute->setShortcut(QString::fromUtf8("Ctrl+M"));
#endif // QT_CONFIG(shortcut)
        action_full_library_scan = new QAction(MainWindow);
        action_full_library_scan->setObjectName(QString::fromUtf8("action_full_library_scan"));
        action_auto_complete_tags = new QAction(MainWindow);
        action_auto_complete_tags->setObjectName(QString::fromUtf8("action_auto_complete_tags"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/providers/musicbrainz.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_auto_complete_tags->setIcon(icon1);
#if QT_CONFIG(shortcut)
        action_auto_complete_tags->setShortcut(QString::fromUtf8("Ctrl+T"));
#endif // QT_CONFIG(shortcut)
        action_toggle_scrobbling = new QAction(MainWindow);
        action_toggle_scrobbling->setObjectName(QString::fromUtf8("action_toggle_scrobbling"));
        action_add_podcast = new QAction(MainWindow);
        action_add_podcast->setObjectName(QString::fromUtf8("action_add_podcast"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/providers/podcast16.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_add_podcast->setIcon(icon2);
        action_remove_duplicates = new QAction(MainWindow);
        action_remove_duplicates->setObjectName(QString::fromUtf8("action_remove_duplicates"));
        action_add_files_to_transcoder = new QAction(MainWindow);
        action_add_files_to_transcoder->setObjectName(QString::fromUtf8("action_add_files_to_transcoder"));
        action_add_files_to_transcoder->setCheckable(false);
#if QT_CONFIG(shortcut)
        action_add_files_to_transcoder->setShortcut(QString::fromUtf8("Ctrl+Shift+T"));
#endif // QT_CONFIG(shortcut)
        action_rip_audio_cd = new QAction(MainWindow);
        action_rip_audio_cd->setObjectName(QString::fromUtf8("action_rip_audio_cd"));
        action_remove_unavailable = new QAction(MainWindow);
        action_remove_unavailable->setObjectName(QString::fromUtf8("action_remove_unavailable"));
        action_view_stream_details = new QAction(MainWindow);
        action_view_stream_details->setObjectName(QString::fromUtf8("action_view_stream_details"));
        action_toggle_show_sidebar = new QAction(MainWindow);
        action_toggle_show_sidebar->setObjectName(QString::fromUtf8("action_toggle_show_sidebar"));
        action_toggle_show_sidebar->setCheckable(true);
        action_next_album = new QAction(MainWindow);
        action_next_album->setObjectName(QString::fromUtf8("action_next_album"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_8 = new QVBoxLayout(centralWidget);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        sidebar_layout = new QWidget(splitter);
        sidebar_layout->setObjectName(QString::fromUtf8("sidebar_layout"));
        verticalLayout_4 = new QVBoxLayout(sidebar_layout);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        tabs = new FancyTabWidget(sidebar_layout);
        tabs->setObjectName(QString::fromUtf8("tabs"));

        verticalLayout_4->addWidget(tabs);

        now_playing = new NowPlayingWidget(sidebar_layout);
        now_playing->setObjectName(QString::fromUtf8("now_playing"));

        verticalLayout_4->addWidget(now_playing);

        splitter->addWidget(sidebar_layout);
        playlist_layout = new QWidget(splitter);
        playlist_layout->setObjectName(QString::fromUtf8("playlist_layout"));
        verticalLayout_7 = new QVBoxLayout(playlist_layout);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        playlist = new PlaylistContainer(playlist_layout);
        playlist->setObjectName(QString::fromUtf8("playlist"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(playlist->sizePolicy().hasHeightForWidth());
        playlist->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(playlist);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        line_6 = new QFrame(playlist_layout);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_6);

        player_controls_container = new QWidget(playlist_layout);
        player_controls_container->setObjectName(QString::fromUtf8("player_controls_container"));
        player_controls_layout = new QVBoxLayout(player_controls_container);
        player_controls_layout->setSpacing(0);
        player_controls_layout->setContentsMargins(11, 11, 11, 11);
        player_controls_layout->setObjectName(QString::fromUtf8("player_controls_layout"));
        player_controls_layout->setContentsMargins(0, 0, 0, 0);
        player_controls = new QFrame(player_controls_container);
        player_controls->setObjectName(QString::fromUtf8("player_controls"));
        player_controls->setFrameShape(QFrame::NoFrame);
        horizontalLayout_2 = new QHBoxLayout(player_controls);
        horizontalLayout_2->setSpacing(1);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        clear_playlist_button = new QToolButton(player_controls);
        clear_playlist_button->setObjectName(QString::fromUtf8("clear_playlist_button"));
        clear_playlist_button->setIconSize(QSize(22, 22));
        clear_playlist_button->setAutoRaise(true);

        horizontalLayout_2->addWidget(clear_playlist_button);

        line_3 = new QFrame(player_controls);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_3);

        back_button = new QToolButton(player_controls);
        back_button->setObjectName(QString::fromUtf8("back_button"));
        back_button->setIconSize(QSize(22, 22));
        back_button->setAutoRaise(true);

        horizontalLayout_2->addWidget(back_button);

        pause_play_button = new QToolButton(player_controls);
        pause_play_button->setObjectName(QString::fromUtf8("pause_play_button"));
        pause_play_button->setIconSize(QSize(22, 22));
        pause_play_button->setAutoRaise(true);

        horizontalLayout_2->addWidget(pause_play_button);

        stop_button = new QToolButton(player_controls);
        stop_button->setObjectName(QString::fromUtf8("stop_button"));
        stop_button->setEnabled(false);
        stop_button->setIconSize(QSize(22, 22));
        stop_button->setPopupMode(QToolButton::MenuButtonPopup);
        stop_button->setAutoRaise(true);

        horizontalLayout_2->addWidget(stop_button);

        forward_button = new QToolButton(player_controls);
        forward_button->setObjectName(QString::fromUtf8("forward_button"));
        forward_button->setMinimumSize(QSize(42, 29));
        forward_button->setIconSize(QSize(22, 22));
        forward_button->setPopupMode(QToolButton::MenuButtonPopup);
        forward_button->setAutoRaise(true);

        horizontalLayout_2->addWidget(forward_button);

        last_fm_controls = new QWidget(player_controls);
        last_fm_controls->setObjectName(QString::fromUtf8("last_fm_controls"));
        horizontalLayout_3 = new QHBoxLayout(last_fm_controls);
        horizontalLayout_3->setSpacing(1);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lastfm_line = new QFrame(last_fm_controls);
        lastfm_line->setObjectName(QString::fromUtf8("lastfm_line"));
        lastfm_line->setFrameShape(QFrame::VLine);
        lastfm_line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(lastfm_line);

        love_button = new QToolButton(last_fm_controls);
        love_button->setObjectName(QString::fromUtf8("love_button"));
        love_button->setIconSize(QSize(22, 22));
        love_button->setAutoRaise(true);

        horizontalLayout_3->addWidget(love_button);


        horizontalLayout_2->addWidget(last_fm_controls);

        line = new QFrame(player_controls);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line);

        analyzer = new AnalyzerContainer(player_controls);
        analyzer->setObjectName(QString::fromUtf8("analyzer"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(100);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(analyzer->sizePolicy().hasHeightForWidth());
        analyzer->setSizePolicy(sizePolicy1);
        analyzer->setMinimumSize(QSize(0, 36));

        horizontalLayout_2->addWidget(analyzer);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        line_4 = new QFrame(player_controls);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_4);

        volume = new Amarok::VolumeSlider(player_controls);
        volume->setObjectName(QString::fromUtf8("volume"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(volume->sizePolicy().hasHeightForWidth());
        volume->setSizePolicy(sizePolicy2);
        volume->setMaximum(100);
        volume->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(volume);


        player_controls_layout->addWidget(player_controls);

        status_bar = new QWidget(player_controls_container);
        status_bar->setObjectName(QString::fromUtf8("status_bar"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(status_bar->sizePolicy().hasHeightForWidth());
        status_bar->setSizePolicy(sizePolicy3);
        status_bar_layout = new QVBoxLayout(status_bar);
        status_bar_layout->setSpacing(0);
        status_bar_layout->setContentsMargins(11, 11, 11, 11);
        status_bar_layout->setObjectName(QString::fromUtf8("status_bar_layout"));
        status_bar_layout->setContentsMargins(0, 0, 0, 0);
        status_bar_line = new QFrame(status_bar);
        status_bar_line->setObjectName(QString::fromUtf8("status_bar_line"));
        status_bar_line->setFrameShape(QFrame::HLine);
        status_bar_line->setFrameShadow(QFrame::Sunken);

        status_bar_layout->addWidget(status_bar_line);

        status_bar_internal = new QWidget(status_bar);
        status_bar_internal->setObjectName(QString::fromUtf8("status_bar_internal"));
        sizePolicy3.setHeightForWidth(status_bar_internal->sizePolicy().hasHeightForWidth());
        status_bar_internal->setSizePolicy(sizePolicy3);
        horizontalLayout = new QHBoxLayout(status_bar_internal);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        status_bar_stack = new QStackedWidget(status_bar_internal);
        status_bar_stack->setObjectName(QString::fromUtf8("status_bar_stack"));
        multi_loading_indicator = new MultiLoadingIndicator();
        multi_loading_indicator->setObjectName(QString::fromUtf8("multi_loading_indicator"));
        status_bar_stack->addWidget(multi_loading_indicator);
        playlist_summary_page = new QWidget();
        playlist_summary_page->setObjectName(QString::fromUtf8("playlist_summary_page"));
        playlist_summary_layout = new QVBoxLayout(playlist_summary_page);
        playlist_summary_layout->setSpacing(0);
        playlist_summary_layout->setContentsMargins(11, 11, 11, 11);
        playlist_summary_layout->setObjectName(QString::fromUtf8("playlist_summary_layout"));
        playlist_summary_layout->setContentsMargins(0, 0, 0, 0);
        playlist_summary = new QLabel(playlist_summary_page);
        playlist_summary->setObjectName(QString::fromUtf8("playlist_summary"));
        playlist_summary->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        playlist_summary_layout->addWidget(playlist_summary);

        status_bar_stack->addWidget(playlist_summary_page);

        horizontalLayout->addWidget(status_bar_stack);

        line_5 = new QFrame(status_bar_internal);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_5);

        playlist_sequence = new PlaylistSequence(status_bar_internal);
        playlist_sequence->setObjectName(QString::fromUtf8("playlist_sequence"));

        horizontalLayout->addWidget(playlist_sequence);

        line_2 = new QFrame(status_bar_internal);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        scrobbling_button = new QToolButton(status_bar_internal);
        scrobbling_button->setObjectName(QString::fromUtf8("scrobbling_button"));
        scrobbling_button->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(scrobbling_button->sizePolicy().hasHeightForWidth());
        scrobbling_button->setSizePolicy(sizePolicy4);
        scrobbling_button->setIconSize(QSize(16, 16));
        scrobbling_button->setAutoRaise(true);

        horizontalLayout->addWidget(scrobbling_button);

        track_slider = new TrackSlider(status_bar_internal);
        track_slider->setObjectName(QString::fromUtf8("track_slider"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(10);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(track_slider->sizePolicy().hasHeightForWidth());
        track_slider->setSizePolicy(sizePolicy5);

        horizontalLayout->addWidget(track_slider);


        status_bar_layout->addWidget(status_bar_internal);


        player_controls_layout->addWidget(status_bar);


        horizontalLayout_4->addWidget(player_controls_container);


        verticalLayout_7->addLayout(horizontalLayout_4);

        splitter->addWidget(playlist_layout);

        verticalLayout_8->addWidget(splitter);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1131, 22));
        menu_music = new QMenu(menuBar);
        menu_music->setObjectName(QString::fromUtf8("menu_music"));
        menu_playlist = new QMenu(menuBar);
        menu_playlist->setObjectName(QString::fromUtf8("menu_playlist"));
        menu_help = new QMenu(menuBar);
        menu_help->setObjectName(QString::fromUtf8("menu_help"));
        menu_extras = new QMenu(menuBar);
        menu_extras->setObjectName(QString::fromUtf8("menu_extras"));
        menu_tools = new QMenu(menuBar);
        menu_tools->setObjectName(QString::fromUtf8("menu_tools"));
        MainWindow->setMenuBar(menuBar);

        playlist->addAction(action_edit_track);
        playlist->addAction(action_edit_value);
        menuBar->addAction(menu_music->menuAction());
        menuBar->addAction(menu_playlist->menuAction());
        menuBar->addAction(menu_tools->menuAction());
        menuBar->addAction(menu_extras->menuAction());
        menuBar->addAction(menu_help->menuAction());
        menu_music->addAction(action_open_media);
        menu_music->addAction(action_open_cd);
        menu_music->addAction(action_add_podcast);
        menu_music->addSeparator();
        menu_music->addAction(action_previous_track);
        menu_music->addAction(action_play_pause);
        menu_music->addAction(action_stop);
        menu_music->addAction(action_next_track);
        menu_music->addSeparator();
        menu_music->addAction(action_mute);
        menu_music->addSeparator();
        menu_music->addAction(action_love);
        menu_music->addSeparator();
        menu_music->addAction(action_quit);
        menu_playlist->addAction(action_add_file);
        menu_playlist->addAction(action_add_folder);
        menu_playlist->addAction(action_add_stream);
        menu_playlist->addSeparator();
        menu_playlist->addAction(action_shuffle_mode);
        menu_playlist->addAction(action_repeat_mode);
        menu_playlist->addSeparator();
        menu_playlist->addAction(action_new_playlist);
        menu_playlist->addAction(action_save_playlist);
        menu_playlist->addAction(action_load_playlist);
        menu_playlist->addSeparator();
        menu_playlist->addAction(action_jump);
        menu_playlist->addAction(action_clear_playlist);
        menu_playlist->addAction(action_shuffle);
        menu_playlist->addAction(action_remove_duplicates);
        menu_playlist->addAction(action_remove_unavailable);
        menu_help->addAction(action_about);
        menu_help->addAction(action_about_qt);
        menu_help->addSeparator();
        menu_extras->addAction(action_rain);
        menu_extras->addAction(action_hypnotoad);
        menu_extras->addAction(action_enterprise);
        menu_extras->addAction(action_kittens);
        menu_extras->addAction(action_console);
        menu_extras->addSeparator();
        menu_tools->addAction(action_cover_manager);
        menu_tools->addAction(action_queue_manager);
        menu_tools->addAction(action_equalizer);
        menu_tools->addAction(action_visualisations);
        menu_tools->addAction(action_transcode);
        menu_tools->addAction(action_rip_audio_cd);
        menu_tools->addSeparator();
        menu_tools->addAction(action_update_library);
        menu_tools->addAction(action_full_library_scan);
        menu_tools->addSeparator();
        menu_tools->addAction(action_configure);
        menu_tools->addSeparator();
        menu_tools->addAction(action_toggle_show_sidebar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Clementine", nullptr));
        action_previous_track->setText(QCoreApplication::translate("MainWindow", "Previous track", nullptr));
        action_play_pause->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        action_stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        action_next_track->setText(QCoreApplication::translate("MainWindow", "Next track", nullptr));
        action_quit->setText(QCoreApplication::translate("MainWindow", "&Quit", nullptr));
        action_stop_after_this_track->setText(QCoreApplication::translate("MainWindow", "Stop after this track", nullptr));
        action_love->setText(QCoreApplication::translate("MainWindow", "Love", nullptr));
        action_clear_playlist->setText(QCoreApplication::translate("MainWindow", "Clear playlist", nullptr));
#if QT_CONFIG(tooltip)
        action_clear_playlist->setToolTip(QCoreApplication::translate("MainWindow", "Clear playlist", nullptr));
#endif // QT_CONFIG(tooltip)
        action_edit_track->setText(QCoreApplication::translate("MainWindow", "Edit track information...", nullptr));
        action_renumber_tracks->setText(QCoreApplication::translate("MainWindow", "Renumber tracks in this order...", nullptr));
        action_selection_set_value->setText(QCoreApplication::translate("MainWindow", "Set value for all selected tracks...", nullptr));
        action_edit_value->setText(QCoreApplication::translate("MainWindow", "Edit tag...", nullptr));
        action_configure->setText(QCoreApplication::translate("MainWindow", "Preferences...", nullptr));
        action_about->setText(QCoreApplication::translate("MainWindow", "About Clementine...", nullptr));
        action_shuffle->setText(QCoreApplication::translate("MainWindow", "Shuffle playlist", nullptr));
        action_add_file->setText(QCoreApplication::translate("MainWindow", "Add file...", nullptr));
        action_add_stream->setText(QCoreApplication::translate("MainWindow", "Add stream...", nullptr));
        action_open_media->setText(QCoreApplication::translate("MainWindow", "Open file...", nullptr));
        action_open_cd->setText(QCoreApplication::translate("MainWindow", "Open &audio CD...", nullptr));
        action_cover_manager->setText(QCoreApplication::translate("MainWindow", "Cover Manager", nullptr));
        action_rain->setText(QCoreApplication::translate("MainWindow", "Rain", "Label for button to enable/disable rain background sound."));
        action_hypnotoad->setText(QCoreApplication::translate("MainWindow", "All Glory to the Hypnotoad!", "Label for button to enable/disable Hypnotoad background sound."));
        action_enterprise->setText(QCoreApplication::translate("MainWindow", "Make it so!", "Label for button to enable/disable Enterprise background sound."));
        action_kittens->setText(QCoreApplication::translate("MainWindow", "Kittens", "Label for buton to enable/disable kittens in the now playing widget"));
        action_console->setText(QCoreApplication::translate("MainWindow", "Console", nullptr));
        action_shuffle_mode->setText(QCoreApplication::translate("MainWindow", "&Shuffle mode", nullptr));
        action_repeat_mode->setText(QCoreApplication::translate("MainWindow", "&Repeat mode", nullptr));
        action_remove_from_playlist->setText(QCoreApplication::translate("MainWindow", "Remove from playlist", nullptr));
        action_equalizer->setText(QCoreApplication::translate("MainWindow", "Equalizer", nullptr));
        action_transcode->setText(QCoreApplication::translate("MainWindow", "Transcode Music", nullptr));
        action_add_folder->setText(QCoreApplication::translate("MainWindow", "Add folder...", nullptr));
        action_jump->setText(QCoreApplication::translate("MainWindow", "Jump to the currently playing track", nullptr));
        action_new_playlist->setText(QCoreApplication::translate("MainWindow", "New playlist", nullptr));
        action_save_playlist->setText(QCoreApplication::translate("MainWindow", "Save playlist...", nullptr));
        action_load_playlist->setText(QCoreApplication::translate("MainWindow", "Load playlist...", nullptr));
        action_next_playlist->setText(QCoreApplication::translate("MainWindow", "Go to next playlist tab", nullptr));
        action_previous_playlist->setText(QCoreApplication::translate("MainWindow", "Go to previous playlist tab", nullptr));
        action_update_library->setText(QCoreApplication::translate("MainWindow", "Update changed library folders", nullptr));
        action_visualisations->setText(QCoreApplication::translate("MainWindow", "Visualizations", nullptr));
        action_queue_manager->setText(QCoreApplication::translate("MainWindow", "Queue Manager", nullptr));
        action_about_qt->setText(QCoreApplication::translate("MainWindow", "About Qt...", nullptr));
        action_mute->setText(QCoreApplication::translate("MainWindow", "Mute", nullptr));
        action_full_library_scan->setText(QCoreApplication::translate("MainWindow", "Do a full library rescan", nullptr));
        action_auto_complete_tags->setText(QCoreApplication::translate("MainWindow", "Complete tags automatically...", nullptr));
        action_toggle_scrobbling->setText(QCoreApplication::translate("MainWindow", "Toggle scrobbling", nullptr));
        action_add_podcast->setText(QCoreApplication::translate("MainWindow", "Add podcast...", nullptr));
        action_remove_duplicates->setText(QCoreApplication::translate("MainWindow", "Remove duplicates from playlist", nullptr));
        action_add_files_to_transcoder->setText(QCoreApplication::translate("MainWindow", "Add file(s) to transcoder", nullptr));
#if QT_CONFIG(tooltip)
        action_add_files_to_transcoder->setToolTip(QCoreApplication::translate("MainWindow", "Add file to transcoder", nullptr));
#endif // QT_CONFIG(tooltip)
        action_rip_audio_cd->setText(QCoreApplication::translate("MainWindow", "Rip audio CD", nullptr));
        action_remove_unavailable->setText(QCoreApplication::translate("MainWindow", "Remove unavailable tracks from playlist", nullptr));
        action_view_stream_details->setText(QCoreApplication::translate("MainWindow", "View Stream Details", nullptr));
        action_toggle_show_sidebar->setText(QCoreApplication::translate("MainWindow", "Show sidebar", nullptr));
#if QT_CONFIG(tooltip)
        action_toggle_show_sidebar->setToolTip(QCoreApplication::translate("MainWindow", "Show or hide the sidebar", nullptr));
#endif // QT_CONFIG(tooltip)
        action_next_album->setText(QCoreApplication::translate("MainWindow", "Next album", nullptr));
#if QT_CONFIG(tooltip)
        action_next_album->setToolTip(QCoreApplication::translate("MainWindow", "Skip to the next album", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_next_album->setShortcut(QCoreApplication::translate("MainWindow", "F9", nullptr));
#endif // QT_CONFIG(shortcut)
        scrobbling_button->setText(QString());
        menu_music->setTitle(QCoreApplication::translate("MainWindow", "&Music", nullptr));
        menu_playlist->setTitle(QCoreApplication::translate("MainWindow", "&Playlist", nullptr));
        menu_help->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
        menu_extras->setTitle(QCoreApplication::translate("MainWindow", "&Extras", nullptr));
        menu_tools->setTitle(QCoreApplication::translate("MainWindow", "&Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
