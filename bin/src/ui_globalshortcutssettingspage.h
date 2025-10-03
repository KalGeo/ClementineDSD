/********************************************************************************
** Form generated from reading UI file 'globalshortcutssettingspage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLOBALSHORTCUTSSETTINGSPAGE_H
#define UI_GLOBALSHORTCUTSSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GlobalShortcutsSettingsPage
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *gnome_container;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *gnome_checkbox;
    QPushButton *gnome_open;
    QWidget *mac_container;
    QHBoxLayout *horizontalLayout_3;
    QLabel *mac_label;
    QPushButton *mac_open;
    QWidget *list_container;
    QVBoxLayout *verticalLayout_2;
    QTreeWidget *list;
    QGroupBox *shortcut_options;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radio_none;
    QRadioButton *radio_default;
    QRadioButton *radio_custom;
    QSpacerItem *horizontalSpacer;
    QPushButton *change;

    void setupUi(QWidget *GlobalShortcutsSettingsPage)
    {
        if (GlobalShortcutsSettingsPage->objectName().isEmpty())
            GlobalShortcutsSettingsPage->setObjectName(QString::fromUtf8("GlobalShortcutsSettingsPage"));
        GlobalShortcutsSettingsPage->resize(507, 393);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        GlobalShortcutsSettingsPage->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(GlobalShortcutsSettingsPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gnome_container = new QWidget(GlobalShortcutsSettingsPage);
        gnome_container->setObjectName(QString::fromUtf8("gnome_container"));
        horizontalLayout_2 = new QHBoxLayout(gnome_container);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        gnome_checkbox = new QCheckBox(gnome_container);
        gnome_checkbox->setObjectName(QString::fromUtf8("gnome_checkbox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gnome_checkbox->sizePolicy().hasHeightForWidth());
        gnome_checkbox->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(gnome_checkbox);

        gnome_open = new QPushButton(gnome_container);
        gnome_open->setObjectName(QString::fromUtf8("gnome_open"));

        horizontalLayout_2->addWidget(gnome_open);


        verticalLayout->addWidget(gnome_container);

        mac_container = new QWidget(GlobalShortcutsSettingsPage);
        mac_container->setObjectName(QString::fromUtf8("mac_container"));
        horizontalLayout_3 = new QHBoxLayout(mac_container);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        mac_label = new QLabel(mac_container);
        mac_label->setObjectName(QString::fromUtf8("mac_label"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mac_label->sizePolicy().hasHeightForWidth());
        mac_label->setSizePolicy(sizePolicy1);
        mac_label->setWordWrap(true);

        horizontalLayout_3->addWidget(mac_label);

        mac_open = new QPushButton(mac_container);
        mac_open->setObjectName(QString::fromUtf8("mac_open"));

        horizontalLayout_3->addWidget(mac_open);


        verticalLayout->addWidget(mac_container);

        list_container = new QWidget(GlobalShortcutsSettingsPage);
        list_container->setObjectName(QString::fromUtf8("list_container"));
        list_container->setMinimumSize(QSize(0, 0));
        verticalLayout_2 = new QVBoxLayout(list_container);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        list = new QTreeWidget(list_container);
        list->setObjectName(QString::fromUtf8("list"));
        list->setEditTriggers(QAbstractItemView::NoEditTriggers);
        list->setAlternatingRowColors(true);
        list->setRootIsDecorated(false);
        list->setAllColumnsShowFocus(true);

        verticalLayout_2->addWidget(list);

        shortcut_options = new QGroupBox(list_container);
        shortcut_options->setObjectName(QString::fromUtf8("shortcut_options"));
        shortcut_options->setEnabled(true);
        horizontalLayout = new QHBoxLayout(shortcut_options);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radio_none = new QRadioButton(shortcut_options);
        radio_none->setObjectName(QString::fromUtf8("radio_none"));
        radio_none->setEnabled(true);
        radio_none->setChecked(true);

        horizontalLayout->addWidget(radio_none);

        radio_default = new QRadioButton(shortcut_options);
        radio_default->setObjectName(QString::fromUtf8("radio_default"));

        horizontalLayout->addWidget(radio_default);

        radio_custom = new QRadioButton(shortcut_options);
        radio_custom->setObjectName(QString::fromUtf8("radio_custom"));

        horizontalLayout->addWidget(radio_custom);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        change = new QPushButton(shortcut_options);
        change->setObjectName(QString::fromUtf8("change"));

        horizontalLayout->addWidget(change);


        verticalLayout_2->addWidget(shortcut_options);


        verticalLayout->addWidget(list_container);

        QWidget::setTabOrder(gnome_checkbox, gnome_open);
        QWidget::setTabOrder(gnome_open, mac_open);
        QWidget::setTabOrder(mac_open, list);
        QWidget::setTabOrder(list, radio_none);
        QWidget::setTabOrder(radio_none, radio_default);
        QWidget::setTabOrder(radio_default, radio_custom);
        QWidget::setTabOrder(radio_custom, change);

        retranslateUi(GlobalShortcutsSettingsPage);
        QObject::connect(gnome_checkbox, SIGNAL(toggled(bool)), list_container, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(GlobalShortcutsSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *GlobalShortcutsSettingsPage)
    {
        GlobalShortcutsSettingsPage->setWindowTitle(QCoreApplication::translate("GlobalShortcutsSettingsPage", "Configure Shortcuts", nullptr));
        gnome_checkbox->setText(QCoreApplication::translate("GlobalShortcutsSettingsPage", "Use Gnome's shortcut keys", nullptr));
        gnome_open->setText(QCoreApplication::translate("GlobalShortcutsSettingsPage", "Open...", nullptr));
        mac_label->setText(QCoreApplication::translate("GlobalShortcutsSettingsPage", "You need to launch System Preferences and allow Clementine to \"<span style=\"font-style:italic\">control your computer</span>\" to use global shortcuts in Clementine.", nullptr));
        mac_open->setText(QCoreApplication::translate("GlobalShortcutsSettingsPage", "Open...", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = list->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("GlobalShortcutsSettingsPage", "Shortcut", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("GlobalShortcutsSettingsPage", "Action", "Category label"));
        shortcut_options->setTitle(QCoreApplication::translate("GlobalShortcutsSettingsPage", "Shortcut for %1", nullptr));
        radio_none->setText(QCoreApplication::translate("GlobalShortcutsSettingsPage", "&None", nullptr));
        radio_default->setText(QCoreApplication::translate("GlobalShortcutsSettingsPage", "De&fault", nullptr));
        radio_custom->setText(QCoreApplication::translate("GlobalShortcutsSettingsPage", "&Custom", nullptr));
        change->setText(QCoreApplication::translate("GlobalShortcutsSettingsPage", "Change shortcut...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GlobalShortcutsSettingsPage: public Ui_GlobalShortcutsSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLOBALSHORTCUTSSETTINGSPAGE_H
