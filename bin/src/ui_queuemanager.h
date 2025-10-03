/********************************************************************************
** Form generated from reading UI file 'queuemanager.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUEUEMANAGER_H
#define UI_QUEUEMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QueueManager
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QTreeView *list;
    QVBoxLayout *verticalLayout;
    QPushButton *move_up;
    QPushButton *move_down;
    QPushButton *remove;
    QPushButton *clear;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *queue_summary;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QueueManager)
    {
        if (QueueManager->objectName().isEmpty())
            QueueManager->setObjectName(QString::fromUtf8("QueueManager"));
        QueueManager->resize(582, 363);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        QueueManager->setWindowIcon(icon);
        verticalLayout_5 = new QVBoxLayout(QueueManager);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        list = new QTreeView(QueueManager);
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
        list->header()->setVisible(false);

        horizontalLayout->addWidget(list);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        move_up = new QPushButton(QueueManager);
        move_up->setObjectName(QString::fromUtf8("move_up"));
        move_up->setEnabled(false);
        move_up->setIconSize(QSize(16, 16));

        verticalLayout->addWidget(move_up);

        move_down = new QPushButton(QueueManager);
        move_down->setObjectName(QString::fromUtf8("move_down"));
        move_down->setEnabled(false);
        move_down->setIconSize(QSize(16, 16));

        verticalLayout->addWidget(move_down);

        remove = new QPushButton(QueueManager);
        remove->setObjectName(QString::fromUtf8("remove"));
        remove->setEnabled(false);

        verticalLayout->addWidget(remove);

        clear = new QPushButton(QueueManager);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setEnabled(false);
        clear->setIconSize(QSize(16, 16));

        verticalLayout->addWidget(clear);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        queue_summary = new QLabel(QueueManager);
        queue_summary->setObjectName(QString::fromUtf8("queue_summary"));

        horizontalLayout_2->addWidget(queue_summary);

        buttonBox = new QDialogButtonBox(QueueManager);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout_5->addLayout(horizontalLayout_2);


        retranslateUi(QueueManager);
        QObject::connect(buttonBox, SIGNAL(accepted()), QueueManager, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QueueManager, SLOT(reject()));

        QMetaObject::connectSlotsByName(QueueManager);
    } // setupUi

    void retranslateUi(QDialog *QueueManager)
    {
        QueueManager->setWindowTitle(QCoreApplication::translate("QueueManager", "Queue Manager", nullptr));
#if QT_CONFIG(tooltip)
        move_up->setToolTip(QCoreApplication::translate("QueueManager", "Move up", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        move_up->setShortcut(QCoreApplication::translate("QueueManager", "Ctrl+Up", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        move_down->setToolTip(QCoreApplication::translate("QueueManager", "Move down", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        move_down->setShortcut(QCoreApplication::translate("QueueManager", "Ctrl+Down", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        remove->setToolTip(QCoreApplication::translate("QueueManager", "Remove", nullptr));
#endif // QT_CONFIG(tooltip)
        remove->setText(QString());
#if QT_CONFIG(tooltip)
        clear->setToolTip(QCoreApplication::translate("QueueManager", "Clear", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        clear->setShortcut(QCoreApplication::translate("QueueManager", "Ctrl+K", nullptr));
#endif // QT_CONFIG(shortcut)
        queue_summary->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QueueManager: public Ui_QueueManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUEUEMANAGER_H
