/********************************************************************************
** Form generated from reading UI file 'gstenginedebug.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GSTENGINEDEBUG_H
#define UI_GSTENGINEDEBUG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GstEngineDebug
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *graph_group;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *dump_graph_button;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *GstEngineDebug)
    {
        if (GstEngineDebug->objectName().isEmpty())
            GstEngineDebug->setObjectName(QString::fromUtf8("GstEngineDebug"));
        GstEngineDebug->resize(400, 300);
        verticalLayout = new QVBoxLayout(GstEngineDebug);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        graph_group = new QGroupBox(GstEngineDebug);
        graph_group->setObjectName(QString::fromUtf8("graph_group"));
        horizontalLayout_2 = new QHBoxLayout(graph_group);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        dump_graph_button = new QPushButton(graph_group);
        dump_graph_button->setObjectName(QString::fromUtf8("dump_graph_button"));

        horizontalLayout_2->addWidget(dump_graph_button);


        verticalLayout->addWidget(graph_group);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(GstEngineDebug);

        QMetaObject::connectSlotsByName(GstEngineDebug);
    } // setupUi

    void retranslateUi(QWidget *GstEngineDebug)
    {
        GstEngineDebug->setWindowTitle(QCoreApplication::translate("GstEngineDebug", "Form", nullptr));
        graph_group->setTitle(QCoreApplication::translate("GstEngineDebug", "Pipeline", nullptr));
        dump_graph_button->setText(QCoreApplication::translate("GstEngineDebug", "Dump Pipeline Graph", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GstEngineDebug: public Ui_GstEngineDebug {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GSTENGINEDEBUG_H
