/********************************************************************************
** Form generated from reading UI file 'querysortpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYSORTPAGE_H
#define UI_QUERYSORTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "smartplaylists/searchpreview.h"

QT_BEGIN_NAMESPACE

class Ui_SmartPlaylistQuerySortPage
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QRadioButton *random;
    QRadioButton *field;
    QHBoxLayout *horizontalLayout;
    QComboBox *field_value;
    QComboBox *order;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QRadioButton *limit_none;
    QRadioButton *limit_limit;
    QSpinBox *limit_value;
    QFrame *line;
    smart_playlists::SearchPreview *preview;

    void setupUi(QWidget *SmartPlaylistQuerySortPage)
    {
        if (SmartPlaylistQuerySortPage->objectName().isEmpty())
            SmartPlaylistQuerySortPage->setObjectName(QString::fromUtf8("SmartPlaylistQuerySortPage"));
        SmartPlaylistQuerySortPage->resize(723, 335);
        verticalLayout = new QVBoxLayout(SmartPlaylistQuerySortPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(SmartPlaylistQuerySortPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        random = new QRadioButton(groupBox);
        random->setObjectName(QString::fromUtf8("random"));
        random->setChecked(true);

        formLayout->setWidget(0, QFormLayout::SpanningRole, random);

        field = new QRadioButton(groupBox);
        field->setObjectName(QString::fromUtf8("field"));

        formLayout->setWidget(1, QFormLayout::LabelRole, field);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        field_value = new QComboBox(groupBox);
        field_value->setObjectName(QString::fromUtf8("field_value"));

        horizontalLayout->addWidget(field_value);

        order = new QComboBox(groupBox);
        order->setObjectName(QString::fromUtf8("order"));
        order->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(order);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(SmartPlaylistQuerySortPage);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        limit_none = new QRadioButton(groupBox_2);
        limit_none->setObjectName(QString::fromUtf8("limit_none"));
        limit_none->setChecked(true);

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, limit_none);

        limit_limit = new QRadioButton(groupBox_2);
        limit_limit->setObjectName(QString::fromUtf8("limit_limit"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, limit_limit);

        limit_value = new QSpinBox(groupBox_2);
        limit_value->setObjectName(QString::fromUtf8("limit_value"));
        limit_value->setMinimumSize(QSize(150, 0));
        limit_value->setMaximum(1000);
        limit_value->setValue(15);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, limit_value);


        verticalLayout->addWidget(groupBox_2);

        line = new QFrame(SmartPlaylistQuerySortPage);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        preview = new smart_playlists::SearchPreview(SmartPlaylistQuerySortPage);
        preview->setObjectName(QString::fromUtf8("preview"));

        verticalLayout->addWidget(preview);


        retranslateUi(SmartPlaylistQuerySortPage);

        QMetaObject::connectSlotsByName(SmartPlaylistQuerySortPage);
    } // setupUi

    void retranslateUi(QWidget *SmartPlaylistQuerySortPage)
    {
        SmartPlaylistQuerySortPage->setWindowTitle(QCoreApplication::translate("SmartPlaylistQuerySortPage", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SmartPlaylistQuerySortPage", "Sorting", nullptr));
        random->setText(QCoreApplication::translate("SmartPlaylistQuerySortPage", "Put songs in a random order", nullptr));
        field->setText(QCoreApplication::translate("SmartPlaylistQuerySortPage", "Sort songs by", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SmartPlaylistQuerySortPage", "Limits", nullptr));
        limit_none->setText(QCoreApplication::translate("SmartPlaylistQuerySortPage", "Show all the songs", nullptr));
        limit_limit->setText(QCoreApplication::translate("SmartPlaylistQuerySortPage", "Only show the first", nullptr));
        limit_value->setSuffix(QCoreApplication::translate("SmartPlaylistQuerySortPage", " songs", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SmartPlaylistQuerySortPage: public Ui_SmartPlaylistQuerySortPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYSORTPAGE_H
