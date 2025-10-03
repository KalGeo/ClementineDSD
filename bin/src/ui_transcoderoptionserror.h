/********************************************************************************
** Form generated from reading UI file 'transcoderoptionserror.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODEROPTIONSERROR_H
#define UI_TRANSCODEROPTIONSERROR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TranscoderOptionsError
{
public:
    QFormLayout *formLayout;
    QLabel *info;

    void setupUi(QWidget *TranscoderOptionsError)
    {
        if (TranscoderOptionsError->objectName().isEmpty())
            TranscoderOptionsError->setObjectName(QString::fromUtf8("TranscoderOptionsError"));
        TranscoderOptionsError->resize(400, 102);
        formLayout = new QFormLayout(TranscoderOptionsError);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        info = new QLabel(TranscoderOptionsError);
        info->setObjectName(QString::fromUtf8("info"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(info->sizePolicy().hasHeightForWidth());
        info->setSizePolicy(sizePolicy);
        info->setWordWrap(true);
        info->setOpenExternalLinks(true);

        formLayout->setWidget(0, QFormLayout::SpanningRole, info);


        retranslateUi(TranscoderOptionsError);

        QMetaObject::connectSlotsByName(TranscoderOptionsError);
    } // setupUi

    void retranslateUi(QWidget *TranscoderOptionsError)
    {
        TranscoderOptionsError->setWindowTitle(QCoreApplication::translate("TranscoderOptionsError", "Form", nullptr));
        info->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TranscoderOptionsError: public Ui_TranscoderOptionsError {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODEROPTIONSERROR_H
