/********************************************************************************
** Form generated from reading UI file 'internetshowsettingspage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERNETSHOWSETTINGSPAGE_H
#define UI_INTERNETSHOWSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InternetShowSettingsPage
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *sources_group;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QTreeWidget *sources;

    void setupUi(QWidget *InternetShowSettingsPage)
    {
        if (InternetShowSettingsPage->objectName().isEmpty())
            InternetShowSettingsPage->setObjectName(QString::fromUtf8("InternetShowSettingsPage"));
        InternetShowSettingsPage->resize(654, 506);
        verticalLayout_4 = new QVBoxLayout(InternetShowSettingsPage);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        sources_group = new QGroupBox(InternetShowSettingsPage);
        sources_group->setObjectName(QString::fromUtf8("sources_group"));
        verticalLayout_3 = new QVBoxLayout(sources_group);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(sources_group);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout_3->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        sources = new QTreeWidget(sources_group);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        sources->setHeaderItem(__qtreewidgetitem);
        sources->setObjectName(QString::fromUtf8("sources"));
        sources->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        sources->setRootIsDecorated(false);
        sources->setColumnCount(2);
        sources->header()->setVisible(false);
        sources->header()->setStretchLastSection(false);

        horizontalLayout->addWidget(sources);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_4->addWidget(sources_group);


        retranslateUi(InternetShowSettingsPage);

        QMetaObject::connectSlotsByName(InternetShowSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *InternetShowSettingsPage)
    {
        InternetShowSettingsPage->setWindowTitle(QCoreApplication::translate("InternetShowSettingsPage", "Internet services", "Global search settings dialog title."));
        sources_group->setTitle(QCoreApplication::translate("InternetShowSettingsPage", "Sources", nullptr));
        label->setText(QCoreApplication::translate("InternetShowSettingsPage", "Choose the internet services you want to show.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InternetShowSettingsPage: public Ui_InternetShowSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERNETSHOWSETTINGSPAGE_H
