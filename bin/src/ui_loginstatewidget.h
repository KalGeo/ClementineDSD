/********************************************************************************
** Form generated from reading UI file 'loginstatewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSTATEWIDGET_H
#define UI_LOGINSTATEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/busyindicator.h"

QT_BEGIN_NAMESPACE

class Ui_LoginStateWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *signed_out;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLabel *signed_out_label;
    QWidget *signed_in;
    QHBoxLayout *horizontalLayout_2;
    QLabel *signed_in_icon_label;
    QLabel *signed_in_label;
    QPushButton *sign_out;
    QWidget *expires;
    QHBoxLayout *horizontalLayout_4;
    QLabel *expires_icon_label;
    QLabel *expires_label;
    QWidget *account_type;
    QHBoxLayout *horizontalLayout_3;
    QLabel *account_type_icon_label;
    QLabel *account_type_label;
    BusyIndicator *busy;

    void setupUi(QWidget *LoginStateWidget)
    {
        if (LoginStateWidget->objectName().isEmpty())
            LoginStateWidget->setObjectName(QString::fromUtf8("LoginStateWidget"));
        LoginStateWidget->resize(526, 187);
        verticalLayout = new QVBoxLayout(LoginStateWidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        signed_out = new QWidget(LoginStateWidget);
        signed_out->setObjectName(QString::fromUtf8("signed_out"));
        horizontalLayout = new QHBoxLayout(signed_out);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(signed_out);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(22, 22));

        horizontalLayout->addWidget(label_5);

        signed_out_label = new QLabel(signed_out);
        signed_out_label->setObjectName(QString::fromUtf8("signed_out_label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(signed_out_label->sizePolicy().hasHeightForWidth());
        signed_out_label->setSizePolicy(sizePolicy);
        signed_out_label->setWordWrap(true);

        horizontalLayout->addWidget(signed_out_label);


        verticalLayout->addWidget(signed_out);

        signed_in = new QWidget(LoginStateWidget);
        signed_in->setObjectName(QString::fromUtf8("signed_in"));
        horizontalLayout_2 = new QHBoxLayout(signed_in);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        signed_in_icon_label = new QLabel(signed_in);
        signed_in_icon_label->setObjectName(QString::fromUtf8("signed_in_icon_label"));
        signed_in_icon_label->setMinimumSize(QSize(22, 22));

        horizontalLayout_2->addWidget(signed_in_icon_label);

        signed_in_label = new QLabel(signed_in);
        signed_in_label->setObjectName(QString::fromUtf8("signed_in_label"));
        sizePolicy.setHeightForWidth(signed_in_label->sizePolicy().hasHeightForWidth());
        signed_in_label->setSizePolicy(sizePolicy);
        signed_in_label->setTextFormat(Qt::RichText);
        signed_in_label->setWordWrap(true);

        horizontalLayout_2->addWidget(signed_in_label);

        sign_out = new QPushButton(signed_in);
        sign_out->setObjectName(QString::fromUtf8("sign_out"));

        horizontalLayout_2->addWidget(sign_out);


        verticalLayout->addWidget(signed_in);

        expires = new QWidget(LoginStateWidget);
        expires->setObjectName(QString::fromUtf8("expires"));
        horizontalLayout_4 = new QHBoxLayout(expires);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        expires_icon_label = new QLabel(expires);
        expires_icon_label->setObjectName(QString::fromUtf8("expires_icon_label"));
        expires_icon_label->setMinimumSize(QSize(22, 22));

        horizontalLayout_4->addWidget(expires_icon_label);

        expires_label = new QLabel(expires);
        expires_label->setObjectName(QString::fromUtf8("expires_label"));
        sizePolicy.setHeightForWidth(expires_label->sizePolicy().hasHeightForWidth());
        expires_label->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(expires_label);


        verticalLayout->addWidget(expires);

        account_type = new QWidget(LoginStateWidget);
        account_type->setObjectName(QString::fromUtf8("account_type"));
        horizontalLayout_3 = new QHBoxLayout(account_type);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        account_type_icon_label = new QLabel(account_type);
        account_type_icon_label->setObjectName(QString::fromUtf8("account_type_icon_label"));
        account_type_icon_label->setMinimumSize(QSize(22, 22));
        account_type_icon_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_3->addWidget(account_type_icon_label);

        account_type_label = new QLabel(account_type);
        account_type_label->setObjectName(QString::fromUtf8("account_type_label"));
        sizePolicy.setHeightForWidth(account_type_label->sizePolicy().hasHeightForWidth());
        account_type_label->setSizePolicy(sizePolicy);
        account_type_label->setWordWrap(true);

        horizontalLayout_3->addWidget(account_type_label);


        verticalLayout->addWidget(account_type);

        busy = new BusyIndicator(LoginStateWidget);
        busy->setObjectName(QString::fromUtf8("busy"));

        verticalLayout->addWidget(busy);


        retranslateUi(LoginStateWidget);

        QMetaObject::connectSlotsByName(LoginStateWidget);
    } // setupUi

    void retranslateUi(QWidget *LoginStateWidget)
    {
        LoginStateWidget->setWindowTitle(QCoreApplication::translate("LoginStateWidget", "Form", nullptr));
        signed_out_label->setText(QCoreApplication::translate("LoginStateWidget", "You are not signed in.", nullptr));
        sign_out->setText(QCoreApplication::translate("LoginStateWidget", "Sign out", nullptr));
        account_type_label->setText(QString());
        busy->setProperty("text", QVariant(QCoreApplication::translate("LoginStateWidget", "Signing in...", nullptr)));
    } // retranslateUi

};

namespace Ui {
    class LoginStateWidget: public Ui_LoginStateWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSTATEWIDGET_H
