/********************************************************************************
** Form generated from reading UI file 'console.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLE_H
#define UI_CONSOLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Console
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *database_tab;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *database_output;
    QGroupBox *database_command_group;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *database_query;
    QPushButton *database_run;
    QWidget *qt_tab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *qt_dump_group;
    QHBoxLayout *horizontalLayout;
    QComboBox *qt_dump_box;
    QPushButton *qt_dump_button;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *Console)
    {
        if (Console->objectName().isEmpty())
            Console->setObjectName(QString::fromUtf8("Console"));
        Console->resize(545, 347);
        verticalLayout = new QVBoxLayout(Console);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(Console);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        database_tab = new QWidget();
        database_tab->setObjectName(QString::fromUtf8("database_tab"));
        verticalLayout_3 = new QVBoxLayout(database_tab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        database_output = new QTextBrowser(database_tab);
        database_output->setObjectName(QString::fromUtf8("database_output"));

        verticalLayout_3->addWidget(database_output);

        database_command_group = new QGroupBox(database_tab);
        database_command_group->setObjectName(QString::fromUtf8("database_command_group"));
        horizontalLayout_4 = new QHBoxLayout(database_command_group);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        database_query = new QLineEdit(database_command_group);
        database_query->setObjectName(QString::fromUtf8("database_query"));

        horizontalLayout_4->addWidget(database_query);

        database_run = new QPushButton(database_command_group);
        database_run->setObjectName(QString::fromUtf8("database_run"));

        horizontalLayout_4->addWidget(database_run);


        verticalLayout_3->addWidget(database_command_group);

        tabWidget->addTab(database_tab, QString());
        qt_tab = new QWidget();
        qt_tab->setObjectName(QString::fromUtf8("qt_tab"));
        verticalLayout_2 = new QVBoxLayout(qt_tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        qt_dump_group = new QGroupBox(qt_tab);
        qt_dump_group->setObjectName(QString::fromUtf8("qt_dump_group"));
        horizontalLayout = new QHBoxLayout(qt_dump_group);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        qt_dump_box = new QComboBox(qt_dump_group);
        qt_dump_box->setObjectName(QString::fromUtf8("qt_dump_box"));

        horizontalLayout->addWidget(qt_dump_box);

        qt_dump_button = new QPushButton(qt_dump_group);
        qt_dump_button->setObjectName(QString::fromUtf8("qt_dump_button"));
        qt_dump_button->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(qt_dump_button);


        verticalLayout_2->addWidget(qt_dump_group);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(qt_tab, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(Console);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Console);
    } // setupUi

    void retranslateUi(QDialog *Console)
    {
        Console->setWindowTitle(QCoreApplication::translate("Console", "Console", nullptr));
        database_command_group->setTitle(QCoreApplication::translate("Console", "Command", nullptr));
        database_run->setText(QCoreApplication::translate("Console", "Run", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(database_tab), QCoreApplication::translate("Console", "Database", nullptr));
        qt_dump_group->setTitle(QCoreApplication::translate("Console", "Dump To Logs", nullptr));
        qt_dump_button->setText(QCoreApplication::translate("Console", "dump", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(qt_tab), QCoreApplication::translate("Console", "Qt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Console: public Ui_Console {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLE_H
