/********************************************************************************
** Form generated from reading UI file 'podcastinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PODCASTINFODIALOG_H
#define UI_PODCASTINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <internet/podcasts/episodeinfowidget.h>
#include "internet/podcasts/podcastinfowidget.h"

QT_BEGIN_NAMESPACE

class Ui_PodcastInfoDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QLineEdit *podcast_url;
    QScrollArea *episode_info_scroll_area;
    EpisodeInfoWidget *episode_details;
    QScrollArea *podcast_info_scroll_area;
    PodcastInfoWidget *podcast_details;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PodcastInfoDialog)
    {
        if (PodcastInfoDialog->objectName().isEmpty())
            PodcastInfoDialog->setObjectName(QString::fromUtf8("PodcastInfoDialog"));
        PodcastInfoDialog->resize(493, 415);
        verticalLayout_3 = new QVBoxLayout(PodcastInfoDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        podcast_url = new QLineEdit(PodcastInfoDialog);
        podcast_url->setObjectName(QString::fromUtf8("podcast_url"));

        verticalLayout_3->addWidget(podcast_url);

        episode_info_scroll_area = new QScrollArea(PodcastInfoDialog);
        episode_info_scroll_area->setObjectName(QString::fromUtf8("episode_info_scroll_area"));
        episode_info_scroll_area->setEnabled(true);
        episode_info_scroll_area->setMinimumSize(QSize(250, 100));
        episode_info_scroll_area->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        episode_info_scroll_area->setWidgetResizable(true);
        episode_details = new EpisodeInfoWidget();
        episode_details->setObjectName(QString::fromUtf8("episode_details"));
        episode_details->setGeometry(QRect(0, 0, 473, 163));
        episode_info_scroll_area->setWidget(episode_details);

        verticalLayout_3->addWidget(episode_info_scroll_area);

        podcast_info_scroll_area = new QScrollArea(PodcastInfoDialog);
        podcast_info_scroll_area->setObjectName(QString::fromUtf8("podcast_info_scroll_area"));
        podcast_info_scroll_area->setMinimumSize(QSize(250, 100));
        podcast_info_scroll_area->setMaximumSize(QSize(16777215, 16777215));
        podcast_info_scroll_area->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        podcast_info_scroll_area->setWidgetResizable(true);
        podcast_details = new PodcastInfoWidget();
        podcast_details->setObjectName(QString::fromUtf8("podcast_details"));
        podcast_details->setGeometry(QRect(0, 0, 473, 162));
        podcast_info_scroll_area->setWidget(podcast_details);

        verticalLayout_3->addWidget(podcast_info_scroll_area);

        buttonBox = new QDialogButtonBox(PodcastInfoDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(PodcastInfoDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PodcastInfoDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PodcastInfoDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PodcastInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *PodcastInfoDialog)
    {
        PodcastInfoDialog->setWindowTitle(QCoreApplication::translate("PodcastInfoDialog", "Podcast Information", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PodcastInfoDialog: public Ui_PodcastInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PODCASTINFODIALOG_H
