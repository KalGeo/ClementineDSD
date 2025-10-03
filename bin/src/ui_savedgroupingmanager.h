/********************************************************************************
** Form generated from reading UI file 'savedgroupingmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEDGROUPINGMANAGER_H
#define UI_SAVEDGROUPINGMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SavedGroupingManager
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QTreeView *list;
    QVBoxLayout *verticalLayout;
    QPushButton *remove;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SavedGroupingManager)
    {
        if (SavedGroupingManager->objectName().isEmpty())
            SavedGroupingManager->setObjectName(QString::fromUtf8("SavedGroupingManager"));
        SavedGroupingManager->resize(582, 363);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        SavedGroupingManager->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(SavedGroupingManager);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        list = new QTreeView(SavedGroupingManager);
        list->setObjectName(QString::fromUtf8("list"));
        list->setAcceptDrops(true);
        list->setProperty("showDropIndicator", QVariant(true));
        list->setDragEnabled(true);
        list->setDragDropMode(QAbstractItemView::DragDrop);
        list->setDefaultDropAction(Qt::MoveAction);
        list->setAlternatingRowColors(true);
        list->setSelectionMode(QAbstractItemView::ExtendedSelection);
        list->setSelectionBehavior(QAbstractItemView::SelectRows);
        list->setRootIsDecorated(false);
        list->header()->setVisible(true);

        horizontalLayout->addWidget(list);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        remove = new QPushButton(SavedGroupingManager);
        remove->setObjectName(QString::fromUtf8("remove"));
        remove->setEnabled(false);
        remove->setIconSize(QSize(16, 16));

        verticalLayout->addWidget(remove);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(SavedGroupingManager);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(SavedGroupingManager);
        QObject::connect(buttonBox, SIGNAL(accepted()), SavedGroupingManager, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SavedGroupingManager, SLOT(reject()));

        QMetaObject::connectSlotsByName(SavedGroupingManager);
    } // setupUi

    void retranslateUi(QDialog *SavedGroupingManager)
    {
        SavedGroupingManager->setWindowTitle(QCoreApplication::translate("SavedGroupingManager", "Saved Grouping Manager", nullptr));
#if QT_CONFIG(tooltip)
        remove->setToolTip(QCoreApplication::translate("SavedGroupingManager", "Remove", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        remove->setShortcut(QCoreApplication::translate("SavedGroupingManager", "Ctrl+Up", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class SavedGroupingManager: public Ui_SavedGroupingManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEDGROUPINGMANAGER_H
