/********************************************************************************
** Form generated from reading UI file 'errordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORDIALOG_H
#define UI_ERRORDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ErrorDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *icon;
    QSpacerItem *verticalSpacer;
    QTextEdit *messages;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ErrorDialog)
    {
        if (ErrorDialog->objectName().isEmpty())
            ErrorDialog->setObjectName(QString::fromUtf8("ErrorDialog"));
        ErrorDialog->resize(411, 180);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        ErrorDialog->setWindowIcon(icon1);
        verticalLayout_2 = new QVBoxLayout(ErrorDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        icon = new QLabel(ErrorDialog);
        icon->setObjectName(QString::fromUtf8("icon"));

        verticalLayout->addWidget(icon);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        messages = new QTextEdit(ErrorDialog);
        messages->setObjectName(QString::fromUtf8("messages"));
        messages->setFrameShape(QFrame::NoFrame);
        messages->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        messages->setReadOnly(true);

        horizontalLayout->addWidget(messages);


        verticalLayout_2->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(ErrorDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(ErrorDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ErrorDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ErrorDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ErrorDialog);
    } // setupUi

    void retranslateUi(QDialog *ErrorDialog)
    {
        ErrorDialog->setWindowTitle(QCoreApplication::translate("ErrorDialog", "Clementine Error", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ErrorDialog: public Ui_ErrorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORDIALOG_H
