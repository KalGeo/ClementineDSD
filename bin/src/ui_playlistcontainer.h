/********************************************************************************
** Form generated from reading UI file 'playlistcontainer.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYLISTCONTAINER_H
#define UI_PLAYLISTCONTAINER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "3rdparty/qocoa/qsearchfield.h"
#include "playlist/playlisttabbar.h"
#include "playlist/playlistview.h"

QT_BEGIN_NAMESPACE

class Ui_PlaylistContainer
{
public:
    QVBoxLayout *verticalLayout_2;
    PlaylistTabBar *tab_bar;
    QFrame *toolbar;
    QHBoxLayout *horizontalLayout;
    QToolButton *create_new;
    QToolButton *load;
    QToolButton *save;
    QToolButton *undo;
    QToolButton *redo;
    QSearchField *filter;
    PlaylistView *playlist;

    void setupUi(QWidget *PlaylistContainer)
    {
        if (PlaylistContainer->objectName().isEmpty())
            PlaylistContainer->setObjectName(QString::fromUtf8("PlaylistContainer"));
        PlaylistContainer->resize(987, 707);
        PlaylistContainer->setStyleSheet(QString::fromUtf8("#toolbar {\n"
"  border-color: palette(dark);\n"
"  border-style: solid;\n"
"  border-width: 0px 1px 0px 1px;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(PlaylistContainer);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tab_bar = new PlaylistTabBar(PlaylistContainer);
        tab_bar->setObjectName(QString::fromUtf8("tab_bar"));

        verticalLayout_2->addWidget(tab_bar);

        toolbar = new QFrame(PlaylistContainer);
        toolbar->setObjectName(QString::fromUtf8("toolbar"));
        horizontalLayout = new QHBoxLayout(toolbar);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        create_new = new QToolButton(toolbar);
        create_new->setObjectName(QString::fromUtf8("create_new"));
        create_new->setIconSize(QSize(16, 16));
        create_new->setAutoRaise(true);

        horizontalLayout->addWidget(create_new);

        load = new QToolButton(toolbar);
        load->setObjectName(QString::fromUtf8("load"));
        load->setIconSize(QSize(16, 16));
        load->setAutoRaise(true);

        horizontalLayout->addWidget(load);

        save = new QToolButton(toolbar);
        save->setObjectName(QString::fromUtf8("save"));
        save->setIconSize(QSize(16, 16));
        save->setAutoRaise(true);

        horizontalLayout->addWidget(save);

        undo = new QToolButton(toolbar);
        undo->setObjectName(QString::fromUtf8("undo"));
        undo->setIconSize(QSize(16, 16));
        undo->setAutoRaise(true);

        horizontalLayout->addWidget(undo);

        redo = new QToolButton(toolbar);
        redo->setObjectName(QString::fromUtf8("redo"));
        redo->setIconSize(QSize(16, 16));
        redo->setAutoRaise(true);

        horizontalLayout->addWidget(redo);

        filter = new QSearchField(toolbar);
        filter->setObjectName(QString::fromUtf8("filter"));

        horizontalLayout->addWidget(filter);


        verticalLayout_2->addWidget(toolbar);

        playlist = new PlaylistView(PlaylistContainer);
        playlist->setObjectName(QString::fromUtf8("playlist"));
        playlist->setAcceptDrops(true);
        playlist->setEditTriggers(QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        playlist->setDragEnabled(true);
        playlist->setDragDropMode(QAbstractItemView::DragDrop);
        playlist->setSelectionMode(QAbstractItemView::ExtendedSelection);
        playlist->setRootIsDecorated(false);
        playlist->setUniformRowHeights(true);
        playlist->setItemsExpandable(false);
        playlist->setSortingEnabled(true);
        playlist->setAllColumnsShowFocus(true);

        verticalLayout_2->addWidget(playlist);


        retranslateUi(PlaylistContainer);

        QMetaObject::connectSlotsByName(PlaylistContainer);
    } // setupUi

    void retranslateUi(QWidget *PlaylistContainer)
    {
        PlaylistContainer->setWindowTitle(QCoreApplication::translate("PlaylistContainer", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlaylistContainer: public Ui_PlaylistContainer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYLISTCONTAINER_H
