/********************************************************************************
** Form generated from reading UI file 'querysearchpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYSEARCHPAGE_H
#define UI_QUERYSEARCHPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmartPlaylistQuerySearchPage
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QComboBox *type;
    QGroupBox *terms_group;
    QVBoxLayout *verticalLayout_5;
    QScrollArea *terms_scroll_area;
    QWidget *terms_scroll_area_content;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SmartPlaylistQuerySearchPage)
    {
        if (SmartPlaylistQuerySearchPage->objectName().isEmpty())
            SmartPlaylistQuerySearchPage->setObjectName(QString::fromUtf8("SmartPlaylistQuerySearchPage"));
        SmartPlaylistQuerySearchPage->resize(448, 450);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SmartPlaylistQuerySearchPage->sizePolicy().hasHeightForWidth());
        SmartPlaylistQuerySearchPage->setSizePolicy(sizePolicy);
        SmartPlaylistQuerySearchPage->setStyleSheet(QString::fromUtf8("#terms_scroll_area, #terms_scroll_area_content {\n"
"  background: transparent;\n"
"}"));
        verticalLayout = new QVBoxLayout(SmartPlaylistQuerySearchPage);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_3 = new QGroupBox(SmartPlaylistQuerySearchPage);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        type = new QComboBox(groupBox_3);
        type->addItem(QString());
        type->addItem(QString());
        type->addItem(QString());
        type->setObjectName(QString::fromUtf8("type"));

        verticalLayout_4->addWidget(type);


        verticalLayout->addWidget(groupBox_3);

        terms_group = new QGroupBox(SmartPlaylistQuerySearchPage);
        terms_group->setObjectName(QString::fromUtf8("terms_group"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(terms_group->sizePolicy().hasHeightForWidth());
        terms_group->setSizePolicy(sizePolicy1);
        terms_group->setMinimumSize(QSize(0, 200));
        verticalLayout_5 = new QVBoxLayout(terms_group);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        terms_scroll_area = new QScrollArea(terms_group);
        terms_scroll_area->setObjectName(QString::fromUtf8("terms_scroll_area"));
        sizePolicy1.setHeightForWidth(terms_scroll_area->sizePolicy().hasHeightForWidth());
        terms_scroll_area->setSizePolicy(sizePolicy1);
        terms_scroll_area->setFrameShape(QFrame::NoFrame);
        terms_scroll_area->setWidgetResizable(true);
        terms_scroll_area_content = new QWidget();
        terms_scroll_area_content->setObjectName(QString::fromUtf8("terms_scroll_area_content"));
        terms_scroll_area_content->setGeometry(QRect(0, 0, 418, 182));
        sizePolicy1.setHeightForWidth(terms_scroll_area_content->sizePolicy().hasHeightForWidth());
        terms_scroll_area_content->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(terms_scroll_area_content);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        terms_scroll_area->setWidget(terms_scroll_area_content);

        verticalLayout_5->addWidget(terms_scroll_area);


        verticalLayout->addWidget(terms_group);

        verticalLayout->setStretch(1, 5);
        verticalLayout->setStretch(2, 1);

        retranslateUi(SmartPlaylistQuerySearchPage);

        QMetaObject::connectSlotsByName(SmartPlaylistQuerySearchPage);
    } // setupUi

    void retranslateUi(QWidget *SmartPlaylistQuerySearchPage)
    {
        SmartPlaylistQuerySearchPage->setWindowTitle(QCoreApplication::translate("SmartPlaylistQuerySearchPage", "Form", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("SmartPlaylistQuerySearchPage", "Search mode", nullptr));
        type->setItemText(0, QCoreApplication::translate("SmartPlaylistQuerySearchPage", "Match every search term (AND)", nullptr));
        type->setItemText(1, QCoreApplication::translate("SmartPlaylistQuerySearchPage", "Match one or more search terms (OR)", nullptr));
        type->setItemText(2, QCoreApplication::translate("SmartPlaylistQuerySearchPage", "Include all songs", nullptr));

        terms_group->setTitle(QCoreApplication::translate("SmartPlaylistQuerySearchPage", "Search terms", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SmartPlaylistQuerySearchPage: public Ui_SmartPlaylistQuerySearchPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYSEARCHPAGE_H
