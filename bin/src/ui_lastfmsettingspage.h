/********************************************************************************
** Form generated from reading UI file 'lastfmsettingspage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LASTFMSETTINGSPAGE_H
#define UI_LASTFMSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/loginstatewidget.h"

QT_BEGIN_NAMESPACE

class Ui_LastFMSettingsPage
{
public:
    QVBoxLayout *verticalLayout_2;
    LoginStateWidget *login_state;
    QWidget *login_container;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *login;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *scrobble;
    QCheckBox *love_ban_;
    QCheckBox *scrobble_button;
    QCheckBox *prefer_albumartist;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *LastFMSettingsPage)
    {
        if (LastFMSettingsPage->objectName().isEmpty())
            LastFMSettingsPage->setObjectName(QString::fromUtf8("LastFMSettingsPage"));
        LastFMSettingsPage->resize(769, 551);
        verticalLayout_2 = new QVBoxLayout(LastFMSettingsPage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        login_state = new LoginStateWidget(LastFMSettingsPage);
        login_state->setObjectName(QString::fromUtf8("login_state"));

        verticalLayout_2->addWidget(login_state);

        login_container = new QWidget(LastFMSettingsPage);
        login_container->setObjectName(QString::fromUtf8("login_container"));
        verticalLayout_3 = new QVBoxLayout(login_container);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(28, 0, -1, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        login = new QPushButton(login_container);
        login->setObjectName(QString::fromUtf8("login"));

        horizontalLayout_2->addWidget(login);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        label_2 = new QLabel(login_container);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);

        verticalLayout_3->addWidget(label_2);


        verticalLayout_2->addWidget(login_container);

        groupBox_2 = new QGroupBox(LastFMSettingsPage);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrobble = new QCheckBox(groupBox_2);
        scrobble->setObjectName(QString::fromUtf8("scrobble"));
        scrobble->setChecked(true);

        verticalLayout->addWidget(scrobble);

        love_ban_ = new QCheckBox(groupBox_2);
        love_ban_->setObjectName(QString::fromUtf8("love_ban_"));
        love_ban_->setChecked(true);

        verticalLayout->addWidget(love_ban_);

        scrobble_button = new QCheckBox(groupBox_2);
        scrobble_button->setObjectName(QString::fromUtf8("scrobble_button"));

        verticalLayout->addWidget(scrobble_button);

        prefer_albumartist = new QCheckBox(groupBox_2);
        prefer_albumartist->setObjectName(QString::fromUtf8("prefer_albumartist"));

        verticalLayout->addWidget(prefer_albumartist);


        verticalLayout_2->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_2->addItem(verticalSpacer);

        QWidget::setTabOrder(scrobble, love_ban_);
        QWidget::setTabOrder(love_ban_, scrobble_button);

        retranslateUi(LastFMSettingsPage);

        QMetaObject::connectSlotsByName(LastFMSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *LastFMSettingsPage)
    {
        LastFMSettingsPage->setWindowTitle(QCoreApplication::translate("LastFMSettingsPage", "Last.fm", nullptr));
        login->setText(QCoreApplication::translate("LastFMSettingsPage", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("LastFMSettingsPage", "Clicking the Login button will open a web browser.  You should return to Clementine after you have logged in.", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("LastFMSettingsPage", "Preferences", nullptr));
        scrobble->setText(QCoreApplication::translate("LastFMSettingsPage", "Scrobble tracks that I listen to", nullptr));
        love_ban_->setText(QCoreApplication::translate("LastFMSettingsPage", "Show the \"love\" button", nullptr));
        scrobble_button->setText(QCoreApplication::translate("LastFMSettingsPage", "Show the scrobble button in the main window", nullptr));
        prefer_albumartist->setText(QCoreApplication::translate("LastFMSettingsPage", "Use Album Artist tag when available", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LastFMSettingsPage: public Ui_LastFMSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LASTFMSETTINGSPAGE_H
