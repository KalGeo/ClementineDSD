/********************************************************************************
** Form generated from reading UI file 'networkremotesettingspage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKREMOTESETTINGSPAGE_H
#define UI_NETWORKREMOTESETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <ui/filechooserwidget.h>

QT_BEGIN_NAMESPACE

class Ui_NetworkRemoteSettingsPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QCheckBox *use_remote;
    QGroupBox *use_remote_container_2;
    QFormLayout *formLayout;
    QLabel *label_remote_port;
    QSpinBox *remote_port;
    QCheckBox *only_non_public_ip;
    QCheckBox *use_auth_code;
    QSpinBox *auth_code;
    QLabel *label_2;
    QLabel *ip_address;
    QCheckBox *allow_downloads;
    QGroupBox *download_settings_container;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *convert_lossless;
    QGroupBox *format_container;
    QGridLayout *gridLayout;
    QPushButton *options;
    QComboBox *format;
    QLabel *label_3;
    FileChooserWidget *files_root_folder;
    QLineEdit *files_music_extensions;
    QLabel *label_4;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QLabel *desktop_remote;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *play_store_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_5;
    QLabel *android_app_qr_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *apple_store;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_6;
    QLabel *iOS_app_qr;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *play_store;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLabel *android_app_qr;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *NetworkRemoteSettingsPage)
    {
        if (NetworkRemoteSettingsPage->objectName().isEmpty())
            NetworkRemoteSettingsPage->setObjectName(QString::fromUtf8("NetworkRemoteSettingsPage"));
        NetworkRemoteSettingsPage->resize(421, 664);
        verticalLayout_2 = new QVBoxLayout(NetworkRemoteSettingsPage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        use_remote = new QCheckBox(NetworkRemoteSettingsPage);
        use_remote->setObjectName(QString::fromUtf8("use_remote"));

        verticalLayout_2->addWidget(use_remote);

        use_remote_container_2 = new QGroupBox(NetworkRemoteSettingsPage);
        use_remote_container_2->setObjectName(QString::fromUtf8("use_remote_container_2"));
        use_remote_container_2->setEnabled(false);
        formLayout = new QFormLayout(use_remote_container_2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_remote_port = new QLabel(use_remote_container_2);
        label_remote_port->setObjectName(QString::fromUtf8("label_remote_port"));
        label_remote_port->setMinimumSize(QSize(171, 0));
        label_remote_port->setLayoutDirection(Qt::LeftToRight);
        label_remote_port->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_remote_port);

        remote_port = new QSpinBox(use_remote_container_2);
        remote_port->setObjectName(QString::fromUtf8("remote_port"));
        remote_port->setMaximum(65535);
        remote_port->setValue(8080);

        formLayout->setWidget(0, QFormLayout::FieldRole, remote_port);

        only_non_public_ip = new QCheckBox(use_remote_container_2);
        only_non_public_ip->setObjectName(QString::fromUtf8("only_non_public_ip"));
        only_non_public_ip->setChecked(true);

        formLayout->setWidget(1, QFormLayout::SpanningRole, only_non_public_ip);

        use_auth_code = new QCheckBox(use_remote_container_2);
        use_auth_code->setObjectName(QString::fromUtf8("use_auth_code"));

        formLayout->setWidget(2, QFormLayout::LabelRole, use_auth_code);

        auth_code = new QSpinBox(use_remote_container_2);
        auth_code->setObjectName(QString::fromUtf8("auth_code"));
        auth_code->setEnabled(false);
        auth_code->setMaximum(99999);

        formLayout->setWidget(2, QFormLayout::FieldRole, auth_code);

        label_2 = new QLabel(use_remote_container_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_2);

        ip_address = new QLabel(use_remote_container_2);
        ip_address->setObjectName(QString::fromUtf8("ip_address"));
        ip_address->setText(QString::fromUtf8("127.0.0.1"));

        formLayout->setWidget(9, QFormLayout::FieldRole, ip_address);

        allow_downloads = new QCheckBox(use_remote_container_2);
        allow_downloads->setObjectName(QString::fromUtf8("allow_downloads"));

        formLayout->setWidget(3, QFormLayout::LabelRole, allow_downloads);

        download_settings_container = new QGroupBox(use_remote_container_2);
        download_settings_container->setObjectName(QString::fromUtf8("download_settings_container"));
        download_settings_container->setEnabled(false);
        verticalLayout_3 = new QVBoxLayout(download_settings_container);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        convert_lossless = new QCheckBox(download_settings_container);
        convert_lossless->setObjectName(QString::fromUtf8("convert_lossless"));

        verticalLayout_3->addWidget(convert_lossless);

        format_container = new QGroupBox(download_settings_container);
        format_container->setObjectName(QString::fromUtf8("format_container"));
        format_container->setEnabled(false);
        gridLayout = new QGridLayout(format_container);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        options = new QPushButton(format_container);
        options->setObjectName(QString::fromUtf8("options"));

        gridLayout->addWidget(options, 0, 1, 1, 1);

        format = new QComboBox(format_container);
        format->setObjectName(QString::fromUtf8("format"));

        gridLayout->addWidget(format, 0, 0, 1, 1);


        verticalLayout_3->addWidget(format_container);


        formLayout->setWidget(7, QFormLayout::SpanningRole, download_settings_container);

        label_3 = new QLabel(use_remote_container_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_3);

        files_root_folder = new FileChooserWidget(use_remote_container_2);
        files_root_folder->setObjectName(QString::fromUtf8("files_root_folder"));
        files_root_folder->setMinimumSize(QSize(100, 0));

        formLayout->setWidget(5, QFormLayout::FieldRole, files_root_folder);

        files_music_extensions = new QLineEdit(use_remote_container_2);
        files_music_extensions->setObjectName(QString::fromUtf8("files_music_extensions"));

        formLayout->setWidget(6, QFormLayout::FieldRole, files_music_extensions);

        label_4 = new QLabel(use_remote_container_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_4);


        verticalLayout_2->addWidget(use_remote_container_2);

        groupBox_2 = new QGroupBox(NetworkRemoteSettingsPage);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        desktop_remote = new QLabel(groupBox_2);
        desktop_remote->setObjectName(QString::fromUtf8("desktop_remote"));

        verticalLayout->addWidget(desktop_remote);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        play_store_2 = new QLabel(groupBox_2);
        play_store_2->setObjectName(QString::fromUtf8("play_store_2"));
        play_store_2->setCursor(QCursor(Qt::PointingHandCursor));
        play_store_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(play_store_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_5);

        android_app_qr_2 = new QLabel(groupBox_2);
        android_app_qr_2->setObjectName(QString::fromUtf8("android_app_qr_2"));
        android_app_qr_2->setMaximumSize(QSize(150, 150));
        android_app_qr_2->setPixmap(QPixmap(QString::fromUtf8(":/clem_remote_android_qr.png")));
        android_app_qr_2->setScaledContents(true);
        android_app_qr_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(android_app_qr_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        apple_store = new QLabel(groupBox_2);
        apple_store->setObjectName(QString::fromUtf8("apple_store"));
        apple_store->setCursor(QCursor(Qt::PointingHandCursor));
        apple_store->setPixmap(QPixmap(QString::fromUtf8(":/en_available_apple_store_45.png")));
        apple_store->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(apple_store);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_6);

        iOS_app_qr = new QLabel(groupBox_2);
        iOS_app_qr->setObjectName(QString::fromUtf8("iOS_app_qr"));
        iOS_app_qr->setMaximumSize(QSize(150, 150));
        iOS_app_qr->setPixmap(QPixmap(QString::fromUtf8(":/clem_remote_iOS_qr.png")));
        iOS_app_qr->setScaledContents(true);
        iOS_app_qr->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(iOS_app_qr);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox = new QGroupBox(NetworkRemoteSettingsPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        play_store = new QLabel(groupBox);
        play_store->setObjectName(QString::fromUtf8("play_store"));
        play_store->setCursor(QCursor(Qt::PointingHandCursor));
        play_store->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(play_store);

        horizontalSpacer_2 = new QSpacerItem(63, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        android_app_qr = new QLabel(groupBox);
        android_app_qr->setObjectName(QString::fromUtf8("android_app_qr"));
        android_app_qr->setMaximumSize(QSize(150, 150));
        android_app_qr->setPixmap(QPixmap(QString::fromUtf8(":/clementine_remote_qr.png")));
        android_app_qr->setScaledContents(true);
        android_app_qr->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(android_app_qr);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 98, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(NetworkRemoteSettingsPage);
        QObject::connect(use_auth_code, SIGNAL(toggled(bool)), auth_code, SLOT(setEnabled(bool)));
        QObject::connect(use_remote, SIGNAL(toggled(bool)), use_remote_container_2, SLOT(setEnabled(bool)));
        QObject::connect(allow_downloads, SIGNAL(toggled(bool)), download_settings_container, SLOT(setEnabled(bool)));
        QObject::connect(convert_lossless, SIGNAL(toggled(bool)), format_container, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(NetworkRemoteSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *NetworkRemoteSettingsPage)
    {
        NetworkRemoteSettingsPage->setWindowTitle(QCoreApplication::translate("NetworkRemoteSettingsPage", "Network Remote", nullptr));
        use_remote->setText(QCoreApplication::translate("NetworkRemoteSettingsPage", "Use a network remote control", nullptr));
        use_remote_container_2->setTitle(QCoreApplication::translate("NetworkRemoteSettingsPage", "Settings", nullptr));
        label_remote_port->setText(QCoreApplication::translate("NetworkRemoteSettingsPage", "Port", nullptr));
#if QT_CONFIG(tooltip)
        only_non_public_ip->setToolTip(QCoreApplication::translate("NetworkRemoteSettingsPage", "Only accept connections from clients within the ip ranges:\n"
"10.x.x.x\n"
"172.16.0.0 - 172.31.255.255\n"
"192.168.x.x", nullptr));
#endif // QT_CONFIG(tooltip)
        only_non_public_ip->setText(QCoreApplication::translate("NetworkRemoteSettingsPage", "Only allow connections from the local network", nullptr));
#if QT_CONFIG(tooltip)
        use_auth_code->setToolTip(QCoreApplication::translate("NetworkRemoteSettingsPage", "A client can connect only, if the correct code was entered.", nullptr));
#endif // QT_CONFIG(tooltip)
        use_auth_code->setText(QCoreApplication::translate("NetworkRemoteSettingsPage", "Require authentication code", nullptr));
        auth_code->setSuffix(QString());
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("NetworkRemoteSettingsPage", "Enter this IP in the App to connect to Clementine.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("NetworkRemoteSettingsPage", "Your IP address:", nullptr));
#if QT_CONFIG(tooltip)
        allow_downloads->setToolTip(QCoreApplication::translate("NetworkRemoteSettingsPage", "Allow a client to download music from this computer.", nullptr));
#endif // QT_CONFIG(tooltip)
        allow_downloads->setText(QCoreApplication::translate("NetworkRemoteSettingsPage", "Allow downloads", nullptr));
        download_settings_container->setTitle(QCoreApplication::translate("NetworkRemoteSettingsPage", "Download settings", nullptr));
#if QT_CONFIG(tooltip)
        convert_lossless->setToolTip(QCoreApplication::translate("NetworkRemoteSettingsPage", "Convert lossless audiofiles before sending them to the remote.", nullptr));
#endif // QT_CONFIG(tooltip)
        convert_lossless->setText(QCoreApplication::translate("NetworkRemoteSettingsPage", "Convert lossless files", nullptr));
        format_container->setTitle(QCoreApplication::translate("NetworkRemoteSettingsPage", "Audio format", nullptr));
        options->setText(QCoreApplication::translate("NetworkRemoteSettingsPage", "Options...", nullptr));
#if QT_CONFIG(tooltip)
        label_3->setToolTip(QCoreApplication::translate("NetworkRemoteSettingsPage", "Root folder that will be browsable from the network remote", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("NetworkRemoteSettingsPage", "Files root folder", nullptr));
#if QT_CONFIG(tooltip)
        label_4->setToolTip(QCoreApplication::translate("NetworkRemoteSettingsPage", "comma-separated list of the allowed extensions that will be visible from the network remote (ex: m3u,mp3,flac,dsf,dff,ogg,wav)", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("NetworkRemoteSettingsPage", "Music extensions remotely visible", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("NetworkRemoteSettingsPage", "Download the remote for Desktops, Android and iOS", nullptr));
        desktop_remote->setText(QCoreApplication::translate("NetworkRemoteSettingsPage", "desktop_remote", nullptr));
        label_5->setText(QCoreApplication::translate("NetworkRemoteSettingsPage", "or scan the QR code: ", nullptr));
        label_6->setText(QCoreApplication::translate("NetworkRemoteSettingsPage", "or scan the QR code: ", nullptr));
        groupBox->setTitle(QCoreApplication::translate("NetworkRemoteSettingsPage", "Download the original Android app", nullptr));
        label->setText(QCoreApplication::translate("NetworkRemoteSettingsPage", "or scan the QR code: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetworkRemoteSettingsPage: public Ui_NetworkRemoteSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKREMOTESETTINGSPAGE_H
