/********************************************************************************
** Form generated from reading UI file 'radiobrowsersettingspage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RADIOBROWSERSETTINGSPAGE_H
#define UI_RADIOBROWSERSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RadioBrowserSettingsPage
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *server_group;
    QGridLayout *gridLayout;
    QLabel *server_label;
    QLineEdit *server;
    QPushButton *restoreButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *RadioBrowserSettingsPage)
    {
        if (RadioBrowserSettingsPage->objectName().isEmpty())
            RadioBrowserSettingsPage->setObjectName(QString::fromUtf8("RadioBrowserSettingsPage"));
        RadioBrowserSettingsPage->resize(607, 282);
        verticalLayout = new QVBoxLayout(RadioBrowserSettingsPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        server_group = new QGroupBox(RadioBrowserSettingsPage);
        server_group->setObjectName(QString::fromUtf8("server_group"));
        gridLayout = new QGridLayout(server_group);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        server_label = new QLabel(server_group);
        server_label->setObjectName(QString::fromUtf8("server_label"));

        gridLayout->addWidget(server_label, 0, 0, 1, 1);

        server = new QLineEdit(server_group);
        server->setObjectName(QString::fromUtf8("server"));

        gridLayout->addWidget(server, 0, 2, 1, 2);

        restoreButton = new QPushButton(server_group);
        restoreButton->setObjectName(QString::fromUtf8("restoreButton"));

        gridLayout->addWidget(restoreButton, 1, 2, 1, 1);


        verticalLayout->addWidget(server_group);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(RadioBrowserSettingsPage);

        QMetaObject::connectSlotsByName(RadioBrowserSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *RadioBrowserSettingsPage)
    {
        RadioBrowserSettingsPage->setWindowTitle(QCoreApplication::translate("RadioBrowserSettingsPage", "RadioBrowser", nullptr));
        server_group->setTitle(QCoreApplication::translate("RadioBrowserSettingsPage", "Server details", nullptr));
        server_label->setText(QCoreApplication::translate("RadioBrowserSettingsPage", "Server URL", nullptr));
        restoreButton->setText(QCoreApplication::translate("RadioBrowserSettingsPage", "Restore Default Server", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RadioBrowserSettingsPage: public Ui_RadioBrowserSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADIOBROWSERSETTINGSPAGE_H
