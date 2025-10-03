/********************************************************************************
** Form generated from reading UI file 'searchproviderstatuswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHPROVIDERSTATUSWIDGET_H
#define UI_SEARCHPROVIDERSTATUSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchProviderStatusWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QLabel *icon;
    QLabel *name;
    QWidget *disabled_group;
    QHBoxLayout *horizontalLayout;
    QLabel *disabled_icon;
    QLabel *disabled_reason;

    void setupUi(QWidget *SearchProviderStatusWidget)
    {
        if (SearchProviderStatusWidget->objectName().isEmpty())
            SearchProviderStatusWidget->setObjectName(QString::fromUtf8("SearchProviderStatusWidget"));
        SearchProviderStatusWidget->resize(464, 110);
        horizontalLayout_2 = new QHBoxLayout(SearchProviderStatusWidget);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        icon = new QLabel(SearchProviderStatusWidget);
        icon->setObjectName(QString::fromUtf8("icon"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(icon->sizePolicy().hasHeightForWidth());
        icon->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(icon);

        name = new QLabel(SearchProviderStatusWidget);
        name->setObjectName(QString::fromUtf8("name"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(name);

        disabled_group = new QWidget(SearchProviderStatusWidget);
        disabled_group->setObjectName(QString::fromUtf8("disabled_group"));
        horizontalLayout = new QHBoxLayout(disabled_group);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        disabled_icon = new QLabel(disabled_group);
        disabled_icon->setObjectName(QString::fromUtf8("disabled_icon"));
        sizePolicy.setHeightForWidth(disabled_icon->sizePolicy().hasHeightForWidth());
        disabled_icon->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(disabled_icon);

        disabled_reason = new QLabel(disabled_group);
        disabled_reason->setObjectName(QString::fromUtf8("disabled_reason"));
        sizePolicy.setHeightForWidth(disabled_reason->sizePolicy().hasHeightForWidth());
        disabled_reason->setSizePolicy(sizePolicy);
        disabled_reason->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(disabled_reason);


        horizontalLayout_2->addWidget(disabled_group);


        retranslateUi(SearchProviderStatusWidget);

        QMetaObject::connectSlotsByName(SearchProviderStatusWidget);
    } // setupUi

    void retranslateUi(QWidget *SearchProviderStatusWidget)
    {
        SearchProviderStatusWidget->setWindowTitle(QCoreApplication::translate("SearchProviderStatusWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchProviderStatusWidget: public Ui_SearchProviderStatusWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHPROVIDERSTATUSWIDGET_H
