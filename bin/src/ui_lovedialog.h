/********************************************************************************
** Form generated from reading UI file 'lovedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOVEDIALOG_H
#define UI_LOVEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include "widgets/ratingwidget.h"

QT_BEGIN_NAMESPACE

class Ui_LoveDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *summary;
    QFrame *line;
    QGridLayout *gridLayout_3;
    RatingWidget *rating;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *button_box;

    void setupUi(QDialog *LoveDialog)
    {
        if (LoveDialog->objectName().isEmpty())
            LoveDialog->setObjectName(QString::fromUtf8("LoveDialog"));
        LoveDialog->resize(400, 400);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoveDialog->sizePolicy().hasHeightForWidth());
        LoveDialog->setSizePolicy(sizePolicy);
        LoveDialog->setMinimumSize(QSize(200, 300));
        LoveDialog->setMaximumSize(QSize(400, 400));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        LoveDialog->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(LoveDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        summary = new QTextEdit(LoveDialog);
        summary->setObjectName(QString::fromUtf8("summary"));
        summary->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"  background: transparent;\n"
"}"));
        summary->setFrameShape(QFrame::NoFrame);

        verticalLayout_2->addWidget(summary);

        line = new QFrame(LoveDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(18);
        rating = new RatingWidget(LoveDialog);
        rating->setObjectName(QString::fromUtf8("rating"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(rating->sizePolicy().hasHeightForWidth());
        rating->setSizePolicy(sizePolicy1);
        rating->setMinimumSize(QSize(0, 0));

        gridLayout_3->addWidget(rating, 2, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        verticalLayout_3->addLayout(verticalLayout_2);

        button_box = new QDialogButtonBox(LoveDialog);
        button_box->setObjectName(QString::fromUtf8("button_box"));
        button_box->setStandardButtons(QDialogButtonBox::Cancel);

        verticalLayout_3->addWidget(button_box);


        retranslateUi(LoveDialog);
        QObject::connect(button_box, SIGNAL(accepted()), LoveDialog, SLOT(accept()));
        QObject::connect(button_box, SIGNAL(rejected()), LoveDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LoveDialog);
    } // setupUi

    void retranslateUi(QDialog *LoveDialog)
    {
        LoveDialog->setWindowTitle(QCoreApplication::translate("LoveDialog", "Quickly rate the playing track", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoveDialog: public Ui_LoveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOVEDIALOG_H
