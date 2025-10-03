/********************************************************************************
** Form generated from reading UI file 'transcoderoptionsvoaac.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODEROPTIONSVOAAC_H
#define UI_TRANSCODEROPTIONSVOAAC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TranscoderOptionsVOAAC
{
public:
    QFormLayout *formLayout;
    QLabel *bitrate_label;
    QHBoxLayout *bitrate_layout;
    QSlider *bitrate_slider;
    QSpinBox *bitrate_spinbox;

    void setupUi(QWidget *TranscoderOptionsVOAAC)
    {
        if (TranscoderOptionsVOAAC->objectName().isEmpty())
            TranscoderOptionsVOAAC->setObjectName(QString::fromUtf8("TranscoderOptionsVOAAC"));
        TranscoderOptionsVOAAC->resize(480, 344);
        formLayout = new QFormLayout(TranscoderOptionsVOAAC);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        bitrate_label = new QLabel(TranscoderOptionsVOAAC);
        bitrate_label->setObjectName(QString::fromUtf8("bitrate_label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, bitrate_label);

        bitrate_layout = new QHBoxLayout();
        bitrate_layout->setObjectName(QString::fromUtf8("bitrate_layout"));
        bitrate_slider = new QSlider(TranscoderOptionsVOAAC);
        bitrate_slider->setObjectName(QString::fromUtf8("bitrate_slider"));
        bitrate_slider->setMinimum(8);
        bitrate_slider->setMaximum(320);
        bitrate_slider->setValue(128);
        bitrate_slider->setOrientation(Qt::Horizontal);

        bitrate_layout->addWidget(bitrate_slider);

        bitrate_spinbox = new QSpinBox(TranscoderOptionsVOAAC);
        bitrate_spinbox->setObjectName(QString::fromUtf8("bitrate_spinbox"));
        bitrate_spinbox->setMinimum(8);
        bitrate_spinbox->setMaximum(320);
        bitrate_spinbox->setSingleStep(8);
        bitrate_spinbox->setValue(128);

        bitrate_layout->addWidget(bitrate_spinbox);


        formLayout->setLayout(0, QFormLayout::FieldRole, bitrate_layout);

        QWidget::setTabOrder(bitrate_slider, bitrate_spinbox);

        retranslateUi(TranscoderOptionsVOAAC);
        QObject::connect(bitrate_slider, SIGNAL(valueChanged(int)), bitrate_spinbox, SLOT(setValue(int)));
        QObject::connect(bitrate_spinbox, SIGNAL(valueChanged(int)), bitrate_slider, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(TranscoderOptionsVOAAC);
    } // setupUi

    void retranslateUi(QWidget *TranscoderOptionsVOAAC)
    {
        TranscoderOptionsVOAAC->setWindowTitle(QCoreApplication::translate("TranscoderOptionsVOAAC", "Form", nullptr));
        bitrate_label->setText(QCoreApplication::translate("TranscoderOptionsVOAAC", "Bitrate", nullptr));
        bitrate_spinbox->setSuffix(QCoreApplication::translate("TranscoderOptionsVOAAC", " kbps", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TranscoderOptionsVOAAC: public Ui_TranscoderOptionsVOAAC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODEROPTIONSVOAAC_H
