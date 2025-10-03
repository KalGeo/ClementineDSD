/********************************************************************************
** Form generated from reading UI file 'transcoderoptionsaac.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODEROPTIONSAAC_H
#define UI_TRANSCODEROPTIONSAAC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TranscoderOptionsAAC
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSlider *bitrate_slider;
    QSpinBox *bitrate_spinbox;
    QLabel *label_2;
    QComboBox *profile;
    QCheckBox *tns;
    QCheckBox *midside;
    QLabel *label_3;
    QComboBox *shortctl;

    void setupUi(QWidget *TranscoderOptionsAAC)
    {
        if (TranscoderOptionsAAC->objectName().isEmpty())
            TranscoderOptionsAAC->setObjectName(QString::fromUtf8("TranscoderOptionsAAC"));
        TranscoderOptionsAAC->resize(480, 344);
        formLayout = new QFormLayout(TranscoderOptionsAAC);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(TranscoderOptionsAAC);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        bitrate_slider = new QSlider(TranscoderOptionsAAC);
        bitrate_slider->setObjectName(QString::fromUtf8("bitrate_slider"));
        bitrate_slider->setMinimum(8);
        bitrate_slider->setMaximum(320);
        bitrate_slider->setValue(128);
        bitrate_slider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(bitrate_slider);

        bitrate_spinbox = new QSpinBox(TranscoderOptionsAAC);
        bitrate_spinbox->setObjectName(QString::fromUtf8("bitrate_spinbox"));
        bitrate_spinbox->setMinimum(8);
        bitrate_spinbox->setMaximum(320);
        bitrate_spinbox->setSingleStep(8);
        bitrate_spinbox->setValue(128);

        horizontalLayout->addWidget(bitrate_spinbox);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        label_2 = new QLabel(TranscoderOptionsAAC);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        profile = new QComboBox(TranscoderOptionsAAC);
        profile->addItem(QString());
        profile->addItem(QString());
        profile->addItem(QString());
        profile->addItem(QString());
        profile->setObjectName(QString::fromUtf8("profile"));

        formLayout->setWidget(1, QFormLayout::FieldRole, profile);

        tns = new QCheckBox(TranscoderOptionsAAC);
        tns->setObjectName(QString::fromUtf8("tns"));

        formLayout->setWidget(4, QFormLayout::SpanningRole, tns);

        midside = new QCheckBox(TranscoderOptionsAAC);
        midside->setObjectName(QString::fromUtf8("midside"));
        midside->setChecked(true);

        formLayout->setWidget(5, QFormLayout::SpanningRole, midside);

        label_3 = new QLabel(TranscoderOptionsAAC);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        shortctl = new QComboBox(TranscoderOptionsAAC);
        shortctl->addItem(QString());
        shortctl->addItem(QString());
        shortctl->addItem(QString());
        shortctl->setObjectName(QString::fromUtf8("shortctl"));

        formLayout->setWidget(2, QFormLayout::FieldRole, shortctl);

        QWidget::setTabOrder(bitrate_slider, bitrate_spinbox);
        QWidget::setTabOrder(bitrate_spinbox, profile);
        QWidget::setTabOrder(profile, shortctl);
        QWidget::setTabOrder(shortctl, tns);
        QWidget::setTabOrder(tns, midside);

        retranslateUi(TranscoderOptionsAAC);
        QObject::connect(bitrate_slider, SIGNAL(valueChanged(int)), bitrate_spinbox, SLOT(setValue(int)));
        QObject::connect(bitrate_spinbox, SIGNAL(valueChanged(int)), bitrate_slider, SLOT(setValue(int)));

        profile->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(TranscoderOptionsAAC);
    } // setupUi

    void retranslateUi(QWidget *TranscoderOptionsAAC)
    {
        TranscoderOptionsAAC->setWindowTitle(QCoreApplication::translate("TranscoderOptionsAAC", "Form", nullptr));
        label->setText(QCoreApplication::translate("TranscoderOptionsAAC", "Bitrate", nullptr));
        bitrate_spinbox->setSuffix(QCoreApplication::translate("TranscoderOptionsAAC", " kbps", nullptr));
        label_2->setText(QCoreApplication::translate("TranscoderOptionsAAC", "Profile", nullptr));
        profile->setItemText(0, QCoreApplication::translate("TranscoderOptionsAAC", "Main profile (MAIN)", nullptr));
        profile->setItemText(1, QCoreApplication::translate("TranscoderOptionsAAC", "Low complexity profile (LC)", nullptr));
        profile->setItemText(2, QCoreApplication::translate("TranscoderOptionsAAC", "Scalable sampling rate profile (SSR)", nullptr));
        profile->setItemText(3, QCoreApplication::translate("TranscoderOptionsAAC", "Long term prediction profile (LTP)", nullptr));

        tns->setText(QCoreApplication::translate("TranscoderOptionsAAC", "Use temporal noise shaping", nullptr));
        midside->setText(QCoreApplication::translate("TranscoderOptionsAAC", "Allow mid/side encoding", nullptr));
        label_3->setText(QCoreApplication::translate("TranscoderOptionsAAC", "Block type", nullptr));
        shortctl->setItemText(0, QCoreApplication::translate("TranscoderOptionsAAC", "Normal block type", nullptr));
        shortctl->setItemText(1, QCoreApplication::translate("TranscoderOptionsAAC", "No short blocks", nullptr));
        shortctl->setItemText(2, QCoreApplication::translate("TranscoderOptionsAAC", "No long blocks", nullptr));

    } // retranslateUi

};

namespace Ui {
    class TranscoderOptionsAAC: public Ui_TranscoderOptionsAAC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODEROPTIONSAAC_H
