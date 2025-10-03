/********************************************************************************
** Form generated from reading UI file 'filenameformatwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILENAMEFORMATWIDGET_H
#define UI_FILENAMEFORMATWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/linetextedit.h"

QT_BEGIN_NAMESPACE

class Ui_FileNameFormatWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *naming_group;
    QVBoxLayout *innerVerticalLayout;
    QHBoxLayout *innerHorizontalLayout;
    LineTextEdit *naming;
    QToolButton *insert;
    QCheckBox *replace_the;
    QCheckBox *replace_spaces;
    QCheckBox *replace_ascii;
    QCheckBox *overwrite;
    QCheckBox *mark_as_listened;

    void setupUi(QWidget *FileNameFormatWidget)
    {
        if (FileNameFormatWidget->objectName().isEmpty())
            FileNameFormatWidget->setObjectName(QString::fromUtf8("FileNameFormatWidget"));
        FileNameFormatWidget->resize(361, 283);
        verticalLayout = new QVBoxLayout(FileNameFormatWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        naming_group = new QGroupBox(FileNameFormatWidget);
        naming_group->setObjectName(QString::fromUtf8("naming_group"));
        innerVerticalLayout = new QVBoxLayout(naming_group);
        innerVerticalLayout->setObjectName(QString::fromUtf8("innerVerticalLayout"));
        innerHorizontalLayout = new QHBoxLayout();
        innerHorizontalLayout->setObjectName(QString::fromUtf8("innerHorizontalLayout"));
        naming = new LineTextEdit(naming_group);
        naming->setObjectName(QString::fromUtf8("naming"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(naming->sizePolicy().hasHeightForWidth());
        naming->setSizePolicy(sizePolicy);
        naming->setLineWrapMode(QTextEdit::NoWrap);
        naming->setAcceptRichText(false);

        innerHorizontalLayout->addWidget(naming);

        insert = new QToolButton(naming_group);
        insert->setObjectName(QString::fromUtf8("insert"));
        insert->setPopupMode(QToolButton::InstantPopup);

        innerHorizontalLayout->addWidget(insert);


        innerVerticalLayout->addLayout(innerHorizontalLayout);

        replace_the = new QCheckBox(naming_group);
        replace_the->setObjectName(QString::fromUtf8("replace_the"));

        innerVerticalLayout->addWidget(replace_the);

        replace_spaces = new QCheckBox(naming_group);
        replace_spaces->setObjectName(QString::fromUtf8("replace_spaces"));

        innerVerticalLayout->addWidget(replace_spaces);

        replace_ascii = new QCheckBox(naming_group);
        replace_ascii->setObjectName(QString::fromUtf8("replace_ascii"));

        innerVerticalLayout->addWidget(replace_ascii);

        overwrite = new QCheckBox(naming_group);
        overwrite->setObjectName(QString::fromUtf8("overwrite"));

        innerVerticalLayout->addWidget(overwrite);

        mark_as_listened = new QCheckBox(naming_group);
        mark_as_listened->setObjectName(QString::fromUtf8("mark_as_listened"));

        innerVerticalLayout->addWidget(mark_as_listened);


        verticalLayout->addWidget(naming_group);

        QWidget::setTabOrder(naming, insert);
        QWidget::setTabOrder(insert, replace_the);
        QWidget::setTabOrder(replace_the, replace_spaces);
        QWidget::setTabOrder(replace_spaces, replace_ascii);
        QWidget::setTabOrder(replace_ascii, overwrite);
        QWidget::setTabOrder(overwrite, mark_as_listened);

        retranslateUi(FileNameFormatWidget);

        QMetaObject::connectSlotsByName(FileNameFormatWidget);
    } // setupUi

    void retranslateUi(QWidget *FileNameFormatWidget)
    {
        naming_group->setTitle(QCoreApplication::translate("FileNameFormatWidget", "Naming options", nullptr));
#if QT_CONFIG(tooltip)
        naming->setToolTip(QCoreApplication::translate("FileNameFormatWidget", "<p>Tokens start with %, for example: %artist %album %title </p>\n"
"\n"
"<p>If you surround sections of text that contain a token with curly-braces, that section will be hidden if the token is empty.</p>", nullptr));
#endif // QT_CONFIG(tooltip)
        insert->setText(QCoreApplication::translate("FileNameFormatWidget", "Insert...", nullptr));
        replace_the->setText(QCoreApplication::translate("FileNameFormatWidget", "Ignore \"The\" in artist names", nullptr));
        replace_spaces->setText(QCoreApplication::translate("FileNameFormatWidget", "Replaces spaces with underscores", nullptr));
        replace_ascii->setText(QCoreApplication::translate("FileNameFormatWidget", "Restrict to ASCII characters", nullptr));
        overwrite->setText(QCoreApplication::translate("FileNameFormatWidget", "Overwrite existing files", nullptr));
        mark_as_listened->setText(QCoreApplication::translate("FileNameFormatWidget", "Mark as listened", nullptr));
        (void)FileNameFormatWidget;
    } // retranslateUi

};

namespace Ui {
    class FileNameFormatWidget: public Ui_FileNameFormatWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILENAMEFORMATWIDGET_H
