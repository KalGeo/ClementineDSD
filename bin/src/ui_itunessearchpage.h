/********************************************************************************
** Form generated from reading UI file 'itunessearchpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITUNESSEARCHPAGE_H
#define UI_ITUNESSEARCHPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ITunesSearchPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *query;
    QPushButton *search;

    void setupUi(QWidget *ITunesSearchPage)
    {
        if (ITunesSearchPage->objectName().isEmpty())
            ITunesSearchPage->setObjectName(QString::fromUtf8("ITunesSearchPage"));
        ITunesSearchPage->resize(516, 69);
        verticalLayout = new QVBoxLayout(ITunesSearchPage);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(ITunesSearchPage);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        query = new QLineEdit(ITunesSearchPage);
        query->setObjectName(QString::fromUtf8("query"));

        horizontalLayout->addWidget(query);

        search = new QPushButton(ITunesSearchPage);
        search->setObjectName(QString::fromUtf8("search"));

        horizontalLayout->addWidget(search);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ITunesSearchPage);
        QObject::connect(query, SIGNAL(returnPressed()), search, SLOT(click()));

        QMetaObject::connectSlotsByName(ITunesSearchPage);
    } // setupUi

    void retranslateUi(QWidget *ITunesSearchPage)
    {
        ITunesSearchPage->setWindowTitle(QCoreApplication::translate("ITunesSearchPage", "Search iTunes", nullptr));
        label->setText(QCoreApplication::translate("ITunesSearchPage", "Enter search terms below to find podcasts in the iTunes Store", nullptr));
        search->setText(QCoreApplication::translate("ITunesSearchPage", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ITunesSearchPage: public Ui_ITunesSearchPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITUNESSEARCHPAGE_H
