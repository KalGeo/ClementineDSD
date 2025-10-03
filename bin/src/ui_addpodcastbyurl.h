/********************************************************************************
** Form generated from reading UI file 'addpodcastbyurl.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPODCASTBYURL_H
#define UI_ADDPODCASTBYURL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddPodcastByUrl
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *url;
    QPushButton *go;

    void setupUi(QWidget *AddPodcastByUrl)
    {
        if (AddPodcastByUrl->objectName().isEmpty())
            AddPodcastByUrl->setObjectName(QString::fromUtf8("AddPodcastByUrl"));
        AddPodcastByUrl->resize(431, 51);
        verticalLayout = new QVBoxLayout(AddPodcastByUrl);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(AddPodcastByUrl);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        url = new QLineEdit(AddPodcastByUrl);
        url->setObjectName(QString::fromUtf8("url"));

        horizontalLayout->addWidget(url);

        go = new QPushButton(AddPodcastByUrl);
        go->setObjectName(QString::fromUtf8("go"));

        horizontalLayout->addWidget(go);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AddPodcastByUrl);
        QObject::connect(url, SIGNAL(returnPressed()), go, SLOT(click()));

        QMetaObject::connectSlotsByName(AddPodcastByUrl);
    } // setupUi

    void retranslateUi(QWidget *AddPodcastByUrl)
    {
        AddPodcastByUrl->setWindowTitle(QCoreApplication::translate("AddPodcastByUrl", "Enter a URL", nullptr));
        label->setText(QCoreApplication::translate("AddPodcastByUrl", "If you know the URL of a podcast, enter it below and press Go.", nullptr));
        go->setText(QCoreApplication::translate("AddPodcastByUrl", "Go", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPodcastByUrl: public Ui_AddPodcastByUrl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPODCASTBYURL_H
