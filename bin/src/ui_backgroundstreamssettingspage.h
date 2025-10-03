/********************************************************************************
** Form generated from reading UI file 'backgroundstreamssettingspage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACKGROUNDSTREAMSSETTINGSPAGE_H
#define UI_BACKGROUNDSTREAMSSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BackgroundStreamsSettingsPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_13;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *BackgroundStreamsSettingsPage)
    {
        if (BackgroundStreamsSettingsPage->objectName().isEmpty())
            BackgroundStreamsSettingsPage->setObjectName(QString::fromUtf8("BackgroundStreamsSettingsPage"));
        BackgroundStreamsSettingsPage->resize(475, 300);
        verticalLayout = new QVBoxLayout(BackgroundStreamsSettingsPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_13 = new QLabel(BackgroundStreamsSettingsPage);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout->addWidget(label_13);

        verticalSpacer_4 = new QSpacerItem(20, 256, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        retranslateUi(BackgroundStreamsSettingsPage);

        QMetaObject::connectSlotsByName(BackgroundStreamsSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *BackgroundStreamsSettingsPage)
    {
        BackgroundStreamsSettingsPage->setWindowTitle(QCoreApplication::translate("BackgroundStreamsSettingsPage", "Background Streams", nullptr));
        label_13->setText(QCoreApplication::translate("BackgroundStreamsSettingsPage", "You can listen to background streams at the same time as other music.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BackgroundStreamsSettingsPage: public Ui_BackgroundStreamsSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKGROUNDSTREAMSSETTINGSPAGE_H
