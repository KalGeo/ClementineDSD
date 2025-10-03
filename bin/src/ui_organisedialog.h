/********************************************************************************
** Form generated from reading UI file 'organisedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORGANISEDIALOG_H
#define UI_ORGANISEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/busyindicator.h"
#include "widgets/filenameformatwidget.h"
#include "widgets/freespacebar.h"

QT_BEGIN_NAMESPACE

class Ui_OrganiseDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *destination;
    QLabel *label_2;
    QComboBox *aftercopying;
    FreeSpaceBar *free_space;
    QCheckBox *eject_after;
    FileNameFormatWidget *naming_group;
    QGroupBox *preview_group;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *preview_stack;
    QWidget *preview_page;
    QVBoxLayout *verticalLayout_4;
    QListWidget *preview;
    QWidget *loading_page;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    BusyIndicator *loading_indicator;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *button_box;

    void setupUi(QDialog *OrganiseDialog)
    {
        if (OrganiseDialog->objectName().isEmpty())
            OrganiseDialog->setObjectName(QString::fromUtf8("OrganiseDialog"));
        OrganiseDialog->resize(588, 596);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        OrganiseDialog->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(OrganiseDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(OrganiseDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        destination = new QComboBox(OrganiseDialog);
        destination->setObjectName(QString::fromUtf8("destination"));

        formLayout->setWidget(0, QFormLayout::FieldRole, destination);

        label_2 = new QLabel(OrganiseDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        aftercopying = new QComboBox(OrganiseDialog);
        aftercopying->addItem(QString());
        aftercopying->addItem(QString());
        aftercopying->setObjectName(QString::fromUtf8("aftercopying"));

        formLayout->setWidget(1, QFormLayout::FieldRole, aftercopying);


        verticalLayout_2->addLayout(formLayout);

        free_space = new FreeSpaceBar(OrganiseDialog);
        free_space->setObjectName(QString::fromUtf8("free_space"));

        verticalLayout_2->addWidget(free_space);

        eject_after = new QCheckBox(OrganiseDialog);
        eject_after->setObjectName(QString::fromUtf8("eject_after"));

        verticalLayout_2->addWidget(eject_after);

        naming_group = new FileNameFormatWidget(OrganiseDialog);
        naming_group->setObjectName(QString::fromUtf8("naming_group"));

        verticalLayout_2->addWidget(naming_group);

        preview_group = new QGroupBox(OrganiseDialog);
        preview_group->setObjectName(QString::fromUtf8("preview_group"));
        verticalLayout_3 = new QVBoxLayout(preview_group);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        preview_stack = new QStackedWidget(preview_group);
        preview_stack->setObjectName(QString::fromUtf8("preview_stack"));
        preview_page = new QWidget();
        preview_page->setObjectName(QString::fromUtf8("preview_page"));
        verticalLayout_4 = new QVBoxLayout(preview_page);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        preview = new QListWidget(preview_page);
        preview->setObjectName(QString::fromUtf8("preview"));

        verticalLayout_4->addWidget(preview);

        preview_stack->addWidget(preview_page);
        loading_page = new QWidget();
        loading_page->setObjectName(QString::fromUtf8("loading_page"));
        horizontalLayout_2 = new QHBoxLayout(loading_page);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(264, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        loading_indicator = new BusyIndicator(loading_page);
        loading_indicator->setObjectName(QString::fromUtf8("loading_indicator"));

        horizontalLayout_2->addWidget(loading_indicator);

        horizontalSpacer_2 = new QSpacerItem(264, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        preview_stack->addWidget(loading_page);

        verticalLayout_3->addWidget(preview_stack);


        verticalLayout_2->addWidget(preview_group);

        button_box = new QDialogButtonBox(OrganiseDialog);
        button_box->setObjectName(QString::fromUtf8("button_box"));
        button_box->setOrientation(Qt::Horizontal);
        button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset);

        verticalLayout_2->addWidget(button_box);

        QWidget::setTabOrder(destination, aftercopying);
        QWidget::setTabOrder(aftercopying, eject_after);
        QWidget::setTabOrder(eject_after, button_box);

        retranslateUi(OrganiseDialog);
        QObject::connect(button_box, SIGNAL(accepted()), OrganiseDialog, SLOT(accept()));
        QObject::connect(button_box, SIGNAL(rejected()), OrganiseDialog, SLOT(reject()));

        preview_stack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(OrganiseDialog);
    } // setupUi

    void retranslateUi(QDialog *OrganiseDialog)
    {
        OrganiseDialog->setWindowTitle(QCoreApplication::translate("OrganiseDialog", "Organise Files", nullptr));
        label->setText(QCoreApplication::translate("OrganiseDialog", "Destination", nullptr));
        label_2->setText(QCoreApplication::translate("OrganiseDialog", "After copying...", nullptr));
        aftercopying->setItemText(0, QCoreApplication::translate("OrganiseDialog", "Keep the original files", nullptr));
        aftercopying->setItemText(1, QCoreApplication::translate("OrganiseDialog", "Delete the original files", nullptr));

        eject_after->setText(QCoreApplication::translate("OrganiseDialog", "Safely remove the device after copying", nullptr));
        preview_group->setTitle(QCoreApplication::translate("OrganiseDialog", "Preview", nullptr));
        loading_indicator->setProperty("text", QVariant(QCoreApplication::translate("OrganiseDialog", "Loading...", nullptr)));
    } // retranslateUi

};

namespace Ui {
    class OrganiseDialog: public Ui_OrganiseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORGANISEDIALOG_H
