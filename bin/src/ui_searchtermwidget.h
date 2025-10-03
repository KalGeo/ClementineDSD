/********************************************************************************
** Form generated from reading UI file 'searchtermwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHTERMWIDGET_H
#define UI_SEARCHTERMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/ratingwidget.h"

QT_BEGIN_NAMESPACE

class Ui_SmartPlaylistSearchTermWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *layout_frame;
    QFrame *container;
    QHBoxLayout *layout_container;
    QComboBox *field;
    QComboBox *op;
    QStackedWidget *value_stack;
    QWidget *page_text;
    QVBoxLayout *layout_page_text;
    QLineEdit *value_text;
    QWidget *page_empty;
    QVBoxLayout *layout_page_empty;
    QWidget *page_rating;
    QVBoxLayout *layout_page_rating;
    RatingWidget *value_rating;
    QWidget *page_time;
    QVBoxLayout *layout_page_time;
    QTimeEdit *value_time;
    QWidget *page_number;
    QVBoxLayout *layout_page_number;
    QSpinBox *value_number;
    QWidget *page_date;
    QVBoxLayout *layout_page_date;
    QDateEdit *value_date;
    QWidget *page_date_numeric;
    QHBoxLayout *layout_page_numeric;
    QSpinBox *value_date_numeric;
    QComboBox *date_type;
    QWidget *page_date_relative;
    QHBoxLayout *layout_page_date_relative;
    QSpinBox *value_date_numeric1;
    QLabel *label;
    QSpinBox *value_date_numeric2;
    QComboBox *date_type_relative;
    QLabel *label_2;
    QToolButton *remove;

    void setupUi(QWidget *SmartPlaylistSearchTermWidget)
    {
        if (SmartPlaylistSearchTermWidget->objectName().isEmpty())
            SmartPlaylistSearchTermWidget->setObjectName(QString::fromUtf8("SmartPlaylistSearchTermWidget"));
        SmartPlaylistSearchTermWidget->resize(640, 38);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SmartPlaylistSearchTermWidget->sizePolicy().hasHeightForWidth());
        SmartPlaylistSearchTermWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(SmartPlaylistSearchTermWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(SmartPlaylistSearchTermWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layout_frame = new QHBoxLayout(frame);
        layout_frame->setSpacing(0);
        layout_frame->setObjectName(QString::fromUtf8("layout_frame"));
        layout_frame->setContentsMargins(0, 0, 0, 0);
        container = new QFrame(frame);
        container->setObjectName(QString::fromUtf8("container"));
        layout_container = new QHBoxLayout(container);
        layout_container->setSpacing(6);
        layout_container->setObjectName(QString::fromUtf8("layout_container"));
        layout_container->setContentsMargins(0, 0, 0, 0);
        field = new QComboBox(container);
        field->setObjectName(QString::fromUtf8("field"));

        layout_container->addWidget(field);

        op = new QComboBox(container);
        op->setObjectName(QString::fromUtf8("op"));

        layout_container->addWidget(op);

        value_stack = new QStackedWidget(container);
        value_stack->setObjectName(QString::fromUtf8("value_stack"));
        page_text = new QWidget();
        page_text->setObjectName(QString::fromUtf8("page_text"));
        layout_page_text = new QVBoxLayout(page_text);
        layout_page_text->setSpacing(0);
        layout_page_text->setObjectName(QString::fromUtf8("layout_page_text"));
        layout_page_text->setContentsMargins(0, 0, 0, 0);
        value_text = new QLineEdit(page_text);
        value_text->setObjectName(QString::fromUtf8("value_text"));

        layout_page_text->addWidget(value_text);

        value_stack->addWidget(page_text);
        page_empty = new QWidget();
        page_empty->setObjectName(QString::fromUtf8("page_empty"));
        layout_page_empty = new QVBoxLayout(page_empty);
        layout_page_empty->setSpacing(0);
        layout_page_empty->setObjectName(QString::fromUtf8("layout_page_empty"));
        layout_page_empty->setContentsMargins(0, 0, 0, 0);
        value_stack->addWidget(page_empty);
        page_rating = new QWidget();
        page_rating->setObjectName(QString::fromUtf8("page_rating"));
        layout_page_rating = new QVBoxLayout(page_rating);
        layout_page_rating->setSpacing(0);
        layout_page_rating->setObjectName(QString::fromUtf8("layout_page_rating"));
        layout_page_rating->setContentsMargins(0, 0, 0, 0);
        value_rating = new RatingWidget(page_rating);
        value_rating->setObjectName(QString::fromUtf8("value_rating"));

        layout_page_rating->addWidget(value_rating);

        value_stack->addWidget(page_rating);
        page_time = new QWidget();
        page_time->setObjectName(QString::fromUtf8("page_time"));
        layout_page_time = new QVBoxLayout(page_time);
        layout_page_time->setSpacing(0);
        layout_page_time->setObjectName(QString::fromUtf8("layout_page_time"));
        layout_page_time->setContentsMargins(0, 0, 0, 0);
        value_time = new QTimeEdit(page_time);
        value_time->setObjectName(QString::fromUtf8("value_time"));
        value_time->setDisplayFormat(QString::fromUtf8("mm:ss"));

        layout_page_time->addWidget(value_time);

        value_stack->addWidget(page_time);
        page_number = new QWidget();
        page_number->setObjectName(QString::fromUtf8("page_number"));
        layout_page_number = new QVBoxLayout(page_number);
        layout_page_number->setSpacing(0);
        layout_page_number->setObjectName(QString::fromUtf8("layout_page_number"));
        layout_page_number->setContentsMargins(0, 0, 0, 0);
        value_number = new QSpinBox(page_number);
        value_number->setObjectName(QString::fromUtf8("value_number"));
        value_number->setMaximum(1000000);

        layout_page_number->addWidget(value_number);

        value_stack->addWidget(page_number);
        page_date = new QWidget();
        page_date->setObjectName(QString::fromUtf8("page_date"));
        layout_page_date = new QVBoxLayout(page_date);
        layout_page_date->setSpacing(0);
        layout_page_date->setObjectName(QString::fromUtf8("layout_page_date"));
        layout_page_date->setContentsMargins(0, 0, 0, 0);
        value_date = new QDateEdit(page_date);
        value_date->setObjectName(QString::fromUtf8("value_date"));
        value_date->setCalendarPopup(true);

        layout_page_date->addWidget(value_date);

        value_stack->addWidget(page_date);
        page_date_numeric = new QWidget();
        page_date_numeric->setObjectName(QString::fromUtf8("page_date_numeric"));
        layout_page_numeric = new QHBoxLayout(page_date_numeric);
        layout_page_numeric->setObjectName(QString::fromUtf8("layout_page_numeric"));
        layout_page_numeric->setContentsMargins(-1, 0, -1, 0);
        value_date_numeric = new QSpinBox(page_date_numeric);
        value_date_numeric->setObjectName(QString::fromUtf8("value_date_numeric"));
        value_date_numeric->setMinimum(1);
        value_date_numeric->setMaximum(999);

        layout_page_numeric->addWidget(value_date_numeric);

        date_type = new QComboBox(page_date_numeric);
        date_type->setObjectName(QString::fromUtf8("date_type"));

        layout_page_numeric->addWidget(date_type);

        value_stack->addWidget(page_date_numeric);
        page_date_relative = new QWidget();
        page_date_relative->setObjectName(QString::fromUtf8("page_date_relative"));
        layout_page_date_relative = new QHBoxLayout(page_date_relative);
        layout_page_date_relative->setObjectName(QString::fromUtf8("layout_page_date_relative"));
        layout_page_date_relative->setContentsMargins(-1, 0, -1, 0);
        value_date_numeric1 = new QSpinBox(page_date_relative);
        value_date_numeric1->setObjectName(QString::fromUtf8("value_date_numeric1"));
        value_date_numeric1->setMinimum(0);
        value_date_numeric1->setMaximum(999);
        value_date_numeric1->setValue(1);

        layout_page_date_relative->addWidget(value_date_numeric1);

        label = new QLabel(page_date_relative);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setAlignment(Qt::AlignCenter);

        layout_page_date_relative->addWidget(label);

        value_date_numeric2 = new QSpinBox(page_date_relative);
        value_date_numeric2->setObjectName(QString::fromUtf8("value_date_numeric2"));
        value_date_numeric2->setMinimum(1);
        value_date_numeric2->setMaximum(999);
        value_date_numeric2->setValue(2);

        layout_page_date_relative->addWidget(value_date_numeric2);

        date_type_relative = new QComboBox(page_date_relative);
        date_type_relative->setObjectName(QString::fromUtf8("date_type_relative"));

        layout_page_date_relative->addWidget(date_type_relative);

        label_2 = new QLabel(page_date_relative);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        layout_page_date_relative->addWidget(label_2);

        value_stack->addWidget(page_date_relative);

        layout_container->addWidget(value_stack);


        layout_frame->addWidget(container);

        remove = new QToolButton(frame);
        remove->setObjectName(QString::fromUtf8("remove"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(remove->sizePolicy().hasHeightForWidth());
        remove->setSizePolicy(sizePolicy2);

        layout_frame->addWidget(remove);


        verticalLayout->addWidget(frame);


        retranslateUi(SmartPlaylistSearchTermWidget);

        QMetaObject::connectSlotsByName(SmartPlaylistSearchTermWidget);
    } // setupUi

    void retranslateUi(QWidget *SmartPlaylistSearchTermWidget)
    {
        SmartPlaylistSearchTermWidget->setWindowTitle(QCoreApplication::translate("SmartPlaylistSearchTermWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("SmartPlaylistSearchTermWidget", "and", nullptr));
        label_2->setText(QCoreApplication::translate("SmartPlaylistSearchTermWidget", "ago", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SmartPlaylistSearchTermWidget: public Ui_SmartPlaylistSearchTermWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHTERMWIDGET_H
