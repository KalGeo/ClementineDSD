/********************************************************************************
** Form generated from reading UI file 'transcodersettingspage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODERSETTINGSPAGE_H
#define UI_TRANSCODERSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TranscoderSettingsPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_18;
    QTabWidget *optionTabs;

    void setupUi(QWidget *TranscoderSettingsPage)
    {
        if (TranscoderSettingsPage->objectName().isEmpty())
            TranscoderSettingsPage->setObjectName(QString::fromUtf8("TranscoderSettingsPage"));
        TranscoderSettingsPage->resize(400, 300);
        verticalLayout = new QVBoxLayout(TranscoderSettingsPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_18 = new QLabel(TranscoderSettingsPage);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setWordWrap(true);

        verticalLayout->addWidget(label_18);

        optionTabs = new QTabWidget(TranscoderSettingsPage);
        optionTabs->setObjectName(QString::fromUtf8("optionTabs"));

        verticalLayout->addWidget(optionTabs);


        retranslateUi(TranscoderSettingsPage);

        optionTabs->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(TranscoderSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *TranscoderSettingsPage)
    {
        TranscoderSettingsPage->setWindowTitle(QCoreApplication::translate("TranscoderSettingsPage", "Transcoding", nullptr));
        label_18->setText(QCoreApplication::translate("TranscoderSettingsPage", "These settings are used in the \"Transcode Music\" dialog, and when converting music before copying it to a device.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TranscoderSettingsPage: public Ui_TranscoderSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODERSETTINGSPAGE_H
