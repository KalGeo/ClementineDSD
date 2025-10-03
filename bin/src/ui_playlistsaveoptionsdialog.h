/********************************************************************************
** Form generated from reading UI file 'playlistsaveoptionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYLISTSAVEOPTIONSDIALOG_H
#define UI_PLAYLISTSAVEOPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PlaylistSaveOptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *filePaths;
    QGridLayout *gridLayout_2;
    QCheckBox *remember_user_choice;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PlaylistSaveOptionsDialog)
    {
        if (PlaylistSaveOptionsDialog->objectName().isEmpty())
            PlaylistSaveOptionsDialog->setObjectName(QString::fromUtf8("PlaylistSaveOptionsDialog"));
        PlaylistSaveOptionsDialog->resize(348, 116);
        verticalLayout = new QVBoxLayout(PlaylistSaveOptionsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(PlaylistSaveOptionsDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        filePaths = new QComboBox(PlaylistSaveOptionsDialog);
        filePaths->setObjectName(QString::fromUtf8("filePaths"));

        gridLayout->addWidget(filePaths, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 0, -1, -1);
        remember_user_choice = new QCheckBox(PlaylistSaveOptionsDialog);
        remember_user_choice->setObjectName(QString::fromUtf8("remember_user_choice"));

        gridLayout_2->addWidget(remember_user_choice, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(PlaylistSaveOptionsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PlaylistSaveOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PlaylistSaveOptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PlaylistSaveOptionsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PlaylistSaveOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *PlaylistSaveOptionsDialog)
    {
        PlaylistSaveOptionsDialog->setWindowTitle(QCoreApplication::translate("PlaylistSaveOptionsDialog", "Playlist options", nullptr));
        label->setText(QCoreApplication::translate("PlaylistSaveOptionsDialog", "File paths", nullptr));
#if QT_CONFIG(tooltip)
        remember_user_choice->setToolTip(QCoreApplication::translate("PlaylistSaveOptionsDialog", "This can be changed later through the preferences", nullptr));
#endif // QT_CONFIG(tooltip)
        remember_user_choice->setText(QCoreApplication::translate("PlaylistSaveOptionsDialog", "Remember my choice", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlaylistSaveOptionsDialog: public Ui_PlaylistSaveOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYLISTSAVEOPTIONSDIALOG_H
