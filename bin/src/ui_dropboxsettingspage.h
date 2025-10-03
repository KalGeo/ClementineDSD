/********************************************************************************
** Form generated from reading UI file 'dropboxsettingspage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DROPBOXSETTINGSPAGE_H
#define UI_DROPBOXSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/loginstatewidget.h"

QT_BEGIN_NAMESPACE

class Ui_DropboxSettingsPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    LoginStateWidget *login_state;
    QWidget *login_container;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *login_button;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *DropboxSettingsPage)
    {
        if (DropboxSettingsPage->objectName().isEmpty())
            DropboxSettingsPage->setObjectName(QString::fromUtf8("DropboxSettingsPage"));
        DropboxSettingsPage->resize(569, 491);
        verticalLayout_2 = new QVBoxLayout(DropboxSettingsPage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(DropboxSettingsPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout_2->addWidget(label);

        login_state = new LoginStateWidget(DropboxSettingsPage);
        login_state->setObjectName(QString::fromUtf8("login_state"));

        verticalLayout_2->addWidget(login_state);

        login_container = new QWidget(DropboxSettingsPage);
        login_container->setObjectName(QString::fromUtf8("login_container"));
        verticalLayout = new QVBoxLayout(login_container);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(28, 0, -1, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        login_button = new QPushButton(login_container);
        login_button->setObjectName(QString::fromUtf8("login_button"));

        horizontalLayout->addWidget(login_button);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(login_container);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);


        verticalLayout_2->addWidget(login_container);

        verticalSpacer = new QSpacerItem(20, 357, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(DropboxSettingsPage);

        QMetaObject::connectSlotsByName(DropboxSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *DropboxSettingsPage)
    {
        DropboxSettingsPage->setWindowTitle(QCoreApplication::translate("DropboxSettingsPage", "Dropbox", nullptr));
        label->setText(QCoreApplication::translate("DropboxSettingsPage", "Clementine can play music that you have uploaded to Dropbox", nullptr));
        login_button->setText(QCoreApplication::translate("DropboxSettingsPage", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("DropboxSettingsPage", "Clicking the Login button will open a web browser.  You should return to Clementine after you have logged in.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DropboxSettingsPage: public Ui_DropboxSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DROPBOXSETTINGSPAGE_H
