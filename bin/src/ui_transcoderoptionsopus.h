/********************************************************************************
** Form generated from reading UI file 'transcoderoptionsopus.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODEROPTIONSOPUS_H
#define UI_TRANSCODEROPTIONSOPUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TranscoderOptionsOpus
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSlider *bitrate_slider;
    QSpinBox *bitrate_spinbox;

    void setupUi(QWidget *TranscoderOptionsOpus)
    {
        if (TranscoderOptionsOpus->objectName().isEmpty())
            TranscoderOptionsOpus->setObjectName(QString::fromUtf8("TranscoderOptionsOpus"));
        TranscoderOptionsOpus->resize(400, 300);
        formLayout = new QFormLayout(TranscoderOptionsOpus);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(TranscoderOptionsOpus);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        bitrate_slider = new QSlider(TranscoderOptionsOpus);
        bitrate_slider->setObjectName(QString::fromUtf8("bitrate_slider"));
        bitrate_slider->setMinimum(6);
        bitrate_slider->setMaximum(510);
        bitrate_slider->setValue(128);
        bitrate_slider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(bitrate_slider);

        bitrate_spinbox = new QSpinBox(TranscoderOptionsOpus);
        bitrate_spinbox->setObjectName(QString::fromUtf8("bitrate_spinbox"));
        bitrate_spinbox->setMaximum(320);
        bitrate_spinbox->setValue(128);

        horizontalLayout->addWidget(bitrate_spinbox);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);


        retranslateUi(TranscoderOptionsOpus);
        QObject::connect(bitrate_slider, SIGNAL(valueChanged(int)), bitrate_spinbox, SLOT(setValue(int)));
        QObject::connect(bitrate_spinbox, SIGNAL(valueChanged(int)), bitrate_slider, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(TranscoderOptionsOpus);
    } // setupUi

    void retranslateUi(QWidget *TranscoderOptionsOpus)
    {
        TranscoderOptionsOpus->setWindowTitle(QCoreApplication::translate("TranscoderOptionsOpus", "Form", nullptr));
        label->setText(QCoreApplication::translate("TranscoderOptionsOpus", "Bitrate", nullptr));
        bitrate_spinbox->setSuffix(QCoreApplication::translate("TranscoderOptionsOpus", " kbps", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TranscoderOptionsOpus: public Ui_TranscoderOptionsOpus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODEROPTIONSOPUS_H
