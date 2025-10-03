/********************************************************************************
** Form generated from reading UI file 'subsonicsettingspage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBSONICSETTINGSPAGE_H
#define UI_SUBSONICSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/loginstatewidget.h"

QT_BEGIN_NAMESPACE

class Ui_SubsonicSettingsPage
{
public:
    QVBoxLayout *verticalLayout;
    LoginStateWidget *login_state;
    QGroupBox *server_group;
    QGridLayout *gridLayout;
    QLabel *server_label;
    QLabel *username_label;
    QLabel *password_label;
    QLineEdit *password;
    QLineEdit *username;
    QLineEdit *server;
    QCheckBox *usesslv3;
    QCheckBox *verifycert;
    QPushButton *login;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SubsonicSettingsPage)
    {
        if (SubsonicSettingsPage->objectName().isEmpty())
            SubsonicSettingsPage->setObjectName(QString::fromUtf8("SubsonicSettingsPage"));
        SubsonicSettingsPage->resize(505, 219);
        verticalLayout = new QVBoxLayout(SubsonicSettingsPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        login_state = new LoginStateWidget(SubsonicSettingsPage);
        login_state->setObjectName(QString::fromUtf8("login_state"));

        verticalLayout->addWidget(login_state);

        server_group = new QGroupBox(SubsonicSettingsPage);
        server_group->setObjectName(QString::fromUtf8("server_group"));
        gridLayout = new QGridLayout(server_group);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        server_label = new QLabel(server_group);
        server_label->setObjectName(QString::fromUtf8("server_label"));

        gridLayout->addWidget(server_label, 0, 0, 1, 1);

        username_label = new QLabel(server_group);
        username_label->setObjectName(QString::fromUtf8("username_label"));

        gridLayout->addWidget(username_label, 1, 0, 1, 1);

        password_label = new QLabel(server_group);
        password_label->setObjectName(QString::fromUtf8("password_label"));

        gridLayout->addWidget(password_label, 2, 0, 1, 1);

        password = new QLineEdit(server_group);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password, 2, 1, 1, 3);

        username = new QLineEdit(server_group);
        username->setObjectName(QString::fromUtf8("username"));

        gridLayout->addWidget(username, 1, 1, 1, 2);

        server = new QLineEdit(server_group);
        server->setObjectName(QString::fromUtf8("server"));

        gridLayout->addWidget(server, 0, 1, 1, 3);

        usesslv3 = new QCheckBox(server_group);
        usesslv3->setObjectName(QString::fromUtf8("usesslv3"));

        gridLayout->addWidget(usesslv3, 3, 1, 1, 1);

        verifycert = new QCheckBox(server_group);
        verifycert->setObjectName(QString::fromUtf8("verifycert"));
        verifycert->setChecked(true);

        gridLayout->addWidget(verifycert, 3, 2, 1, 1);

        login = new QPushButton(server_group);
        login->setObjectName(QString::fromUtf8("login"));

        gridLayout->addWidget(login, 1, 3, 1, 1);


        verticalLayout->addWidget(server_group);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(server, username);
        QWidget::setTabOrder(username, password);
        QWidget::setTabOrder(password, usesslv3);
        QWidget::setTabOrder(usesslv3, login);

        retranslateUi(SubsonicSettingsPage);

        QMetaObject::connectSlotsByName(SubsonicSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *SubsonicSettingsPage)
    {
        SubsonicSettingsPage->setWindowTitle(QCoreApplication::translate("SubsonicSettingsPage", "Subsonic", nullptr));
        server_group->setTitle(QCoreApplication::translate("SubsonicSettingsPage", "Server details", nullptr));
        server_label->setText(QCoreApplication::translate("SubsonicSettingsPage", "Server URL", nullptr));
        username_label->setText(QCoreApplication::translate("SubsonicSettingsPage", "Username", nullptr));
        password_label->setText(QCoreApplication::translate("SubsonicSettingsPage", "Password", nullptr));
        usesslv3->setText(QCoreApplication::translate("SubsonicSettingsPage", "Use SSLv3", nullptr));
        verifycert->setText(QCoreApplication::translate("SubsonicSettingsPage", "Verify Server certificate", nullptr));
        login->setText(QCoreApplication::translate("SubsonicSettingsPage", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubsonicSettingsPage: public Ui_SubsonicSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBSONICSETTINGSPAGE_H
