/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/ui/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[164];
    char stringdata0[2468];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 16), // "StopAfterToggled"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 4), // "stop"
QT_MOC_LITERAL(4, 34, 17), // "IntroPointReached"
QT_MOC_LITERAL(5, 52, 15), // "NewDebugConsole"
QT_MOC_LITERAL(6, 68, 8), // "Console*"
QT_MOC_LITERAL(7, 77, 7), // "console"
QT_MOC_LITERAL(8, 85, 19), // "SetNextAlbumEnabled"
QT_MOC_LITERAL(9, 105, 28), // "PlaylistSequence::RepeatMode"
QT_MOC_LITERAL(10, 134, 4), // "mode"
QT_MOC_LITERAL(11, 139, 15), // "FilePathChanged"
QT_MOC_LITERAL(12, 155, 4), // "path"
QT_MOC_LITERAL(13, 160, 12), // "SaveSettings"
QT_MOC_LITERAL(14, 173, 10), // "QSettings*"
QT_MOC_LITERAL(15, 184, 8), // "settings"
QT_MOC_LITERAL(16, 193, 12), // "MediaStopped"
QT_MOC_LITERAL(17, 206, 11), // "MediaPaused"
QT_MOC_LITERAL(18, 218, 12), // "MediaPlaying"
QT_MOC_LITERAL(19, 231, 12), // "TrackSkipped"
QT_MOC_LITERAL(20, 244, 15), // "PlaylistItemPtr"
QT_MOC_LITERAL(21, 260, 4), // "item"
QT_MOC_LITERAL(22, 265, 12), // "ForceShowOSD"
QT_MOC_LITERAL(23, 278, 4), // "Song"
QT_MOC_LITERAL(24, 283, 4), // "song"
QT_MOC_LITERAL(25, 288, 6), // "toggle"
QT_MOC_LITERAL(26, 295, 18), // "PlaylistRightClick"
QT_MOC_LITERAL(27, 314, 10), // "global_pos"
QT_MOC_LITERAL(28, 325, 11), // "QModelIndex"
QT_MOC_LITERAL(29, 337, 5), // "index"
QT_MOC_LITERAL(30, 343, 22), // "PlaylistCurrentChanged"
QT_MOC_LITERAL(31, 366, 7), // "current"
QT_MOC_LITERAL(32, 374, 33), // "PlaylistViewSelectionModelCha..."
QT_MOC_LITERAL(33, 408, 12), // "PlaylistPlay"
QT_MOC_LITERAL(34, 421, 17), // "PlaylistStopAfter"
QT_MOC_LITERAL(35, 439, 13), // "PlaylistQueue"
QT_MOC_LITERAL(36, 453, 21), // "PlaylistQueuePlayNext"
QT_MOC_LITERAL(37, 475, 12), // "PlaylistSkip"
QT_MOC_LITERAL(38, 488, 21), // "PlaylistRemoveCurrent"
QT_MOC_LITERAL(39, 510, 20), // "PlaylistEditFinished"
QT_MOC_LITERAL(40, 531, 10), // "EditTracks"
QT_MOC_LITERAL(41, 542, 21), // "EditTagDialogAccepted"
QT_MOC_LITERAL(42, 564, 21), // "DiscoverStreamDetails"
QT_MOC_LITERAL(43, 586, 17), // "ShowStreamDetails"
QT_MOC_LITERAL(44, 604, 13), // "StreamDetails"
QT_MOC_LITERAL(45, 618, 7), // "details"
QT_MOC_LITERAL(46, 626, 14), // "RenumberTracks"
QT_MOC_LITERAL(47, 641, 17), // "SelectionSetValue"
QT_MOC_LITERAL(48, 659, 9), // "EditValue"
QT_MOC_LITERAL(49, 669, 16), // "AutoCompleteTags"
QT_MOC_LITERAL(50, 686, 24), // "AutoCompleteTagsAccepted"
QT_MOC_LITERAL(51, 711, 23), // "PlaylistUndoRedoChanged"
QT_MOC_LITERAL(52, 735, 8), // "QAction*"
QT_MOC_LITERAL(53, 744, 4), // "undo"
QT_MOC_LITERAL(54, 749, 4), // "redo"
QT_MOC_LITERAL(55, 754, 20), // "AddFilesToTranscoder"
QT_MOC_LITERAL(56, 775, 15), // "SearchForArtist"
QT_MOC_LITERAL(57, 791, 14), // "SearchForAlbum"
QT_MOC_LITERAL(58, 806, 21), // "PlaylistCopyToLibrary"
QT_MOC_LITERAL(59, 828, 21), // "PlaylistMoveToLibrary"
QT_MOC_LITERAL(60, 850, 20), // "PlaylistCopyToDevice"
QT_MOC_LITERAL(61, 871, 24), // "PlaylistOrganiseSelected"
QT_MOC_LITERAL(62, 896, 4), // "copy"
QT_MOC_LITERAL(63, 901, 14), // "PlaylistDelete"
QT_MOC_LITERAL(64, 916, 21), // "PlaylistOpenInBrowser"
QT_MOC_LITERAL(65, 938, 13), // "ShowInLibrary"
QT_MOC_LITERAL(66, 952, 22), // "ChangeLibraryQueryMode"
QT_MOC_LITERAL(67, 975, 6), // "action"
QT_MOC_LITERAL(68, 982, 9), // "PlayIndex"
QT_MOC_LITERAL(69, 992, 19), // "PlaylistDoubleClick"
QT_MOC_LITERAL(70, 1012, 16), // "StopAfterCurrent"
QT_MOC_LITERAL(71, 1029, 11), // "SongChanged"
QT_MOC_LITERAL(72, 1041, 13), // "VolumeChanged"
QT_MOC_LITERAL(73, 1055, 6), // "volume"
QT_MOC_LITERAL(74, 1062, 18), // "CopyFilesToLibrary"
QT_MOC_LITERAL(75, 1081, 11), // "QList<QUrl>"
QT_MOC_LITERAL(76, 1093, 4), // "urls"
QT_MOC_LITERAL(77, 1098, 18), // "MoveFilesToLibrary"
QT_MOC_LITERAL(78, 1117, 17), // "CopyFilesToDevice"
QT_MOC_LITERAL(79, 1135, 12), // "EditFileTags"
QT_MOC_LITERAL(80, 1148, 13), // "AddToPlaylist"
QT_MOC_LITERAL(81, 1162, 10), // "QMimeData*"
QT_MOC_LITERAL(82, 1173, 4), // "data"
QT_MOC_LITERAL(83, 1178, 16), // "VolumeWheelEvent"
QT_MOC_LITERAL(84, 1195, 5), // "delta"
QT_MOC_LITERAL(85, 1201, 14), // "ToggleShowHide"
QT_MOC_LITERAL(86, 1216, 6), // "Seeked"
QT_MOC_LITERAL(87, 1223, 12), // "microseconds"
QT_MOC_LITERAL(88, 1236, 19), // "UpdateTrackPosition"
QT_MOC_LITERAL(89, 1256, 25), // "UpdateTrackSliderPosition"
QT_MOC_LITERAL(90, 1282, 29), // "LastFMButtonVisibilityChanged"
QT_MOC_LITERAL(91, 1312, 5), // "value"
QT_MOC_LITERAL(92, 1318, 31), // "ScrobbleButtonVisibilityChanged"
QT_MOC_LITERAL(93, 1350, 23), // "SetToggleScrobblingIcon"
QT_MOC_LITERAL(94, 1374, 4), // "Love"
QT_MOC_LITERAL(95, 1379, 16), // "TaskCountChanged"
QT_MOC_LITERAL(96, 1396, 5), // "count"
QT_MOC_LITERAL(97, 1402, 17), // "ShowLibraryConfig"
QT_MOC_LITERAL(98, 1420, 14), // "ReloadSettings"
QT_MOC_LITERAL(99, 1435, 17), // "ReloadAllSettings"
QT_MOC_LITERAL(100, 1453, 17), // "RefreshStyleSheet"
QT_MOC_LITERAL(101, 1471, 15), // "SetHiddenInTray"
QT_MOC_LITERAL(102, 1487, 7), // "AddFile"
QT_MOC_LITERAL(103, 1495, 9), // "AddFolder"
QT_MOC_LITERAL(104, 1505, 9), // "AddStream"
QT_MOC_LITERAL(105, 1515, 17), // "AddStreamAccepted"
QT_MOC_LITERAL(106, 1533, 15), // "OpenRipCDDialog"
QT_MOC_LITERAL(107, 1549, 11), // "AddCDTracks"
QT_MOC_LITERAL(108, 1561, 10), // "AddPodcast"
QT_MOC_LITERAL(109, 1572, 26), // "CommandlineOptionsReceived"
QT_MOC_LITERAL(110, 1599, 14), // "string_options"
QT_MOC_LITERAL(111, 1614, 15), // "CheckForUpdates"
QT_MOC_LITERAL(112, 1630, 31), // "NowPlayingWidgetPositionChanged"
QT_MOC_LITERAL(113, 1662, 16), // "above_status_bar"
QT_MOC_LITERAL(114, 1679, 16), // "SongSaveComplete"
QT_MOC_LITERAL(115, 1696, 15), // "TagReaderReply*"
QT_MOC_LITERAL(116, 1712, 5), // "reply"
QT_MOC_LITERAL(117, 1718, 21), // "QPersistentModelIndex"
QT_MOC_LITERAL(118, 1740, 16), // "ShowCoverManager"
QT_MOC_LITERAL(119, 1757, 15), // "IsLastFmEnabled"
QT_MOC_LITERAL(120, 1773, 15), // "ShowAboutDialog"
QT_MOC_LITERAL(121, 1789, 19), // "ShowTranscodeDialog"
QT_MOC_LITERAL(122, 1809, 15), // "ShowErrorDialog"
QT_MOC_LITERAL(123, 1825, 7), // "message"
QT_MOC_LITERAL(124, 1833, 16), // "ShowQueueManager"
QT_MOC_LITERAL(125, 1850, 18), // "ShowVisualisations"
QT_MOC_LITERAL(126, 1869, 20), // "CreateSettingsDialog"
QT_MOC_LITERAL(127, 1890, 15), // "SettingsDialog*"
QT_MOC_LITERAL(128, 1906, 19), // "CreateEditTagDialog"
QT_MOC_LITERAL(129, 1926, 14), // "EditTagDialog*"
QT_MOC_LITERAL(130, 1941, 16), // "CreateLoveDialog"
QT_MOC_LITERAL(131, 1958, 11), // "LoveDialog*"
QT_MOC_LITERAL(132, 1970, 22), // "CreateStreamDiscoverer"
QT_MOC_LITERAL(133, 1993, 17), // "StreamDiscoverer*"
QT_MOC_LITERAL(134, 2011, 18), // "CreateDebugConsole"
QT_MOC_LITERAL(135, 2030, 18), // "OpenSettingsDialog"
QT_MOC_LITERAL(136, 2049, 24), // "OpenSettingsDialogAtPage"
QT_MOC_LITERAL(137, 2074, 20), // "SettingsDialog::Page"
QT_MOC_LITERAL(138, 2095, 4), // "page"
QT_MOC_LITERAL(139, 2100, 18), // "ShowSongInfoConfig"
QT_MOC_LITERAL(140, 2119, 12), // "SaveGeometry"
QT_MOC_LITERAL(141, 2132, 18), // "SavePlaybackStatus"
QT_MOC_LITERAL(142, 2151, 18), // "LoadPlaybackStatus"
QT_MOC_LITERAL(143, 2170, 14), // "ResumePlayback"
QT_MOC_LITERAL(144, 2185, 22), // "ResumePlaybackPosition"
QT_MOC_LITERAL(145, 2208, 20), // "AddSongInfoGenerator"
QT_MOC_LITERAL(146, 2229, 29), // "smart_playlists::GeneratorPtr"
QT_MOC_LITERAL(147, 2259, 3), // "gen"
QT_MOC_LITERAL(148, 2263, 14), // "DeleteFinished"
QT_MOC_LITERAL(149, 2278, 8), // "SongList"
QT_MOC_LITERAL(150, 2287, 17), // "songs_with_errors"
QT_MOC_LITERAL(151, 2305, 5), // "Raise"
QT_MOC_LITERAL(152, 2311, 4), // "Exit"
QT_MOC_LITERAL(153, 2316, 25), // "HandleNotificationPreview"
QT_MOC_LITERAL(154, 2342, 14), // "OSD::Behaviour"
QT_MOC_LITERAL(155, 2357, 4), // "type"
QT_MOC_LITERAL(156, 2362, 5), // "line1"
QT_MOC_LITERAL(157, 2368, 5), // "line2"
QT_MOC_LITERAL(158, 2374, 21), // "ScrollToInternetIndex"
QT_MOC_LITERAL(159, 2396, 15), // "FocusLibraryTab"
QT_MOC_LITERAL(160, 2412, 22), // "FocusGlobalSearchField"
QT_MOC_LITERAL(161, 2435, 14), // "DoGlobalSearch"
QT_MOC_LITERAL(162, 2450, 5), // "query"
QT_MOC_LITERAL(163, 2456, 11) // "ShowConsole"

    },
    "MainWindow\0StopAfterToggled\0\0stop\0"
    "IntroPointReached\0NewDebugConsole\0"
    "Console*\0console\0SetNextAlbumEnabled\0"
    "PlaylistSequence::RepeatMode\0mode\0"
    "FilePathChanged\0path\0SaveSettings\0"
    "QSettings*\0settings\0MediaStopped\0"
    "MediaPaused\0MediaPlaying\0TrackSkipped\0"
    "PlaylistItemPtr\0item\0ForceShowOSD\0"
    "Song\0song\0toggle\0PlaylistRightClick\0"
    "global_pos\0QModelIndex\0index\0"
    "PlaylistCurrentChanged\0current\0"
    "PlaylistViewSelectionModelChanged\0"
    "PlaylistPlay\0PlaylistStopAfter\0"
    "PlaylistQueue\0PlaylistQueuePlayNext\0"
    "PlaylistSkip\0PlaylistRemoveCurrent\0"
    "PlaylistEditFinished\0EditTracks\0"
    "EditTagDialogAccepted\0DiscoverStreamDetails\0"
    "ShowStreamDetails\0StreamDetails\0details\0"
    "RenumberTracks\0SelectionSetValue\0"
    "EditValue\0AutoCompleteTags\0"
    "AutoCompleteTagsAccepted\0"
    "PlaylistUndoRedoChanged\0QAction*\0undo\0"
    "redo\0AddFilesToTranscoder\0SearchForArtist\0"
    "SearchForAlbum\0PlaylistCopyToLibrary\0"
    "PlaylistMoveToLibrary\0PlaylistCopyToDevice\0"
    "PlaylistOrganiseSelected\0copy\0"
    "PlaylistDelete\0PlaylistOpenInBrowser\0"
    "ShowInLibrary\0ChangeLibraryQueryMode\0"
    "action\0PlayIndex\0PlaylistDoubleClick\0"
    "StopAfterCurrent\0SongChanged\0VolumeChanged\0"
    "volume\0CopyFilesToLibrary\0QList<QUrl>\0"
    "urls\0MoveFilesToLibrary\0CopyFilesToDevice\0"
    "EditFileTags\0AddToPlaylist\0QMimeData*\0"
    "data\0VolumeWheelEvent\0delta\0ToggleShowHide\0"
    "Seeked\0microseconds\0UpdateTrackPosition\0"
    "UpdateTrackSliderPosition\0"
    "LastFMButtonVisibilityChanged\0value\0"
    "ScrobbleButtonVisibilityChanged\0"
    "SetToggleScrobblingIcon\0Love\0"
    "TaskCountChanged\0count\0ShowLibraryConfig\0"
    "ReloadSettings\0ReloadAllSettings\0"
    "RefreshStyleSheet\0SetHiddenInTray\0"
    "AddFile\0AddFolder\0AddStream\0"
    "AddStreamAccepted\0OpenRipCDDialog\0"
    "AddCDTracks\0AddPodcast\0"
    "CommandlineOptionsReceived\0string_options\0"
    "CheckForUpdates\0NowPlayingWidgetPositionChanged\0"
    "above_status_bar\0SongSaveComplete\0"
    "TagReaderReply*\0reply\0QPersistentModelIndex\0"
    "ShowCoverManager\0IsLastFmEnabled\0"
    "ShowAboutDialog\0ShowTranscodeDialog\0"
    "ShowErrorDialog\0message\0ShowQueueManager\0"
    "ShowVisualisations\0CreateSettingsDialog\0"
    "SettingsDialog*\0CreateEditTagDialog\0"
    "EditTagDialog*\0CreateLoveDialog\0"
    "LoveDialog*\0CreateStreamDiscoverer\0"
    "StreamDiscoverer*\0CreateDebugConsole\0"
    "OpenSettingsDialog\0OpenSettingsDialogAtPage\0"
    "SettingsDialog::Page\0page\0ShowSongInfoConfig\0"
    "SaveGeometry\0SavePlaybackStatus\0"
    "LoadPlaybackStatus\0ResumePlayback\0"
    "ResumePlaybackPosition\0AddSongInfoGenerator\0"
    "smart_playlists::GeneratorPtr\0gen\0"
    "DeleteFinished\0SongList\0songs_with_errors\0"
    "Raise\0Exit\0HandleNotificationPreview\0"
    "OSD::Behaviour\0type\0line1\0line2\0"
    "ScrollToInternetIndex\0FocusLibraryTab\0"
    "FocusGlobalSearchField\0DoGlobalSearch\0"
    "query\0ShowConsole"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     109,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  559,    2, 0x06 /* Public */,
       4,    0,  562,    2, 0x06 /* Public */,
       5,    1,  563,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,  566,    2, 0x08 /* Private */,
      11,    1,  569,    2, 0x08 /* Private */,
      13,    1,  572,    2, 0x08 /* Private */,
      16,    0,  575,    2, 0x08 /* Private */,
      17,    0,  576,    2, 0x08 /* Private */,
      18,    0,  577,    2, 0x08 /* Private */,
      19,    1,  578,    2, 0x08 /* Private */,
      22,    2,  581,    2, 0x08 /* Private */,
      26,    2,  586,    2, 0x08 /* Private */,
      30,    1,  591,    2, 0x08 /* Private */,
      32,    0,  594,    2, 0x08 /* Private */,
      33,    0,  595,    2, 0x08 /* Private */,
      34,    0,  596,    2, 0x08 /* Private */,
      35,    0,  597,    2, 0x08 /* Private */,
      36,    0,  598,    2, 0x08 /* Private */,
      37,    0,  599,    2, 0x08 /* Private */,
      38,    0,  600,    2, 0x08 /* Private */,
      39,    1,  601,    2, 0x08 /* Private */,
      40,    0,  604,    2, 0x08 /* Private */,
      41,    0,  605,    2, 0x08 /* Private */,
      42,    0,  606,    2, 0x08 /* Private */,
      43,    1,  607,    2, 0x08 /* Private */,
      46,    0,  610,    2, 0x08 /* Private */,
      47,    0,  611,    2, 0x08 /* Private */,
      48,    0,  612,    2, 0x08 /* Private */,
      49,    0,  613,    2, 0x08 /* Private */,
      50,    0,  614,    2, 0x08 /* Private */,
      51,    2,  615,    2, 0x08 /* Private */,
      55,    0,  620,    2, 0x08 /* Private */,
      56,    0,  621,    2, 0x08 /* Private */,
      57,    0,  622,    2, 0x08 /* Private */,
      58,    0,  623,    2, 0x08 /* Private */,
      59,    0,  624,    2, 0x08 /* Private */,
      60,    0,  625,    2, 0x08 /* Private */,
      61,    1,  626,    2, 0x08 /* Private */,
      63,    0,  629,    2, 0x08 /* Private */,
      64,    0,  630,    2, 0x08 /* Private */,
      65,    0,  631,    2, 0x08 /* Private */,
      66,    1,  632,    2, 0x08 /* Private */,
      68,    1,  635,    2, 0x08 /* Private */,
      69,    1,  638,    2, 0x08 /* Private */,
      70,    0,  641,    2, 0x08 /* Private */,
      71,    1,  642,    2, 0x08 /* Private */,
      72,    1,  645,    2, 0x08 /* Private */,
      74,    1,  648,    2, 0x08 /* Private */,
      77,    1,  651,    2, 0x08 /* Private */,
      78,    1,  654,    2, 0x08 /* Private */,
      79,    1,  657,    2, 0x08 /* Private */,
      80,    1,  660,    2, 0x08 /* Private */,
      80,    1,  663,    2, 0x08 /* Private */,
      83,    1,  666,    2, 0x08 /* Private */,
      85,    0,  669,    2, 0x08 /* Private */,
      86,    1,  670,    2, 0x08 /* Private */,
      88,    0,  673,    2, 0x08 /* Private */,
      89,    0,  674,    2, 0x08 /* Private */,
      90,    1,  675,    2, 0x08 /* Private */,
      92,    1,  678,    2, 0x08 /* Private */,
      93,    1,  681,    2, 0x08 /* Private */,
      94,    0,  684,    2, 0x08 /* Private */,
      95,    1,  685,    2, 0x08 /* Private */,
      97,    0,  688,    2, 0x08 /* Private */,
      98,    0,  689,    2, 0x08 /* Private */,
      99,    0,  690,    2, 0x08 /* Private */,
     100,    0,  691,    2, 0x08 /* Private */,
     101,    0,  692,    2, 0x08 /* Private */,
     102,    0,  693,    2, 0x08 /* Private */,
     103,    0,  694,    2, 0x08 /* Private */,
     104,    0,  695,    2, 0x08 /* Private */,
     105,    0,  696,    2, 0x08 /* Private */,
     106,    0,  697,    2, 0x08 /* Private */,
     107,    0,  698,    2, 0x08 /* Private */,
     108,    0,  699,    2, 0x08 /* Private */,
     109,    1,  700,    2, 0x08 /* Private */,
     111,    0,  703,    2, 0x08 /* Private */,
     112,    1,  704,    2, 0x08 /* Private */,
     114,    2,  707,    2, 0x08 /* Private */,
     118,    0,  712,    2, 0x08 /* Private */,
     119,    0,  713,    2, 0x08 /* Private */,
     120,    0,  714,    2, 0x08 /* Private */,
     121,    0,  715,    2, 0x08 /* Private */,
     122,    1,  716,    2, 0x08 /* Private */,
     124,    0,  719,    2, 0x08 /* Private */,
     125,    0,  720,    2, 0x08 /* Private */,
     126,    0,  721,    2, 0x08 /* Private */,
     128,    0,  722,    2, 0x08 /* Private */,
     130,    0,  723,    2, 0x08 /* Private */,
     132,    0,  724,    2, 0x08 /* Private */,
     134,    0,  725,    2, 0x08 /* Private */,
     135,    0,  726,    2, 0x08 /* Private */,
     136,    1,  727,    2, 0x08 /* Private */,
     139,    0,  730,    2, 0x08 /* Private */,
     140,    1,  731,    2, 0x08 /* Private */,
     141,    1,  734,    2, 0x08 /* Private */,
     142,    0,  737,    2, 0x08 /* Private */,
     143,    0,  738,    2, 0x08 /* Private */,
     144,    0,  739,    2, 0x08 /* Private */,
     145,    1,  740,    2, 0x08 /* Private */,
     148,    1,  743,    2, 0x08 /* Private */,
     151,    0,  746,    2, 0x08 /* Private */,
     152,    0,  747,    2, 0x08 /* Private */,
     153,    3,  748,    2, 0x08 /* Private */,
     158,    1,  755,    2, 0x08 /* Private */,
     159,    0,  758,    2, 0x08 /* Private */,
     160,    0,  759,    2, 0x08 /* Private */,
     161,    1,  760,    2, 0x08 /* Private */,
     163,    0,  763,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 23, QMetaType::Bool,   24,   25,
    QMetaType::Void, QMetaType::QPoint, 0x80000000 | 28,   27,   29,
    QMetaType::Void, 0x80000000 | 28,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 44,   45,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 52, 0x80000000 | 52,   53,   54,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   62,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 52,   67,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, QMetaType::Int,   73,
    QMetaType::Void, 0x80000000 | 75,   76,
    QMetaType::Void, 0x80000000 | 75,   76,
    QMetaType::Void, 0x80000000 | 75,   76,
    QMetaType::Void, 0x80000000 | 75,   76,
    QMetaType::Void, 0x80000000 | 81,   82,
    QMetaType::Void, 0x80000000 | 52,   67,
    QMetaType::Void, QMetaType::Int,   84,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   87,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   91,
    QMetaType::Void, QMetaType::Bool,   91,
    QMetaType::Void, QMetaType::Bool,   91,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   96,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  110,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  113,
    QMetaType::Void, 0x80000000 | 115, 0x80000000 | 117,  116,   29,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  123,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 127,
    0x80000000 | 129,
    0x80000000 | 131,
    0x80000000 | 133,
    0x80000000 | 6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 137,  138,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 146,  147,
    QMetaType::Void, 0x80000000 | 149,  150,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 154, QMetaType::QString, QMetaType::QString,  155,  156,  157,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  162,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->StopAfterToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->IntroPointReached(); break;
        case 2: _t->NewDebugConsole((*reinterpret_cast< Console*(*)>(_a[1]))); break;
        case 3: _t->SetNextAlbumEnabled((*reinterpret_cast< PlaylistSequence::RepeatMode(*)>(_a[1]))); break;
        case 4: _t->FilePathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->SaveSettings((*reinterpret_cast< QSettings*(*)>(_a[1]))); break;
        case 6: _t->MediaStopped(); break;
        case 7: _t->MediaPaused(); break;
        case 8: _t->MediaPlaying(); break;
        case 9: _t->TrackSkipped((*reinterpret_cast< PlaylistItemPtr(*)>(_a[1]))); break;
        case 10: _t->ForceShowOSD((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 11: _t->PlaylistRightClick((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 12: _t->PlaylistCurrentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 13: _t->PlaylistViewSelectionModelChanged(); break;
        case 14: _t->PlaylistPlay(); break;
        case 15: _t->PlaylistStopAfter(); break;
        case 16: _t->PlaylistQueue(); break;
        case 17: _t->PlaylistQueuePlayNext(); break;
        case 18: _t->PlaylistSkip(); break;
        case 19: _t->PlaylistRemoveCurrent(); break;
        case 20: _t->PlaylistEditFinished((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 21: _t->EditTracks(); break;
        case 22: _t->EditTagDialogAccepted(); break;
        case 23: _t->DiscoverStreamDetails(); break;
        case 24: _t->ShowStreamDetails((*reinterpret_cast< const StreamDetails(*)>(_a[1]))); break;
        case 25: _t->RenumberTracks(); break;
        case 26: _t->SelectionSetValue(); break;
        case 27: _t->EditValue(); break;
        case 28: _t->AutoCompleteTags(); break;
        case 29: _t->AutoCompleteTagsAccepted(); break;
        case 30: _t->PlaylistUndoRedoChanged((*reinterpret_cast< QAction*(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 31: _t->AddFilesToTranscoder(); break;
        case 32: _t->SearchForArtist(); break;
        case 33: _t->SearchForAlbum(); break;
        case 34: _t->PlaylistCopyToLibrary(); break;
        case 35: _t->PlaylistMoveToLibrary(); break;
        case 36: _t->PlaylistCopyToDevice(); break;
        case 37: _t->PlaylistOrganiseSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->PlaylistDelete(); break;
        case 39: _t->PlaylistOpenInBrowser(); break;
        case 40: _t->ShowInLibrary(); break;
        case 41: _t->ChangeLibraryQueryMode((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 42: _t->PlayIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 43: _t->PlaylistDoubleClick((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 44: _t->StopAfterCurrent(); break;
        case 45: _t->SongChanged((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 46: _t->VolumeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->CopyFilesToLibrary((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 48: _t->MoveFilesToLibrary((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 49: _t->CopyFilesToDevice((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 50: _t->EditFileTags((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 51: _t->AddToPlaylist((*reinterpret_cast< QMimeData*(*)>(_a[1]))); break;
        case 52: _t->AddToPlaylist((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 53: _t->VolumeWheelEvent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 54: _t->ToggleShowHide(); break;
        case 55: _t->Seeked((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 56: _t->UpdateTrackPosition(); break;
        case 57: _t->UpdateTrackSliderPosition(); break;
        case 58: _t->LastFMButtonVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 59: _t->ScrobbleButtonVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 60: _t->SetToggleScrobblingIcon((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 61: _t->Love(); break;
        case 62: _t->TaskCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 63: _t->ShowLibraryConfig(); break;
        case 64: _t->ReloadSettings(); break;
        case 65: _t->ReloadAllSettings(); break;
        case 66: _t->RefreshStyleSheet(); break;
        case 67: _t->SetHiddenInTray(); break;
        case 68: _t->AddFile(); break;
        case 69: _t->AddFolder(); break;
        case 70: _t->AddStream(); break;
        case 71: _t->AddStreamAccepted(); break;
        case 72: _t->OpenRipCDDialog(); break;
        case 73: _t->AddCDTracks(); break;
        case 74: _t->AddPodcast(); break;
        case 75: _t->CommandlineOptionsReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 76: _t->CheckForUpdates(); break;
        case 77: _t->NowPlayingWidgetPositionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 78: _t->SongSaveComplete((*reinterpret_cast< TagReaderReply*(*)>(_a[1])),(*reinterpret_cast< const QPersistentModelIndex(*)>(_a[2]))); break;
        case 79: _t->ShowCoverManager(); break;
        case 80: { bool _r = _t->IsLastFmEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 81: _t->ShowAboutDialog(); break;
        case 82: _t->ShowTranscodeDialog(); break;
        case 83: _t->ShowErrorDialog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 84: _t->ShowQueueManager(); break;
        case 85: _t->ShowVisualisations(); break;
        case 86: { SettingsDialog* _r = _t->CreateSettingsDialog();
            if (_a[0]) *reinterpret_cast< SettingsDialog**>(_a[0]) = std::move(_r); }  break;
        case 87: { EditTagDialog* _r = _t->CreateEditTagDialog();
            if (_a[0]) *reinterpret_cast< EditTagDialog**>(_a[0]) = std::move(_r); }  break;
        case 88: { LoveDialog* _r = _t->CreateLoveDialog();
            if (_a[0]) *reinterpret_cast< LoveDialog**>(_a[0]) = std::move(_r); }  break;
        case 89: { StreamDiscoverer* _r = _t->CreateStreamDiscoverer();
            if (_a[0]) *reinterpret_cast< StreamDiscoverer**>(_a[0]) = std::move(_r); }  break;
        case 90: { Console* _r = _t->CreateDebugConsole();
            if (_a[0]) *reinterpret_cast< Console**>(_a[0]) = std::move(_r); }  break;
        case 91: _t->OpenSettingsDialog(); break;
        case 92: _t->OpenSettingsDialogAtPage((*reinterpret_cast< SettingsDialog::Page(*)>(_a[1]))); break;
        case 93: _t->ShowSongInfoConfig(); break;
        case 94: _t->SaveGeometry((*reinterpret_cast< QSettings*(*)>(_a[1]))); break;
        case 95: _t->SavePlaybackStatus((*reinterpret_cast< QSettings*(*)>(_a[1]))); break;
        case 96: _t->LoadPlaybackStatus(); break;
        case 97: _t->ResumePlayback(); break;
        case 98: _t->ResumePlaybackPosition(); break;
        case 99: _t->AddSongInfoGenerator((*reinterpret_cast< smart_playlists::GeneratorPtr(*)>(_a[1]))); break;
        case 100: _t->DeleteFinished((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 101: _t->Raise(); break;
        case 102: _t->Exit(); break;
        case 103: _t->HandleNotificationPreview((*reinterpret_cast< OSD::Behaviour(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 104: _t->ScrollToInternetIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 105: _t->FocusLibraryTab(); break;
        case 106: _t->FocusGlobalSearchField(); break;
        case 107: _t->DoGlobalSearch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 108: _t->ShowConsole(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PlaylistItemPtr >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< StreamDetails >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 47:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        case 49:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        case 50:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::StopAfterToggled)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::IntroPointReached)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(Console * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::NewDebugConsole)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PlatformInterface"))
        return static_cast< PlatformInterface*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 109)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 109;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 109)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 109;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::StopAfterToggled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::IntroPointReached()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindow::NewDebugConsole(Console * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
