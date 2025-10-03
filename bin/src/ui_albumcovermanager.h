/********************************************************************************
** Form generated from reading UI file 'albumcovermanager.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALBUMCOVERMANAGER_H
#define UI_ALBUMCOVERMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "3rdparty/qocoa/qsearchfield.h"
#include "ui/albumcovermanagerlist.h"

QT_BEGIN_NAMESPACE

class Ui_CoverManager
{
public:
    QAction *action_fetch;
    QAction *action_load;
    QAction *action_add_to_playlist;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QListWidget *artists;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSearchField *filter;
    QToolButton *view;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *total_albums;
    QLabel *without_cover;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QPushButton *fetch;
    QSpacerItem *verticalSpacer;
    QPushButton *export_covers;
    AlbumCoverManagerList *albums;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CoverManager)
    {
        if (CoverManager->objectName().isEmpty())
            CoverManager->setObjectName(QString::fromUtf8("CoverManager"));
        CoverManager->resize(903, 662);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        CoverManager->setWindowIcon(icon);
        action_fetch = new QAction(CoverManager);
        action_fetch->setObjectName(QString::fromUtf8("action_fetch"));
        action_load = new QAction(CoverManager);
        action_load->setObjectName(QString::fromUtf8("action_load"));
        action_add_to_playlist = new QAction(CoverManager);
        action_add_to_playlist->setObjectName(QString::fromUtf8("action_add_to_playlist"));
        centralWidget = new QWidget(CoverManager);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        artists = new QListWidget(splitter);
        artists->setObjectName(QString::fromUtf8("artists"));
        artists->setAlternatingRowColors(true);
        artists->setSelectionBehavior(QAbstractItemView::SelectRows);
        artists->setIconSize(QSize(24, 24));
        artists->setUniformItemSizes(true);
        splitter->addWidget(artists);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        filter = new QSearchField(widget);
        filter->setObjectName(QString::fromUtf8("filter"));

        horizontalLayout_2->addWidget(filter);

        view = new QToolButton(widget);
        view->setObjectName(QString::fromUtf8("view"));
        view->setIconSize(QSize(16, 16));
        view->setPopupMode(QToolButton::MenuButtonPopup);
        view->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        view->setAutoRaise(true);

        horizontalLayout_2->addWidget(view);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 10, -1, 10);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_4->addWidget(label_3);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(-1, 10, -1, 10);
        total_albums = new QLabel(widget);
        total_albums->setObjectName(QString::fromUtf8("total_albums"));
        total_albums->setLayoutDirection(Qt::RightToLeft);
        total_albums->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_6->addWidget(total_albums);

        without_cover = new QLabel(widget);
        without_cover->setObjectName(QString::fromUtf8("without_cover"));
        without_cover->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_6->addWidget(without_cover);


        horizontalLayout->addLayout(verticalLayout_6);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 5, 5, 5);
        fetch = new QPushButton(widget);
        fetch->setObjectName(QString::fromUtf8("fetch"));
        fetch->setIconSize(QSize(16, 16));

        verticalLayout_3->addWidget(fetch);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        export_covers = new QPushButton(widget);
        export_covers->setObjectName(QString::fromUtf8("export_covers"));

        verticalLayout_3->addWidget(export_covers);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout);

        albums = new AlbumCoverManagerList(widget);
        albums->setObjectName(QString::fromUtf8("albums"));
        albums->setDragEnabled(true);
        albums->setDragDropMode(QAbstractItemView::DragDrop);
        albums->setAlternatingRowColors(false);
        albums->setSelectionMode(QAbstractItemView::ExtendedSelection);
        albums->setIconSize(QSize(120, 120));
        albums->setFlow(QListView::LeftToRight);
        albums->setProperty("isWrapping", QVariant(true));
        albums->setResizeMode(QListView::Adjust);
        albums->setSpacing(2);
        albums->setViewMode(QListView::IconMode);
        albums->setUniformItemSizes(false);
        albums->setWordWrap(true);

        verticalLayout->addWidget(albums);

        splitter->addWidget(widget);

        verticalLayout_2->addWidget(splitter);

        CoverManager->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(CoverManager);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        CoverManager->setStatusBar(statusBar);
        QWidget::setTabOrder(artists, albums);

        retranslateUi(CoverManager);

        QMetaObject::connectSlotsByName(CoverManager);
    } // setupUi

    void retranslateUi(QMainWindow *CoverManager)
    {
        CoverManager->setWindowTitle(QCoreApplication::translate("CoverManager", "Cover Manager", nullptr));
        action_fetch->setText(QCoreApplication::translate("CoverManager", "Fetch automatically", nullptr));
        action_load->setText(QCoreApplication::translate("CoverManager", "Load", nullptr));
        action_add_to_playlist->setText(QCoreApplication::translate("CoverManager", "Add to playlist", nullptr));
        filter->setProperty("placeholderText", QVariant(QCoreApplication::translate("CoverManager", "Enter search terms here", nullptr)));
        view->setText(QCoreApplication::translate("CoverManager", "View", nullptr));
        label_3->setText(QCoreApplication::translate("CoverManager", "Total albums:", nullptr));
        label_2->setText(QCoreApplication::translate("CoverManager", "Without cover:", nullptr));
        total_albums->setText(QCoreApplication::translate("CoverManager", "0", nullptr));
        without_cover->setText(QCoreApplication::translate("CoverManager", "0", nullptr));
        fetch->setText(QCoreApplication::translate("CoverManager", "Fetch Missing Covers", nullptr));
        export_covers->setText(QCoreApplication::translate("CoverManager", "Export Covers", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CoverManager: public Ui_CoverManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALBUMCOVERMANAGER_H
