/********************************************************************************
** Form generated from reading UI file 'transcoderoptionsfdkaac.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODEROPTIONSFDKAAC_H
#define UI_TRANSCODEROPTIONSFDKAAC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TranscoderOptionsFDKAAC
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *auto_radio;
    QRadioButton *target_radio;
    QGroupBox *bitrate_group;
    QHBoxLayout *horizontalLayout;
    QSpinBox *bitrate_spinbox;
    QSlider *bitrate_slider;

    void setupUi(QWidget *TranscoderOptionsFDKAAC)
    {
        if (TranscoderOptionsFDKAAC->objectName().isEmpty())
            TranscoderOptionsFDKAAC->setObjectName(QString::fromUtf8("TranscoderOptionsFDKAAC"));
        TranscoderOptionsFDKAAC->resize(480, 344);
        verticalLayout = new QVBoxLayout(TranscoderOptionsFDKAAC);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(TranscoderOptionsFDKAAC);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        auto_radio = new QRadioButton(groupBox);
        auto_radio->setObjectName(QString::fromUtf8("auto_radio"));

        verticalLayout_2->addWidget(auto_radio);

        target_radio = new QRadioButton(groupBox);
        target_radio->setObjectName(QString::fromUtf8("target_radio"));

        verticalLayout_2->addWidget(target_radio);

        bitrate_group = new QGroupBox(groupBox);
        bitrate_group->setObjectName(QString::fromUtf8("bitrate_group"));
        horizontalLayout = new QHBoxLayout(bitrate_group);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        bitrate_spinbox = new QSpinBox(bitrate_group);
        bitrate_spinbox->setObjectName(QString::fromUtf8("bitrate_spinbox"));
        bitrate_spinbox->setMinimum(8);
        bitrate_spinbox->setMaximum(320);
        bitrate_spinbox->setSingleStep(8);
        bitrate_spinbox->setValue(128);

        horizontalLayout->addWidget(bitrate_spinbox);

        bitrate_slider = new QSlider(bitrate_group);
        bitrate_slider->setObjectName(QString::fromUtf8("bitrate_slider"));
        bitrate_slider->setMinimum(8);
        bitrate_slider->setMaximum(320);
        bitrate_slider->setValue(128);
        bitrate_slider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(bitrate_slider);


        verticalLayout_2->addWidget(bitrate_group);


        verticalLayout->addWidget(groupBox);


        retranslateUi(TranscoderOptionsFDKAAC);
        QObject::connect(bitrate_slider, SIGNAL(valueChanged(int)), bitrate_spinbox, SLOT(setValue(int)));
        QObject::connect(bitrate_spinbox, SIGNAL(valueChanged(int)), bitrate_slider, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(TranscoderOptionsFDKAAC);
    } // setupUi

    void retranslateUi(QWidget *TranscoderOptionsFDKAAC)
    {
        TranscoderOptionsFDKAAC->setWindowTitle(QCoreApplication::translate("TranscoderOptionsFDKAAC", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TranscoderOptionsFDKAAC", "Bitrate", nullptr));
        auto_radio->setText(QCoreApplication::translate("TranscoderOptionsFDKAAC", "Automatically determine based on sample rate.", nullptr));
        target_radio->setText(QCoreApplication::translate("TranscoderOptionsFDKAAC", "Set target rate", nullptr));
        bitrate_group->setTitle(QString());
        bitrate_spinbox->setSuffix(QCoreApplication::translate("TranscoderOptionsFDKAAC", " kbps", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TranscoderOptionsFDKAAC: public Ui_TranscoderOptionsFDKAAC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODEROPTIONSFDKAAC_H
