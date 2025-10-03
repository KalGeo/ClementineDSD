/********************************************************************************
** Form generated from reading UI file 'albumcoversearcher.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALBUMCOVERSEARCHER_H
#define UI_ALBUMCOVERSEARCHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include "3rdparty/qocoa/qsearchfield.h"
#include "widgets/busyindicator.h"
#include "widgets/groupediconview.h"

QT_BEGIN_NAMESPACE

class Ui_AlbumCoverSearcher
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSearchField *artist;
    QSearchField *album;
    QPushButton *search;
    BusyIndicator *busy;
    GroupedIconView *covers;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AlbumCoverSearcher)
    {
        if (AlbumCoverSearcher->objectName().isEmpty())
            AlbumCoverSearcher->setObjectName(QString::fromUtf8("AlbumCoverSearcher"));
        AlbumCoverSearcher->resize(829, 518);
        verticalLayout = new QVBoxLayout(AlbumCoverSearcher);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        artist = new QSearchField(AlbumCoverSearcher);
        artist->setObjectName(QString::fromUtf8("artist"));

        horizontalLayout->addWidget(artist);

        album = new QSearchField(AlbumCoverSearcher);
        album->setObjectName(QString::fromUtf8("album"));

        horizontalLayout->addWidget(album);

        search = new QPushButton(AlbumCoverSearcher);
        search->setObjectName(QString::fromUtf8("search"));

        horizontalLayout->addWidget(search);

        busy = new BusyIndicator(AlbumCoverSearcher);
        busy->setObjectName(QString::fromUtf8("busy"));

        horizontalLayout->addWidget(busy);


        verticalLayout->addLayout(horizontalLayout);

        covers = new GroupedIconView(AlbumCoverSearcher);
        covers->setObjectName(QString::fromUtf8("covers"));
        covers->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        covers->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        covers->setIconSize(QSize(120, 120));
        covers->setSpacing(2);

        verticalLayout->addWidget(covers);

        buttonBox = new QDialogButtonBox(AlbumCoverSearcher);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(artist, album);
        QWidget::setTabOrder(album, search);
        QWidget::setTabOrder(search, covers);
        QWidget::setTabOrder(covers, buttonBox);

        retranslateUi(AlbumCoverSearcher);
        QObject::connect(buttonBox, SIGNAL(accepted()), AlbumCoverSearcher, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AlbumCoverSearcher, SLOT(reject()));
        QObject::connect(artist, SIGNAL(returnPressed()), search, SLOT(click()));
        QObject::connect(album, SIGNAL(returnPressed()), search, SLOT(click()));

        QMetaObject::connectSlotsByName(AlbumCoverSearcher);
    } // setupUi

    void retranslateUi(QDialog *AlbumCoverSearcher)
    {
        AlbumCoverSearcher->setWindowTitle(QCoreApplication::translate("AlbumCoverSearcher", "Cover Manager", nullptr));
#if QT_CONFIG(tooltip)
        artist->setToolTip(QCoreApplication::translate("AlbumCoverSearcher", "Artist", nullptr));
#endif // QT_CONFIG(tooltip)
        artist->setProperty("placeholderText", QVariant(QCoreApplication::translate("AlbumCoverSearcher", "Artist", nullptr)));
#if QT_CONFIG(tooltip)
        album->setToolTip(QCoreApplication::translate("AlbumCoverSearcher", "Album", nullptr));
#endif // QT_CONFIG(tooltip)
        album->setProperty("placeholderText", QVariant(QCoreApplication::translate("AlbumCoverSearcher", "Album", nullptr)));
        search->setText(QCoreApplication::translate("AlbumCoverSearcher", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlbumCoverSearcher: public Ui_AlbumCoverSearcher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALBUMCOVERSEARCHER_H
