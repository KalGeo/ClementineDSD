/********************************************************************************
** Form generated from reading UI file 'seafilesettingspage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEAFILESETTINGSPAGE_H
#define UI_SEAFILESETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/loginstatewidget.h"

QT_BEGIN_NAMESPACE

class Ui_SeafileSettingsPage
{
public:
    QVBoxLayout *verticalLayout_2;
    LoginStateWidget *login_state;
    QGroupBox *account_group;
    QVBoxLayout *verticalLayout_3;
    QWidget *login_container;
    QGridLayout *gridLayout;
    QLabel *password_label;
    QLineEdit *password;
    QLabel *mail_label;
    QPushButton *login_button;
    QLabel *server_label;
    QLineEdit *mail;
    QLineEdit *server;
    QGroupBox *preference_group;
    QWidget *gridLayoutWidget;
    QGridLayout *preference_container;
    QComboBox *library_box;
    QLabel *library_label;

    void setupUi(QWidget *SeafileSettingsPage)
    {
        if (SeafileSettingsPage->objectName().isEmpty())
            SeafileSettingsPage->setObjectName(QString::fromUtf8("SeafileSettingsPage"));
        SeafileSettingsPage->resize(480, 261);
        verticalLayout_2 = new QVBoxLayout(SeafileSettingsPage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        login_state = new LoginStateWidget(SeafileSettingsPage);
        login_state->setObjectName(QString::fromUtf8("login_state"));

        verticalLayout_2->addWidget(login_state);

        account_group = new QGroupBox(SeafileSettingsPage);
        account_group->setObjectName(QString::fromUtf8("account_group"));
        verticalLayout_3 = new QVBoxLayout(account_group);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        login_container = new QWidget(account_group);
        login_container->setObjectName(QString::fromUtf8("login_container"));
        login_container->setEnabled(true);
        gridLayout = new QGridLayout(login_container);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        password_label = new QLabel(login_container);
        password_label->setObjectName(QString::fromUtf8("password_label"));

        gridLayout->addWidget(password_label, 2, 0, 1, 1);

        password = new QLineEdit(login_container);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password, 2, 1, 1, 2);

        mail_label = new QLabel(login_container);
        mail_label->setObjectName(QString::fromUtf8("mail_label"));

        gridLayout->addWidget(mail_label, 1, 0, 1, 1);

        login_button = new QPushButton(login_container);
        login_button->setObjectName(QString::fromUtf8("login_button"));

        gridLayout->addWidget(login_button, 0, 2, 1, 1);

        server_label = new QLabel(login_container);
        server_label->setObjectName(QString::fromUtf8("server_label"));

        gridLayout->addWidget(server_label, 0, 0, 1, 1);

        mail = new QLineEdit(login_container);
        mail->setObjectName(QString::fromUtf8("mail"));

        gridLayout->addWidget(mail, 1, 1, 1, 2);

        server = new QLineEdit(login_container);
        server->setObjectName(QString::fromUtf8("server"));

        gridLayout->addWidget(server, 0, 1, 1, 1);


        verticalLayout_3->addWidget(login_container);


        verticalLayout_2->addWidget(account_group);

        preference_group = new QGroupBox(SeafileSettingsPage);
        preference_group->setObjectName(QString::fromUtf8("preference_group"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(preference_group->sizePolicy().hasHeightForWidth());
        preference_group->setSizePolicy(sizePolicy);
        gridLayoutWidget = new QWidget(preference_group);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 19, 431, 31));
        preference_container = new QGridLayout(gridLayoutWidget);
        preference_container->setObjectName(QString::fromUtf8("preference_container"));
        preference_container->setSizeConstraint(QLayout::SetDefaultConstraint);
        preference_container->setContentsMargins(0, 0, 0, 0);
        library_box = new QComboBox(gridLayoutWidget);
        library_box->setObjectName(QString::fromUtf8("library_box"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(library_box->sizePolicy().hasHeightForWidth());
        library_box->setSizePolicy(sizePolicy1);

        preference_container->addWidget(library_box, 0, 1, 1, 1);

        library_label = new QLabel(gridLayoutWidget);
        library_label->setObjectName(QString::fromUtf8("library_label"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(library_label->sizePolicy().hasHeightForWidth());
        library_label->setSizePolicy(sizePolicy2);

        preference_container->addWidget(library_label, 0, 0, 1, 1);


        verticalLayout_2->addWidget(preference_group);

        QWidget::setTabOrder(server, mail);
        QWidget::setTabOrder(mail, password);
        QWidget::setTabOrder(password, login_button);
        QWidget::setTabOrder(login_button, library_box);

        retranslateUi(SeafileSettingsPage);

        QMetaObject::connectSlotsByName(SeafileSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *SeafileSettingsPage)
    {
        SeafileSettingsPage->setWindowTitle(QCoreApplication::translate("SeafileSettingsPage", "Seafile", nullptr));
#if QT_CONFIG(tooltip)
        SeafileSettingsPage->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        account_group->setTitle(QCoreApplication::translate("SeafileSettingsPage", "Account details", nullptr));
        password_label->setText(QCoreApplication::translate("SeafileSettingsPage", "Password", nullptr));
        password->setPlaceholderText(QString());
        mail_label->setText(QCoreApplication::translate("SeafileSettingsPage", "Email", nullptr));
        login_button->setText(QCoreApplication::translate("SeafileSettingsPage", "Login", nullptr));
        server_label->setText(QCoreApplication::translate("SeafileSettingsPage", "Server", nullptr));
        mail->setPlaceholderText(QString());
        server->setPlaceholderText(QString());
        preference_group->setTitle(QCoreApplication::translate("SeafileSettingsPage", "Preference", nullptr));
        library_label->setText(QCoreApplication::translate("SeafileSettingsPage", "Library", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeafileSettingsPage: public Ui_SeafileSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEAFILESETTINGSPAGE_H
