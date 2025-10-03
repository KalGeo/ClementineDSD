/********************************************************************************
** Form generated from reading UI file 'songmetadatasettingspage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SONGMETADATASETTINGSPAGE_H
#define UI_SONGMETADATASETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SongMetadataSettingsPage
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_max_tagclients;
    QHBoxLayout *horizontalLayout_8;
    QLabel *numprocs_tagclients_label;
    QLabel *max_numprocs_tagclients_value_label;
    QSlider *max_numprocs_tagclients;
    QCheckBox *guess_metadata;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SongMetadataSettingsPage)
    {
        if (SongMetadataSettingsPage->objectName().isEmpty())
            SongMetadataSettingsPage->setObjectName(QString::fromUtf8("SongMetadataSettingsPage"));
        SongMetadataSettingsPage->resize(602, 1395);
        verticalLayout = new QVBoxLayout(SongMetadataSettingsPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_max_tagclients = new QGroupBox(SongMetadataSettingsPage);
        groupBox_max_tagclients->setObjectName(QString::fromUtf8("groupBox_max_tagclients"));
        horizontalLayout_8 = new QHBoxLayout(groupBox_max_tagclients);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        numprocs_tagclients_label = new QLabel(groupBox_max_tagclients);
        numprocs_tagclients_label->setObjectName(QString::fromUtf8("numprocs_tagclients_label"));

        horizontalLayout_8->addWidget(numprocs_tagclients_label);

        max_numprocs_tagclients_value_label = new QLabel(groupBox_max_tagclients);
        max_numprocs_tagclients_value_label->setObjectName(QString::fromUtf8("max_numprocs_tagclients_value_label"));

        horizontalLayout_8->addWidget(max_numprocs_tagclients_value_label);

        max_numprocs_tagclients = new QSlider(groupBox_max_tagclients);
        max_numprocs_tagclients->setObjectName(QString::fromUtf8("max_numprocs_tagclients"));
        max_numprocs_tagclients->setMinimum(1);
        max_numprocs_tagclients->setMaximum(32);
        max_numprocs_tagclients->setValue(4);
        max_numprocs_tagclients->setOrientation(Qt::Horizontal);
        max_numprocs_tagclients->setTickInterval(1);

        horizontalLayout_8->addWidget(max_numprocs_tagclients);


        verticalLayout->addWidget(groupBox_max_tagclients);

        guess_metadata = new QCheckBox(SongMetadataSettingsPage);
        guess_metadata->setObjectName(QString::fromUtf8("guess_metadata"));

        verticalLayout->addWidget(guess_metadata);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(SongMetadataSettingsPage);

        QMetaObject::connectSlotsByName(SongMetadataSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *SongMetadataSettingsPage)
    {
        SongMetadataSettingsPage->setWindowTitle(QCoreApplication::translate("SongMetadataSettingsPage", "Song Metadata", nullptr));
        groupBox_max_tagclients->setTitle(QCoreApplication::translate("SongMetadataSettingsPage", "Maximum number of child processes for tag handling (requires restart)", nullptr));
        numprocs_tagclients_label->setText(QCoreApplication::translate("SongMetadataSettingsPage", "Number of processes:", nullptr));
        max_numprocs_tagclients_value_label->setText(QString());
#if QT_CONFIG(tooltip)
        guess_metadata->setToolTip(QCoreApplication::translate("SongMetadataSettingsPage", "Try to extract title, artist, and album from file path.", nullptr));
#endif // QT_CONFIG(tooltip)
        guess_metadata->setText(QCoreApplication::translate("SongMetadataSettingsPage", "Try to guess missing metadata", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SongMetadataSettingsPage: public Ui_SongMetadataSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SONGMETADATASETTINGSPAGE_H
