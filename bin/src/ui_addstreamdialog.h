/********************************************************************************
** Form generated from reading UI file 'addstreamdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTREAMDIALOG_H
#define UI_ADDSTREAMDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddStreamDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *url;
    QCheckBox *save;
    QWidget *details_container;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *name;
    QLabel *label_4;
    QLineEdit *url_logo;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *button_box;

    void setupUi(QDialog *AddStreamDialog)
    {
        if (AddStreamDialog->objectName().isEmpty())
            AddStreamDialog->setObjectName(QString::fromUtf8("AddStreamDialog"));
        AddStreamDialog->resize(400, 220);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddStreamDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(AddStreamDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(AddStreamDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        url = new QLineEdit(AddStreamDialog);
        url->setObjectName(QString::fromUtf8("url"));

        verticalLayout->addWidget(url);

        save = new QCheckBox(AddStreamDialog);
        save->setObjectName(QString::fromUtf8("save"));
        save->setChecked(true);

        verticalLayout->addWidget(save);

        details_container = new QWidget(AddStreamDialog);
        details_container->setObjectName(QString::fromUtf8("details_container"));
        gridLayout = new QGridLayout(details_container);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(details_container);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        name = new QLineEdit(details_container);
        name->setObjectName(QString::fromUtf8("name"));

        gridLayout->addWidget(name, 0, 1, 1, 1);

        label_4 = new QLabel(details_container);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        url_logo = new QLineEdit(details_container);
        url_logo->setObjectName(QString::fromUtf8("url_logo"));

        gridLayout->addWidget(url_logo, 1, 1, 1, 1);


        verticalLayout->addWidget(details_container);

        verticalSpacer = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        button_box = new QDialogButtonBox(AddStreamDialog);
        button_box->setObjectName(QString::fromUtf8("button_box"));
        button_box->setOrientation(Qt::Horizontal);
        button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(button_box);

        QWidget::setTabOrder(url, save);
        QWidget::setTabOrder(save, name);
        QWidget::setTabOrder(name, button_box);

        retranslateUi(AddStreamDialog);
        QObject::connect(button_box, SIGNAL(accepted()), AddStreamDialog, SLOT(accept()));
        QObject::connect(button_box, SIGNAL(rejected()), AddStreamDialog, SLOT(reject()));
        QObject::connect(save, SIGNAL(toggled(bool)), details_container, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(AddStreamDialog);
    } // setupUi

    void retranslateUi(QDialog *AddStreamDialog)
    {
        AddStreamDialog->setWindowTitle(QCoreApplication::translate("AddStreamDialog", "Add Stream", nullptr));
        label->setText(QCoreApplication::translate("AddStreamDialog", "Enter the URL of an internet radio stream:", nullptr));
        save->setText(QCoreApplication::translate("AddStreamDialog", "Save this stream in the Internet tab", nullptr));
        label_2->setText(QCoreApplication::translate("AddStreamDialog", "Give it a name:", nullptr));
        label_4->setText(QCoreApplication::translate("AddStreamDialog", "URL of its Logo:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddStreamDialog: public Ui_AddStreamDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTREAMDIALOG_H
