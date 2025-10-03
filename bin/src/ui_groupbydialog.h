/********************************************************************************
** Form generated from reading UI file 'groupbydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPBYDIALOG_H
#define UI_GROUPBYDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GroupByDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *first;
    QLabel *label_2;
    QComboBox *second;
    QLabel *label_3;
    QComboBox *third;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *button_box;

    void setupUi(QDialog *GroupByDialog)
    {
        if (GroupByDialog->objectName().isEmpty())
            GroupByDialog->setObjectName(QString::fromUtf8("GroupByDialog"));
        GroupByDialog->resize(354, 236);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        GroupByDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(GroupByDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(GroupByDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);

        verticalLayout->addWidget(label_4);

        groupBox = new QGroupBox(GroupByDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        first = new QComboBox(groupBox);
        first->addItem(QString());
        first->addItem(QString());
        first->addItem(QString());
        first->addItem(QString());
        first->addItem(QString());
        first->addItem(QString());
        first->addItem(QString());
        first->addItem(QString());
        first->addItem(QString());
        first->addItem(QString());
        first->addItem(QString());
        first->addItem(QString());
        first->addItem(QString());
        first->addItem(QString());
        first->addItem(QString());
        first->setObjectName(QString::fromUtf8("first"));

        formLayout->setWidget(0, QFormLayout::FieldRole, first);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        second = new QComboBox(groupBox);
        second->addItem(QString());
        second->addItem(QString());
        second->addItem(QString());
        second->addItem(QString());
        second->addItem(QString());
        second->addItem(QString());
        second->addItem(QString());
        second->addItem(QString());
        second->addItem(QString());
        second->addItem(QString());
        second->addItem(QString());
        second->addItem(QString());
        second->addItem(QString());
        second->addItem(QString());
        second->addItem(QString());
        second->setObjectName(QString::fromUtf8("second"));

        formLayout->setWidget(1, QFormLayout::FieldRole, second);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        third = new QComboBox(groupBox);
        third->addItem(QString());
        third->addItem(QString());
        third->addItem(QString());
        third->addItem(QString());
        third->addItem(QString());
        third->addItem(QString());
        third->addItem(QString());
        third->addItem(QString());
        third->addItem(QString());
        third->addItem(QString());
        third->addItem(QString());
        third->addItem(QString());
        third->addItem(QString());
        third->addItem(QString());
        third->addItem(QString());
        third->setObjectName(QString::fromUtf8("third"));

        formLayout->setWidget(2, QFormLayout::FieldRole, third);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        button_box = new QDialogButtonBox(GroupByDialog);
        button_box->setObjectName(QString::fromUtf8("button_box"));
        button_box->setOrientation(Qt::Horizontal);
        button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset);

        verticalLayout->addWidget(button_box);

        QWidget::setTabOrder(first, second);
        QWidget::setTabOrder(second, third);
        QWidget::setTabOrder(third, button_box);

        retranslateUi(GroupByDialog);
        QObject::connect(button_box, SIGNAL(accepted()), GroupByDialog, SLOT(accept()));
        QObject::connect(button_box, SIGNAL(rejected()), GroupByDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(GroupByDialog);
    } // setupUi

    void retranslateUi(QDialog *GroupByDialog)
    {
        GroupByDialog->setWindowTitle(QCoreApplication::translate("GroupByDialog", "Library advanced grouping", nullptr));
        label_4->setText(QCoreApplication::translate("GroupByDialog", "You can change the way the songs in the library are organised.", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GroupByDialog", "Group Library by...", nullptr));
        label->setText(QCoreApplication::translate("GroupByDialog", "First level", nullptr));
        first->setItemText(0, QCoreApplication::translate("GroupByDialog", "None", nullptr));
        first->setItemText(1, QCoreApplication::translate("GroupByDialog", "Album", nullptr));
        first->setItemText(2, QCoreApplication::translate("GroupByDialog", "Artist", nullptr));
        first->setItemText(3, QCoreApplication::translate("GroupByDialog", "Album artist", nullptr));
        first->setItemText(4, QCoreApplication::translate("GroupByDialog", "Composer", nullptr));
        first->setItemText(5, QCoreApplication::translate("GroupByDialog", "File type", nullptr));
        first->setItemText(6, QCoreApplication::translate("GroupByDialog", "Genre", nullptr));
        first->setItemText(7, QCoreApplication::translate("GroupByDialog", "Year", nullptr));
        first->setItemText(8, QCoreApplication::translate("GroupByDialog", "Original year", nullptr));
        first->setItemText(9, QCoreApplication::translate("GroupByDialog", "Year - Album", nullptr));
        first->setItemText(10, QCoreApplication::translate("GroupByDialog", "Original year - Album", nullptr));
        first->setItemText(11, QCoreApplication::translate("GroupByDialog", "Bitrate", nullptr));
        first->setItemText(12, QCoreApplication::translate("GroupByDialog", "Disc", nullptr));
        first->setItemText(13, QCoreApplication::translate("GroupByDialog", "Performer", nullptr));
        first->setItemText(14, QCoreApplication::translate("GroupByDialog", "Grouping", nullptr));

        label_2->setText(QCoreApplication::translate("GroupByDialog", "Second level", nullptr));
        second->setItemText(0, QCoreApplication::translate("GroupByDialog", "None", nullptr));
        second->setItemText(1, QCoreApplication::translate("GroupByDialog", "Album", nullptr));
        second->setItemText(2, QCoreApplication::translate("GroupByDialog", "Artist", nullptr));
        second->setItemText(3, QCoreApplication::translate("GroupByDialog", "Album artist", nullptr));
        second->setItemText(4, QCoreApplication::translate("GroupByDialog", "Composer", nullptr));
        second->setItemText(5, QCoreApplication::translate("GroupByDialog", "File type", nullptr));
        second->setItemText(6, QCoreApplication::translate("GroupByDialog", "Genre", nullptr));
        second->setItemText(7, QCoreApplication::translate("GroupByDialog", "Year", nullptr));
        second->setItemText(8, QCoreApplication::translate("GroupByDialog", "Original year", nullptr));
        second->setItemText(9, QCoreApplication::translate("GroupByDialog", "Year - Album", nullptr));
        second->setItemText(10, QCoreApplication::translate("GroupByDialog", "Original year - Album", nullptr));
        second->setItemText(11, QCoreApplication::translate("GroupByDialog", "Bitrate", nullptr));
        second->setItemText(12, QCoreApplication::translate("GroupByDialog", "Disc", nullptr));
        second->setItemText(13, QCoreApplication::translate("GroupByDialog", "Performer", nullptr));
        second->setItemText(14, QCoreApplication::translate("GroupByDialog", "Grouping", nullptr));

        label_3->setText(QCoreApplication::translate("GroupByDialog", "Third level", nullptr));
        third->setItemText(0, QCoreApplication::translate("GroupByDialog", "None", nullptr));
        third->setItemText(1, QCoreApplication::translate("GroupByDialog", "Album", nullptr));
        third->setItemText(2, QCoreApplication::translate("GroupByDialog", "Artist", nullptr));
        third->setItemText(3, QCoreApplication::translate("GroupByDialog", "Album artist", nullptr));
        third->setItemText(4, QCoreApplication::translate("GroupByDialog", "Composer", nullptr));
        third->setItemText(5, QCoreApplication::translate("GroupByDialog", "File type", nullptr));
        third->setItemText(6, QCoreApplication::translate("GroupByDialog", "Genre", nullptr));
        third->setItemText(7, QCoreApplication::translate("GroupByDialog", "Year", nullptr));
        third->setItemText(8, QCoreApplication::translate("GroupByDialog", "Original year", nullptr));
        third->setItemText(9, QCoreApplication::translate("GroupByDialog", "Year - Album", nullptr));
        third->setItemText(10, QCoreApplication::translate("GroupByDialog", "Original year - Album", nullptr));
        third->setItemText(11, QCoreApplication::translate("GroupByDialog", "Bitrate", nullptr));
        third->setItemText(12, QCoreApplication::translate("GroupByDialog", "Disc", nullptr));
        third->setItemText(13, QCoreApplication::translate("GroupByDialog", "Performer", nullptr));
        third->setItemText(14, QCoreApplication::translate("GroupByDialog", "Grouping", nullptr));

    } // retranslateUi

};

namespace Ui {
    class GroupByDialog: public Ui_GroupByDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPBYDIALOG_H
