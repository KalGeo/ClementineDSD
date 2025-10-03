/********************************************************************************
** Form generated from reading UI file 'gpoddersearchpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GPODDERSEARCHPAGE_H
#define UI_GPODDERSEARCHPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GPodderSearchPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *query;
    QPushButton *search;

    void setupUi(QWidget *GPodderSearchPage)
    {
        if (GPodderSearchPage->objectName().isEmpty())
            GPodderSearchPage->setObjectName(QString::fromUtf8("GPodderSearchPage"));
        GPodderSearchPage->resize(538, 69);
        verticalLayout = new QVBoxLayout(GPodderSearchPage);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(GPodderSearchPage);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        query = new QLineEdit(GPodderSearchPage);
        query->setObjectName(QString::fromUtf8("query"));

        horizontalLayout->addWidget(query);

        search = new QPushButton(GPodderSearchPage);
        search->setObjectName(QString::fromUtf8("search"));

        horizontalLayout->addWidget(search);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(GPodderSearchPage);
        QObject::connect(query, SIGNAL(returnPressed()), search, SLOT(click()));

        QMetaObject::connectSlotsByName(GPodderSearchPage);
    } // setupUi

    void retranslateUi(QWidget *GPodderSearchPage)
    {
        GPodderSearchPage->setWindowTitle(QCoreApplication::translate("GPodderSearchPage", "Search gpodder.net", nullptr));
        label->setText(QCoreApplication::translate("GPodderSearchPage", "Enter search terms below to find podcasts on gpodder.net", nullptr));
        search->setText(QCoreApplication::translate("GPodderSearchPage", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GPodderSearchPage: public Ui_GPodderSearchPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GPODDERSEARCHPAGE_H
