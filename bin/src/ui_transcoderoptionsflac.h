/********************************************************************************
** Form generated from reading UI file 'transcoderoptionsflac.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODEROPTIONSFLAC_H
#define UI_TRANSCODEROPTIONSFLAC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TranscoderOptionsFlac
{
public:
    QFormLayout *formLayout;
    QLabel *quality_label;
    QHBoxLayout *horizontalLayout;
    QLabel *fast_label;
    QSlider *quality;
    QLabel *best_label;
    QLabel *info;

    void setupUi(QWidget *TranscoderOptionsFlac)
    {
        if (TranscoderOptionsFlac->objectName().isEmpty())
            TranscoderOptionsFlac->setObjectName(QString::fromUtf8("TranscoderOptionsFlac"));
        TranscoderOptionsFlac->resize(400, 102);
        formLayout = new QFormLayout(TranscoderOptionsFlac);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        quality_label = new QLabel(TranscoderOptionsFlac);
        quality_label->setObjectName(QString::fromUtf8("quality_label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, quality_label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        fast_label = new QLabel(TranscoderOptionsFlac);
        fast_label->setObjectName(QString::fromUtf8("fast_label"));

        horizontalLayout->addWidget(fast_label);

        quality = new QSlider(TranscoderOptionsFlac);
        quality->setObjectName(QString::fromUtf8("quality"));
        quality->setMaximum(9);
        quality->setValue(5);
        quality->setOrientation(Qt::Horizontal);
        quality->setTickPosition(QSlider::TicksBelow);

        horizontalLayout->addWidget(quality);

        best_label = new QLabel(TranscoderOptionsFlac);
        best_label->setObjectName(QString::fromUtf8("best_label"));

        horizontalLayout->addWidget(best_label);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        info = new QLabel(TranscoderOptionsFlac);
        info->setObjectName(QString::fromUtf8("info"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(info->sizePolicy().hasHeightForWidth());
        info->setSizePolicy(sizePolicy);
        info->setWordWrap(true);

        formLayout->setWidget(1, QFormLayout::SpanningRole, info);


        retranslateUi(TranscoderOptionsFlac);

        QMetaObject::connectSlotsByName(TranscoderOptionsFlac);
    } // setupUi

    void retranslateUi(QWidget *TranscoderOptionsFlac)
    {
        TranscoderOptionsFlac->setWindowTitle(QCoreApplication::translate("TranscoderOptionsFlac", "Form", nullptr));
        quality_label->setText(QCoreApplication::translate("TranscoderOptionsFlac", "Quality", "Sound quality"));
        fast_label->setText(QCoreApplication::translate("TranscoderOptionsFlac", "Fast", nullptr));
        best_label->setText(QCoreApplication::translate("TranscoderOptionsFlac", "Best", nullptr));
        info->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TranscoderOptionsFlac: public Ui_TranscoderOptionsFlac {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODEROPTIONSFLAC_H
