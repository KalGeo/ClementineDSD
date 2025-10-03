/********************************************************************************
** Form generated from reading UI file 'globalsearchsettingspage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLOBALSEARCHSETTINGSPAGE_H
#define UI_GLOBALSEARCHSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GlobalSearchSettingsPage
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *sources_group;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QTreeWidget *sources;
    QVBoxLayout *verticalLayout_2;
    QPushButton *up;
    QPushButton *down;
    QPushButton *configure;
    QSpacerItem *verticalSpacer;
    QGroupBox *empty_list_group;
    QVBoxLayout *verticalLayout;
    QCheckBox *show_providers;
    QCheckBox *show_suggestions;

    void setupUi(QWidget *GlobalSearchSettingsPage)
    {
        if (GlobalSearchSettingsPage->objectName().isEmpty())
            GlobalSearchSettingsPage->setObjectName(QString::fromUtf8("GlobalSearchSettingsPage"));
        GlobalSearchSettingsPage->resize(654, 506);
        verticalLayout_4 = new QVBoxLayout(GlobalSearchSettingsPage);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        sources_group = new QGroupBox(GlobalSearchSettingsPage);
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

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        up = new QPushButton(sources_group);
        up->setObjectName(QString::fromUtf8("up"));

        verticalLayout_2->addWidget(up);

        down = new QPushButton(sources_group);
        down->setObjectName(QString::fromUtf8("down"));

        verticalLayout_2->addWidget(down);

        configure = new QPushButton(sources_group);
        configure->setObjectName(QString::fromUtf8("configure"));

        verticalLayout_2->addWidget(configure);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_4->addWidget(sources_group);

        empty_list_group = new QGroupBox(GlobalSearchSettingsPage);
        empty_list_group->setObjectName(QString::fromUtf8("empty_list_group"));
        verticalLayout = new QVBoxLayout(empty_list_group);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        show_providers = new QCheckBox(empty_list_group);
        show_providers->setObjectName(QString::fromUtf8("show_providers"));

        verticalLayout->addWidget(show_providers);

        show_suggestions = new QCheckBox(empty_list_group);
        show_suggestions->setObjectName(QString::fromUtf8("show_suggestions"));

        verticalLayout->addWidget(show_suggestions);


        verticalLayout_4->addWidget(empty_list_group);

        QWidget::setTabOrder(sources, up);
        QWidget::setTabOrder(up, down);
        QWidget::setTabOrder(down, configure);
        QWidget::setTabOrder(configure, show_providers);
        QWidget::setTabOrder(show_providers, show_suggestions);

        retranslateUi(GlobalSearchSettingsPage);

        QMetaObject::connectSlotsByName(GlobalSearchSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *GlobalSearchSettingsPage)
    {
        GlobalSearchSettingsPage->setWindowTitle(QCoreApplication::translate("GlobalSearchSettingsPage", "Search", "Global search settings dialog title."));
        sources_group->setTitle(QCoreApplication::translate("GlobalSearchSettingsPage", "Sources", nullptr));
        label->setText(QCoreApplication::translate("GlobalSearchSettingsPage", "Enable sources below to include them in search results.  Results will be displayed in this order.", nullptr));
        up->setText(QCoreApplication::translate("GlobalSearchSettingsPage", "Move up", nullptr));
        down->setText(QCoreApplication::translate("GlobalSearchSettingsPage", "Move down", nullptr));
        configure->setText(QCoreApplication::translate("GlobalSearchSettingsPage", "Configure...", nullptr));
        empty_list_group->setTitle(QCoreApplication::translate("GlobalSearchSettingsPage", "When the list is empty...", nullptr));
        show_providers->setText(QCoreApplication::translate("GlobalSearchSettingsPage", "Show which sources are enabled and disabled", nullptr));
        show_suggestions->setText(QCoreApplication::translate("GlobalSearchSettingsPage", "Show search suggestions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GlobalSearchSettingsPage: public Ui_GlobalSearchSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLOBALSEARCHSETTINGSPAGE_H
