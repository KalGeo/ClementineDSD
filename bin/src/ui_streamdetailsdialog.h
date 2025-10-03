/********************************************************************************
** Form generated from reading UI file 'streamdetailsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STREAMDETAILSDIALOG_H
#define UI_STREAMDETAILSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_StreamDetailsDialog
{
public:
    QFormLayout *formLayout;
    QLabel *url_label;
    QLineEdit *url;
    QLabel *format_label;
    QLabel *format;
    QLabel *channels_label;
    QLabel *channels;
    QLabel *bitrate_label;
    QLabel *bitrate;
    QLabel *sample_rate_label;
    QLabel *sample_rate;
    QLabel *depth_label;
    QLabel *depth;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *StreamDetailsDialog)
    {
        if (StreamDetailsDialog->objectName().isEmpty())
            StreamDetailsDialog->setObjectName(QString::fromUtf8("StreamDetailsDialog"));
        StreamDetailsDialog->resize(500, 210);
        StreamDetailsDialog->setMinimumSize(QSize(500, 210));
        formLayout = new QFormLayout(StreamDetailsDialog);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        url_label = new QLabel(StreamDetailsDialog);
        url_label->setObjectName(QString::fromUtf8("url_label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, url_label);

        url = new QLineEdit(StreamDetailsDialog);
        url->setObjectName(QString::fromUtf8("url"));
        url->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, url);

        format_label = new QLabel(StreamDetailsDialog);
        format_label->setObjectName(QString::fromUtf8("format_label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, format_label);

        format = new QLabel(StreamDetailsDialog);
        format->setObjectName(QString::fromUtf8("format"));

        formLayout->setWidget(1, QFormLayout::FieldRole, format);

        channels_label = new QLabel(StreamDetailsDialog);
        channels_label->setObjectName(QString::fromUtf8("channels_label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, channels_label);

        channels = new QLabel(StreamDetailsDialog);
        channels->setObjectName(QString::fromUtf8("channels"));

        formLayout->setWidget(2, QFormLayout::FieldRole, channels);

        bitrate_label = new QLabel(StreamDetailsDialog);
        bitrate_label->setObjectName(QString::fromUtf8("bitrate_label"));

        formLayout->setWidget(3, QFormLayout::LabelRole, bitrate_label);

        bitrate = new QLabel(StreamDetailsDialog);
        bitrate->setObjectName(QString::fromUtf8("bitrate"));

        formLayout->setWidget(3, QFormLayout::FieldRole, bitrate);

        sample_rate_label = new QLabel(StreamDetailsDialog);
        sample_rate_label->setObjectName(QString::fromUtf8("sample_rate_label"));

        formLayout->setWidget(4, QFormLayout::LabelRole, sample_rate_label);

        sample_rate = new QLabel(StreamDetailsDialog);
        sample_rate->setObjectName(QString::fromUtf8("sample_rate"));

        formLayout->setWidget(4, QFormLayout::FieldRole, sample_rate);

        depth_label = new QLabel(StreamDetailsDialog);
        depth_label->setObjectName(QString::fromUtf8("depth_label"));

        formLayout->setWidget(5, QFormLayout::LabelRole, depth_label);

        depth = new QLabel(StreamDetailsDialog);
        depth->setObjectName(QString::fromUtf8("depth"));

        formLayout->setWidget(5, QFormLayout::FieldRole, depth);

        buttonBox = new QDialogButtonBox(StreamDetailsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        formLayout->setWidget(7, QFormLayout::FieldRole, buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(6, QFormLayout::FieldRole, verticalSpacer);


        retranslateUi(StreamDetailsDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), StreamDetailsDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(StreamDetailsDialog);
    } // setupUi

    void retranslateUi(QDialog *StreamDetailsDialog)
    {
        StreamDetailsDialog->setWindowTitle(QCoreApplication::translate("StreamDetailsDialog", "Stream Details", nullptr));
        url_label->setText(QCoreApplication::translate("StreamDetailsDialog", "URL", nullptr));
        format_label->setText(QCoreApplication::translate("StreamDetailsDialog", "Format", nullptr));
        format->setText(QString());
        channels_label->setText(QCoreApplication::translate("StreamDetailsDialog", "Channels", nullptr));
        channels->setText(QString());
        bitrate_label->setText(QCoreApplication::translate("StreamDetailsDialog", "Bit rate", nullptr));
        bitrate->setText(QString());
        sample_rate_label->setText(QCoreApplication::translate("StreamDetailsDialog", "Sample rate", nullptr));
        sample_rate->setText(QString());
        depth_label->setText(QCoreApplication::translate("StreamDetailsDialog", "Depth", nullptr));
        depth->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class StreamDetailsDialog: public Ui_StreamDetailsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STREAMDETAILSDIALOG_H
