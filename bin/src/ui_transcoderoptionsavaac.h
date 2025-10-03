/********************************************************************************
** Form generated from reading UI file 'transcoderoptionsavaac.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODEROPTIONSAVAAC_H
#define UI_TRANSCODEROPTIONSAVAAC_H

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

class Ui_TranscoderOptionsAvAAC
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *encoder_group;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *encoder_fast;
    QRadioButton *encoder_twoloop;
    QRadioButton *encoder_anmr;
    QGroupBox *bitrateGroup;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *bitrate_default;
    QRadioButton *bitrate_target;
    QGroupBox *bitrate_group;
    QHBoxLayout *horizontalLayout;
    QSpinBox *bitrate_spinbox;
    QSlider *bitrate_slider;

    void setupUi(QWidget *TranscoderOptionsAvAAC)
    {
        if (TranscoderOptionsAvAAC->objectName().isEmpty())
            TranscoderOptionsAvAAC->setObjectName(QString::fromUtf8("TranscoderOptionsAvAAC"));
        TranscoderOptionsAvAAC->resize(480, 344);
        verticalLayout = new QVBoxLayout(TranscoderOptionsAvAAC);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        encoder_group = new QGroupBox(TranscoderOptionsAvAAC);
        encoder_group->setObjectName(QString::fromUtf8("encoder_group"));
        verticalLayout_3 = new QVBoxLayout(encoder_group);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        encoder_fast = new QRadioButton(encoder_group);
        encoder_fast->setObjectName(QString::fromUtf8("encoder_fast"));

        verticalLayout_3->addWidget(encoder_fast);

        encoder_twoloop = new QRadioButton(encoder_group);
        encoder_twoloop->setObjectName(QString::fromUtf8("encoder_twoloop"));

        verticalLayout_3->addWidget(encoder_twoloop);

        encoder_anmr = new QRadioButton(encoder_group);
        encoder_anmr->setObjectName(QString::fromUtf8("encoder_anmr"));

        verticalLayout_3->addWidget(encoder_anmr);


        verticalLayout->addWidget(encoder_group);

        bitrateGroup = new QGroupBox(TranscoderOptionsAvAAC);
        bitrateGroup->setObjectName(QString::fromUtf8("bitrateGroup"));
        verticalLayout_2 = new QVBoxLayout(bitrateGroup);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        bitrate_default = new QRadioButton(bitrateGroup);
        bitrate_default->setObjectName(QString::fromUtf8("bitrate_default"));

        verticalLayout_2->addWidget(bitrate_default);

        bitrate_target = new QRadioButton(bitrateGroup);
        bitrate_target->setObjectName(QString::fromUtf8("bitrate_target"));

        verticalLayout_2->addWidget(bitrate_target);

        bitrate_group = new QGroupBox(bitrateGroup);
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


        verticalLayout->addWidget(bitrateGroup);


        retranslateUi(TranscoderOptionsAvAAC);
        QObject::connect(bitrate_slider, SIGNAL(valueChanged(int)), bitrate_spinbox, SLOT(setValue(int)));
        QObject::connect(bitrate_spinbox, SIGNAL(valueChanged(int)), bitrate_slider, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(TranscoderOptionsAvAAC);
    } // setupUi

    void retranslateUi(QWidget *TranscoderOptionsAvAAC)
    {
        TranscoderOptionsAvAAC->setWindowTitle(QCoreApplication::translate("TranscoderOptionsAvAAC", "Form", nullptr));
        encoder_group->setTitle(QCoreApplication::translate("TranscoderOptionsAvAAC", "Encoder", nullptr));
        encoder_fast->setText(QCoreApplication::translate("TranscoderOptionsAvAAC", "Fast search", nullptr));
        encoder_twoloop->setText(QCoreApplication::translate("TranscoderOptionsAvAAC", "Two loop searching method", nullptr));
        encoder_anmr->setText(QCoreApplication::translate("TranscoderOptionsAvAAC", " ANMR method (experimental)", nullptr));
        bitrateGroup->setTitle(QCoreApplication::translate("TranscoderOptionsAvAAC", "Bitrate", nullptr));
        bitrate_default->setText(QCoreApplication::translate("TranscoderOptionsAvAAC", "Use default bitrate", nullptr));
        bitrate_target->setText(QCoreApplication::translate("TranscoderOptionsAvAAC", "Set target rate", nullptr));
        bitrate_group->setTitle(QString());
        bitrate_spinbox->setSuffix(QCoreApplication::translate("TranscoderOptionsAvAAC", " kbps", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TranscoderOptionsAvAAC: public Ui_TranscoderOptionsAvAAC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODEROPTIONSAVAAC_H
