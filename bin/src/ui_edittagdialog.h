/********************************************************************************
** Form generated from reading UI file 'edittagdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTAGDIALOG_H
#define UI_EDITTAGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/busyindicator.h"
#include "widgets/lineedit.h"
#include "widgets/ratingwidget.h"

QT_BEGIN_NAMESPACE

class Ui_EditTagDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QListWidget *song_list;
    QTabWidget *tab_widget;
    QWidget *summary_tab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *art;
    QVBoxLayout *verticalLayout;
    QTextEdit *summary;
    QHBoxLayout *horizontalLayout;
    QPushButton *summary_art_button;
    QPushButton *playcount_reset;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QGridLayout *gridLayout_3;
    QLabel *length_label;
    QLabel *length;
    QLabel *playcount_label;
    QLabel *playcount;
    QLabel *bpm_label;
    QLabel *bpm;
    QLabel *skipcount_label;
    QLabel *skipcount;
    QLabel *bitrate_label;
    QLabel *bitrate;
    QLabel *lastplayed_label;
    QLabel *lastplayed;
    QLabel *samplerate_label;
    QLabel *samplerate;
    QLabel *score_label;
    QLabel *score;
    QLabel *filesize_label;
    QLabel *filesize;
    QLabel *rating_label;
    RatingWidget *rating;
    QLabel *filetype_label;
    QLabel *filetype;
    QLabel *mtime_label;
    QLabel *mtime;
    QLabel *ctime_label;
    QLabel *ctime;
    QLabel *filename_label;
    QLineEdit *filename;
    QSpacerItem *verticalSpacer_2;
    QWidget *tags_tab;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout;
    QLabel *comment_label;
    QLabel *title_label;
    LineEdit *title;
    QLabel *track_label;
    SpinBox *track;
    QLabel *artist_label;
    LineEdit *artist;
    QLabel *disc_label;
    SpinBox *disc;
    QLabel *album_label;
    LineEdit *album;
    QLabel *year_label;
    SpinBox *year;
    QLabel *albumartist_label;
    LineEdit *albumartist;
    QLabel *composer_label;
    LineEdit *composer;
    QLabel *performer_label;
    LineEdit *performer;
    QLabel *grouping_label;
    LineEdit *grouping;
    QLabel *genre_label;
    LineEdit *genre;
    QPushButton *fetch_tag;
    QLabel *lyrics_label;
    TextEdit *lyrics;
    TextEdit *comment;
    BusyIndicator *loading_label;
    QDialogButtonBox *button_box;

    void setupUi(QDialog *EditTagDialog)
    {
        if (EditTagDialog->objectName().isEmpty())
            EditTagDialog->setObjectName(QString::fromUtf8("EditTagDialog"));
        EditTagDialog->resize(780, 840);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EditTagDialog->sizePolicy().hasHeightForWidth());
        EditTagDialog->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        EditTagDialog->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(EditTagDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        splitter = new QSplitter(EditTagDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        song_list = new QListWidget(splitter);
        song_list->setObjectName(QString::fromUtf8("song_list"));
        song_list->setSelectionMode(QAbstractItemView::ExtendedSelection);
        splitter->addWidget(song_list);
        tab_widget = new QTabWidget(splitter);
        tab_widget->setObjectName(QString::fromUtf8("tab_widget"));
        summary_tab = new QWidget();
        summary_tab->setObjectName(QString::fromUtf8("summary_tab"));
        verticalLayout_2 = new QVBoxLayout(summary_tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        art = new QLabel(summary_tab);
        art->setObjectName(QString::fromUtf8("art"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(art->sizePolicy().hasHeightForWidth());
        art->setSizePolicy(sizePolicy1);
        art->setMinimumSize(QSize(124, 124));
        art->setFrameShape(QFrame::StyledPanel);
        art->setAlignment(Qt::AlignCenter);
        art->setMargin(2);

        horizontalLayout_2->addWidget(art);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        summary = new QTextEdit(summary_tab);
        summary->setObjectName(QString::fromUtf8("summary"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(summary->sizePolicy().hasHeightForWidth());
        summary->setSizePolicy(sizePolicy2);
        summary->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"  background: transparent;\n"
"}"));
        summary->setFrameShape(QFrame::NoFrame);
        summary->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(summary);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        summary_art_button = new QPushButton(summary_tab);
        summary_art_button->setObjectName(QString::fromUtf8("summary_art_button"));
        sizePolicy1.setHeightForWidth(summary_art_button->sizePolicy().hasHeightForWidth());
        summary_art_button->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(summary_art_button);

        playcount_reset = new QPushButton(summary_tab);
        playcount_reset->setObjectName(QString::fromUtf8("playcount_reset"));
        sizePolicy1.setHeightForWidth(playcount_reset->sizePolicy().hasHeightForWidth());
        playcount_reset->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(playcount_reset);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        line = new QFrame(summary_tab);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(18);
        length_label = new QLabel(summary_tab);
        length_label->setObjectName(QString::fromUtf8("length_label"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(length_label->sizePolicy().hasHeightForWidth());
        length_label->setSizePolicy(sizePolicy3);
        length_label->setProperty("field_label", QVariant(true));

        gridLayout_3->addWidget(length_label, 0, 0, 1, 1);

        length = new QLabel(summary_tab);
        length->setObjectName(QString::fromUtf8("length"));
        sizePolicy3.setHeightForWidth(length->sizePolicy().hasHeightForWidth());
        length->setSizePolicy(sizePolicy3);
        length->setMinimumSize(QSize(150, 0));
        length->setBaseSize(QSize(150, 0));
        length->setWordWrap(true);
        length->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(length, 0, 1, 1, 1);

        playcount_label = new QLabel(summary_tab);
        playcount_label->setObjectName(QString::fromUtf8("playcount_label"));
        sizePolicy3.setHeightForWidth(playcount_label->sizePolicy().hasHeightForWidth());
        playcount_label->setSizePolicy(sizePolicy3);
        playcount_label->setProperty("field_label", QVariant(true));

        gridLayout_3->addWidget(playcount_label, 0, 2, 1, 1);

        playcount = new QLabel(summary_tab);
        playcount->setObjectName(QString::fromUtf8("playcount"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(playcount->sizePolicy().hasHeightForWidth());
        playcount->setSizePolicy(sizePolicy4);
        playcount->setWordWrap(true);
        playcount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(playcount, 0, 3, 1, 1);

        bpm_label = new QLabel(summary_tab);
        bpm_label->setObjectName(QString::fromUtf8("bpm_label"));
        sizePolicy3.setHeightForWidth(bpm_label->sizePolicy().hasHeightForWidth());
        bpm_label->setSizePolicy(sizePolicy3);
        bpm_label->setProperty("field_label", QVariant(true));

        gridLayout_3->addWidget(bpm_label, 1, 0, 1, 1);

        bpm = new QLabel(summary_tab);
        bpm->setObjectName(QString::fromUtf8("bpm"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(bpm->sizePolicy().hasHeightForWidth());
        bpm->setSizePolicy(sizePolicy5);
        bpm->setBaseSize(QSize(0, 0));
        bpm->setWordWrap(true);
        bpm->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(bpm, 1, 1, 1, 1);

        skipcount_label = new QLabel(summary_tab);
        skipcount_label->setObjectName(QString::fromUtf8("skipcount_label"));
        sizePolicy3.setHeightForWidth(skipcount_label->sizePolicy().hasHeightForWidth());
        skipcount_label->setSizePolicy(sizePolicy3);
        skipcount_label->setProperty("field_label", QVariant(true));

        gridLayout_3->addWidget(skipcount_label, 1, 2, 1, 1);

        skipcount = new QLabel(summary_tab);
        skipcount->setObjectName(QString::fromUtf8("skipcount"));
        skipcount->setWordWrap(true);
        skipcount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(skipcount, 1, 3, 1, 1);

        bitrate_label = new QLabel(summary_tab);
        bitrate_label->setObjectName(QString::fromUtf8("bitrate_label"));
        sizePolicy3.setHeightForWidth(bitrate_label->sizePolicy().hasHeightForWidth());
        bitrate_label->setSizePolicy(sizePolicy3);
        bitrate_label->setProperty("field_label", QVariant(true));

        gridLayout_3->addWidget(bitrate_label, 2, 0, 1, 1);

        bitrate = new QLabel(summary_tab);
        bitrate->setObjectName(QString::fromUtf8("bitrate"));
        sizePolicy5.setHeightForWidth(bitrate->sizePolicy().hasHeightForWidth());
        bitrate->setSizePolicy(sizePolicy5);
        bitrate->setBaseSize(QSize(0, 0));
        bitrate->setWordWrap(true);
        bitrate->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(bitrate, 2, 1, 1, 1);

        lastplayed_label = new QLabel(summary_tab);
        lastplayed_label->setObjectName(QString::fromUtf8("lastplayed_label"));
        sizePolicy3.setHeightForWidth(lastplayed_label->sizePolicy().hasHeightForWidth());
        lastplayed_label->setSizePolicy(sizePolicy3);
        lastplayed_label->setProperty("field_label", QVariant(true));

        gridLayout_3->addWidget(lastplayed_label, 2, 2, 1, 1);

        lastplayed = new QLabel(summary_tab);
        lastplayed->setObjectName(QString::fromUtf8("lastplayed"));
        lastplayed->setWordWrap(true);
        lastplayed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(lastplayed, 2, 3, 1, 1);

        samplerate_label = new QLabel(summary_tab);
        samplerate_label->setObjectName(QString::fromUtf8("samplerate_label"));
        sizePolicy3.setHeightForWidth(samplerate_label->sizePolicy().hasHeightForWidth());
        samplerate_label->setSizePolicy(sizePolicy3);
        samplerate_label->setProperty("field_label", QVariant(true));

        gridLayout_3->addWidget(samplerate_label, 3, 0, 1, 1);

        samplerate = new QLabel(summary_tab);
        samplerate->setObjectName(QString::fromUtf8("samplerate"));
        sizePolicy5.setHeightForWidth(samplerate->sizePolicy().hasHeightForWidth());
        samplerate->setSizePolicy(sizePolicy5);
        samplerate->setWordWrap(true);
        samplerate->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(samplerate, 3, 1, 1, 1);

        score_label = new QLabel(summary_tab);
        score_label->setObjectName(QString::fromUtf8("score_label"));
        sizePolicy3.setHeightForWidth(score_label->sizePolicy().hasHeightForWidth());
        score_label->setSizePolicy(sizePolicy3);
        score_label->setProperty("field_label", QVariant(true));

        gridLayout_3->addWidget(score_label, 3, 2, 1, 1);

        score = new QLabel(summary_tab);
        score->setObjectName(QString::fromUtf8("score"));
        score->setWordWrap(true);
        score->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(score, 3, 3, 1, 1);

        filesize_label = new QLabel(summary_tab);
        filesize_label->setObjectName(QString::fromUtf8("filesize_label"));
        sizePolicy3.setHeightForWidth(filesize_label->sizePolicy().hasHeightForWidth());
        filesize_label->setSizePolicy(sizePolicy3);
        filesize_label->setProperty("field_label", QVariant(true));

        gridLayout_3->addWidget(filesize_label, 4, 0, 1, 1);

        filesize = new QLabel(summary_tab);
        filesize->setObjectName(QString::fromUtf8("filesize"));
        sizePolicy5.setHeightForWidth(filesize->sizePolicy().hasHeightForWidth());
        filesize->setSizePolicy(sizePolicy5);
        filesize->setWordWrap(true);
        filesize->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(filesize, 4, 1, 1, 1);

        rating_label = new QLabel(summary_tab);
        rating_label->setObjectName(QString::fromUtf8("rating_label"));
        sizePolicy3.setHeightForWidth(rating_label->sizePolicy().hasHeightForWidth());
        rating_label->setSizePolicy(sizePolicy3);
        rating_label->setProperty("field_label", QVariant(true));

        gridLayout_3->addWidget(rating_label, 4, 2, 1, 1);

        rating = new RatingWidget(summary_tab);
        rating->setObjectName(QString::fromUtf8("rating"));
        sizePolicy3.setHeightForWidth(rating->sizePolicy().hasHeightForWidth());
        rating->setSizePolicy(sizePolicy3);
        rating->setMinimumSize(QSize(0, 0));

        gridLayout_3->addWidget(rating, 4, 3, 1, 1);

        filetype_label = new QLabel(summary_tab);
        filetype_label->setObjectName(QString::fromUtf8("filetype_label"));
        sizePolicy3.setHeightForWidth(filetype_label->sizePolicy().hasHeightForWidth());
        filetype_label->setSizePolicy(sizePolicy3);
        filetype_label->setProperty("field_label", QVariant(true));

        gridLayout_3->addWidget(filetype_label, 6, 0, 1, 1);

        filetype = new QLabel(summary_tab);
        filetype->setObjectName(QString::fromUtf8("filetype"));
        sizePolicy4.setHeightForWidth(filetype->sizePolicy().hasHeightForWidth());
        filetype->setSizePolicy(sizePolicy4);
        filetype->setWordWrap(true);
        filetype->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(filetype, 6, 1, 1, 3);

        mtime_label = new QLabel(summary_tab);
        mtime_label->setObjectName(QString::fromUtf8("mtime_label"));
        sizePolicy3.setHeightForWidth(mtime_label->sizePolicy().hasHeightForWidth());
        mtime_label->setSizePolicy(sizePolicy3);
        mtime_label->setProperty("field_label", QVariant(true));

        gridLayout_3->addWidget(mtime_label, 7, 0, 1, 1);

        mtime = new QLabel(summary_tab);
        mtime->setObjectName(QString::fromUtf8("mtime"));
        mtime->setWordWrap(true);
        mtime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(mtime, 7, 1, 1, 3);

        ctime_label = new QLabel(summary_tab);
        ctime_label->setObjectName(QString::fromUtf8("ctime_label"));
        sizePolicy3.setHeightForWidth(ctime_label->sizePolicy().hasHeightForWidth());
        ctime_label->setSizePolicy(sizePolicy3);
        ctime_label->setProperty("field_label", QVariant(true));

        gridLayout_3->addWidget(ctime_label, 8, 0, 1, 1);

        ctime = new QLabel(summary_tab);
        ctime->setObjectName(QString::fromUtf8("ctime"));
        ctime->setWordWrap(true);
        ctime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(ctime, 8, 1, 1, 3);

        filename_label = new QLabel(summary_tab);
        filename_label->setObjectName(QString::fromUtf8("filename_label"));
        filename_label->setProperty("field_label", QVariant(true));

        gridLayout_3->addWidget(filename_label, 5, 0, 1, 1);

        filename = new QLineEdit(summary_tab);
        filename->setObjectName(QString::fromUtf8("filename"));
        filename->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  background: transparent;\n"
"}"));
        filename->setFrame(false);
        filename->setReadOnly(true);

        gridLayout_3->addWidget(filename, 5, 1, 1, 3);


        verticalLayout_2->addLayout(gridLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        tab_widget->addTab(summary_tab, QString());
        tags_tab = new QWidget();
        tags_tab->setObjectName(QString::fromUtf8("tags_tab"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(tags_tab->sizePolicy().hasHeightForWidth());
        tags_tab->setSizePolicy(sizePolicy6);
        tags_tab->setMinimumSize(QSize(528, 514));
        gridLayout_2 = new QGridLayout(tags_tab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        comment_label = new QLabel(tags_tab);
        comment_label->setObjectName(QString::fromUtf8("comment_label"));

        gridLayout->addWidget(comment_label, 12, 0, 1, 1);

        title_label = new QLabel(tags_tab);
        title_label->setObjectName(QString::fromUtf8("title_label"));

        gridLayout->addWidget(title_label, 0, 0, 1, 1);

        title = new LineEdit(tags_tab);
        title->setObjectName(QString::fromUtf8("title"));
        title->setProperty("has_reset_button", QVariant(true));
        title->setProperty("has_clear_button", QVariant(false));

        gridLayout->addWidget(title, 0, 1, 1, 1);

        track_label = new QLabel(tags_tab);
        track_label->setObjectName(QString::fromUtf8("track_label"));

        gridLayout->addWidget(track_label, 0, 2, 1, 1);

        track = new SpinBox(tags_tab);
        track->setObjectName(QString::fromUtf8("track"));
        track->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        track->setMaximum(9999);
        track->setProperty("has_clear_button", QVariant(false));
        track->setProperty("has_reset_button", QVariant(true));

        gridLayout->addWidget(track, 0, 3, 1, 1);

        artist_label = new QLabel(tags_tab);
        artist_label->setObjectName(QString::fromUtf8("artist_label"));

        gridLayout->addWidget(artist_label, 1, 0, 1, 1);

        artist = new LineEdit(tags_tab);
        artist->setObjectName(QString::fromUtf8("artist"));
        artist->setProperty("has_reset_button", QVariant(true));
        artist->setProperty("has_clear_button", QVariant(false));

        gridLayout->addWidget(artist, 1, 1, 1, 1);

        disc_label = new QLabel(tags_tab);
        disc_label->setObjectName(QString::fromUtf8("disc_label"));

        gridLayout->addWidget(disc_label, 1, 2, 1, 1);

        disc = new SpinBox(tags_tab);
        disc->setObjectName(QString::fromUtf8("disc"));
        disc->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        disc->setMaximum(9999);
        disc->setProperty("has_clear_button", QVariant(false));
        disc->setProperty("has_reset_button", QVariant(true));

        gridLayout->addWidget(disc, 1, 3, 1, 1);

        album_label = new QLabel(tags_tab);
        album_label->setObjectName(QString::fromUtf8("album_label"));

        gridLayout->addWidget(album_label, 2, 0, 1, 1);

        album = new LineEdit(tags_tab);
        album->setObjectName(QString::fromUtf8("album"));
        album->setProperty("has_reset_button", QVariant(true));
        album->setProperty("has_clear_button", QVariant(false));

        gridLayout->addWidget(album, 2, 1, 1, 1);

        year_label = new QLabel(tags_tab);
        year_label->setObjectName(QString::fromUtf8("year_label"));

        gridLayout->addWidget(year_label, 2, 2, 1, 1);

        year = new SpinBox(tags_tab);
        year->setObjectName(QString::fromUtf8("year"));
        year->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        year->setMaximum(9999);
        year->setProperty("has_clear_button", QVariant(false));
        year->setProperty("has_reset_button", QVariant(true));

        gridLayout->addWidget(year, 2, 3, 1, 1);

        albumartist_label = new QLabel(tags_tab);
        albumartist_label->setObjectName(QString::fromUtf8("albumartist_label"));

        gridLayout->addWidget(albumartist_label, 3, 0, 1, 1);

        albumartist = new LineEdit(tags_tab);
        albumartist->setObjectName(QString::fromUtf8("albumartist"));
        albumartist->setProperty("has_reset_button", QVariant(true));
        albumartist->setProperty("has_clear_button", QVariant(false));

        gridLayout->addWidget(albumartist, 3, 1, 1, 1);

        composer_label = new QLabel(tags_tab);
        composer_label->setObjectName(QString::fromUtf8("composer_label"));

        gridLayout->addWidget(composer_label, 4, 0, 1, 1);

        composer = new LineEdit(tags_tab);
        composer->setObjectName(QString::fromUtf8("composer"));
        composer->setProperty("has_reset_button", QVariant(true));
        composer->setProperty("has_clear_button", QVariant(false));

        gridLayout->addWidget(composer, 4, 1, 1, 1);

        performer_label = new QLabel(tags_tab);
        performer_label->setObjectName(QString::fromUtf8("performer_label"));

        gridLayout->addWidget(performer_label, 5, 0, 1, 1);

        performer = new LineEdit(tags_tab);
        performer->setObjectName(QString::fromUtf8("performer"));
        performer->setProperty("has_reset_button", QVariant(true));
        performer->setProperty("has_clear_button", QVariant(false));

        gridLayout->addWidget(performer, 5, 1, 1, 1);

        grouping_label = new QLabel(tags_tab);
        grouping_label->setObjectName(QString::fromUtf8("grouping_label"));

        gridLayout->addWidget(grouping_label, 6, 0, 1, 1);

        grouping = new LineEdit(tags_tab);
        grouping->setObjectName(QString::fromUtf8("grouping"));
        grouping->setProperty("has_reset_button", QVariant(true));
        grouping->setProperty("has_clear_button", QVariant(false));

        gridLayout->addWidget(grouping, 6, 1, 1, 1);

        genre_label = new QLabel(tags_tab);
        genre_label->setObjectName(QString::fromUtf8("genre_label"));

        gridLayout->addWidget(genre_label, 7, 0, 1, 1);

        genre = new LineEdit(tags_tab);
        genre->setObjectName(QString::fromUtf8("genre"));
        genre->setProperty("has_reset_button", QVariant(true));
        genre->setProperty("has_clear_button", QVariant(false));

        gridLayout->addWidget(genre, 7, 1, 1, 1);

        fetch_tag = new QPushButton(tags_tab);
        fetch_tag->setObjectName(QString::fromUtf8("fetch_tag"));
        fetch_tag->setIconSize(QSize(38, 22));

        gridLayout->addWidget(fetch_tag, 8, 1, 1, 1);

        lyrics_label = new QLabel(tags_tab);
        lyrics_label->setObjectName(QString::fromUtf8("lyrics_label"));

        gridLayout->addWidget(lyrics_label, 11, 0, 1, 1);

        lyrics = new TextEdit(tags_tab);
        lyrics->setObjectName(QString::fromUtf8("lyrics"));
        lyrics->setProperty("has_reset_button", QVariant(true));
        lyrics->setProperty("has_clear_button", QVariant(false));

        gridLayout->addWidget(lyrics, 11, 1, 1, 3);

        comment = new TextEdit(tags_tab);
        comment->setObjectName(QString::fromUtf8("comment"));
        comment->setProperty("has_reset_button", QVariant(true));
        comment->setProperty("has_clear_button", QVariant(false));

        gridLayout->addWidget(comment, 12, 1, 1, 3);


        verticalLayout_4->addLayout(gridLayout);


        gridLayout_2->addLayout(verticalLayout_4, 0, 0, 1, 1);

        tab_widget->addTab(tags_tab, QString());
        splitter->addWidget(tab_widget);

        verticalLayout_3->addWidget(splitter);

        loading_label = new BusyIndicator(EditTagDialog);
        loading_label->setObjectName(QString::fromUtf8("loading_label"));

        verticalLayout_3->addWidget(loading_label);

        button_box = new QDialogButtonBox(EditTagDialog);
        button_box->setObjectName(QString::fromUtf8("button_box"));
        button_box->setStandardButtons(QDialogButtonBox::Discard|QDialogButtonBox::Save);

        verticalLayout_3->addWidget(button_box);

#if QT_CONFIG(shortcut)
        comment_label->setBuddy(comment);
        title_label->setBuddy(title);
        track_label->setBuddy(track);
        artist_label->setBuddy(artist);
        disc_label->setBuddy(disc);
        album_label->setBuddy(album);
        year_label->setBuddy(year);
        albumartist_label->setBuddy(albumartist);
        composer_label->setBuddy(composer);
        performer_label->setBuddy(performer);
        grouping_label->setBuddy(grouping);
        genre_label->setBuddy(genre);
        lyrics_label->setBuddy(lyrics);
#endif // QT_CONFIG(shortcut)

        retranslateUi(EditTagDialog);
        QObject::connect(button_box, SIGNAL(accepted()), EditTagDialog, SLOT(accept()));
        QObject::connect(button_box, SIGNAL(rejected()), EditTagDialog, SLOT(reject()));

        tab_widget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(EditTagDialog);
    } // setupUi

    void retranslateUi(QDialog *EditTagDialog)
    {
        EditTagDialog->setWindowTitle(QCoreApplication::translate("EditTagDialog", "Edit track information", nullptr));
        art->setText(QString());
        summary_art_button->setText(QCoreApplication::translate("EditTagDialog", "Change cover art", nullptr));
        playcount_reset->setText(QCoreApplication::translate("EditTagDialog", "Reset play counts", nullptr));
        length_label->setText(QCoreApplication::translate("EditTagDialog", "Length", nullptr));
        playcount_label->setText(QCoreApplication::translate("EditTagDialog", "Play count", nullptr));
        bpm_label->setText(QCoreApplication::translate("EditTagDialog", "BPM", nullptr));
        skipcount_label->setText(QCoreApplication::translate("EditTagDialog", "Skip count", nullptr));
        bitrate_label->setText(QCoreApplication::translate("EditTagDialog", "Bit rate", nullptr));
        lastplayed_label->setText(QCoreApplication::translate("EditTagDialog", "Last played", "A playlist's tag."));
        samplerate_label->setText(QCoreApplication::translate("EditTagDialog", "Sample rate", nullptr));
        score_label->setText(QCoreApplication::translate("EditTagDialog", "Score", nullptr));
        filesize_label->setText(QCoreApplication::translate("EditTagDialog", "File size", nullptr));
        rating_label->setText(QCoreApplication::translate("EditTagDialog", "Rating", nullptr));
        filetype_label->setText(QCoreApplication::translate("EditTagDialog", "File type", nullptr));
        filetype->setText(QString());
        mtime_label->setText(QCoreApplication::translate("EditTagDialog", "Date modified", nullptr));
        ctime_label->setText(QCoreApplication::translate("EditTagDialog", "Date created", nullptr));
        filename_label->setText(QCoreApplication::translate("EditTagDialog", "File name", nullptr));
        tab_widget->setTabText(tab_widget->indexOf(summary_tab), QCoreApplication::translate("EditTagDialog", "Summary", nullptr));
        comment_label->setText(QCoreApplication::translate("EditTagDialog", "Comment", nullptr));
        title_label->setText(QCoreApplication::translate("EditTagDialog", "Title", nullptr));
        track_label->setText(QCoreApplication::translate("EditTagDialog", "Trac&k", nullptr));
        artist_label->setText(QCoreApplication::translate("EditTagDialog", "Artist", nullptr));
        disc_label->setText(QCoreApplication::translate("EditTagDialog", "Disc", nullptr));
        album_label->setText(QCoreApplication::translate("EditTagDialog", "Album", nullptr));
        year_label->setText(QCoreApplication::translate("EditTagDialog", "&Year", nullptr));
        albumartist_label->setText(QCoreApplication::translate("EditTagDialog", "Album artist", nullptr));
        composer_label->setText(QCoreApplication::translate("EditTagDialog", "Co&mposer", nullptr));
        performer_label->setText(QCoreApplication::translate("EditTagDialog", "Performer", nullptr));
        grouping_label->setText(QCoreApplication::translate("EditTagDialog", "&Grouping", nullptr));
        genre_label->setText(QCoreApplication::translate("EditTagDialog", "Ge&nre", nullptr));
        fetch_tag->setText(QCoreApplication::translate("EditTagDialog", "Complete tags automatically", nullptr));
        lyrics_label->setText(QCoreApplication::translate("EditTagDialog", "&Lyrics", nullptr));
        tab_widget->setTabText(tab_widget->indexOf(tags_tab), QCoreApplication::translate("EditTagDialog", "Edit tags", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditTagDialog: public Ui_EditTagDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTAGDIALOG_H
