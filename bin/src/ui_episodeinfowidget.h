/********************************************************************************
** Form generated from reading UI file 'episodeinfowidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EPISODEINFOWIDGET_H
#define UI_EPISODEINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EpisodeInfoWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *title;
    QLabel *description;
    QGridLayout *gridLayout;
    QLabel *author_label;
    QLineEdit *date;
    QLineEdit *author;
    QLabel *date_label;
    QLabel *duration_label;
    QLineEdit *duration;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *EpisodeInfoWidget)
    {
        if (EpisodeInfoWidget->objectName().isEmpty())
            EpisodeInfoWidget->setObjectName(QString::fromUtf8("EpisodeInfoWidget"));
        EpisodeInfoWidget->resize(398, 551);
        EpisodeInfoWidget->setStyleSheet(QString::fromUtf8("#title {\n"
"	font-weight: bold;\n"
"}\n"
"\n"
"#description {\n"
"	font-size: smaller;\n"
"}\n"
"\n"
"QLineEdit {\n"
"  background: transparent;\n"
"}"));
        verticalLayout = new QVBoxLayout(EpisodeInfoWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        title = new QLabel(EpisodeInfoWidget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setWordWrap(true);
        title->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(title);

        description = new QLabel(EpisodeInfoWidget);
        description->setObjectName(QString::fromUtf8("description"));
        description->setWordWrap(true);
        description->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(description);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        author_label = new QLabel(EpisodeInfoWidget);
        author_label->setObjectName(QString::fromUtf8("author_label"));
        author_label->setProperty("field_label", QVariant(true));

        gridLayout->addWidget(author_label, 0, 0, 1, 1);

        date = new QLineEdit(EpisodeInfoWidget);
        date->setObjectName(QString::fromUtf8("date"));
        date->setFrame(false);
        date->setReadOnly(true);

        gridLayout->addWidget(date, 1, 1, 1, 1);

        author = new QLineEdit(EpisodeInfoWidget);
        author->setObjectName(QString::fromUtf8("author"));
        author->setFrame(false);
        author->setReadOnly(true);

        gridLayout->addWidget(author, 0, 1, 1, 1);

        date_label = new QLabel(EpisodeInfoWidget);
        date_label->setObjectName(QString::fromUtf8("date_label"));
        date_label->setProperty("field_label", QVariant(true));

        gridLayout->addWidget(date_label, 1, 0, 1, 1);

        duration_label = new QLabel(EpisodeInfoWidget);
        duration_label->setObjectName(QString::fromUtf8("duration_label"));
        duration_label->setProperty("field_label", QVariant(true));

        gridLayout->addWidget(duration_label, 2, 0, 1, 1);

        duration = new QLineEdit(EpisodeInfoWidget);
        duration->setObjectName(QString::fromUtf8("duration"));
        duration->setFrame(false);
        duration->setReadOnly(true);

        gridLayout->addWidget(duration, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(EpisodeInfoWidget);

        QMetaObject::connectSlotsByName(EpisodeInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *EpisodeInfoWidget)
    {
        EpisodeInfoWidget->setWindowTitle(QCoreApplication::translate("EpisodeInfoWidget", "Form", nullptr));
        author_label->setText(QCoreApplication::translate("EpisodeInfoWidget", "Author", nullptr));
        date_label->setText(QCoreApplication::translate("EpisodeInfoWidget", "Date", nullptr));
        duration_label->setText(QCoreApplication::translate("EpisodeInfoWidget", "Duration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EpisodeInfoWidget: public Ui_EpisodeInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EPISODEINFOWIDGET_H
