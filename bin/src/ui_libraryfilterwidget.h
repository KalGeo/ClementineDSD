/********************************************************************************
** Form generated from reading UI file 'libraryfilterwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARYFILTERWIDGET_H
#define UI_LIBRARYFILTERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "3rdparty/qocoa/qsearchfield.h"

QT_BEGIN_NAMESPACE

class Ui_LibraryFilterWidget
{
public:
    QAction *filter_age_all;
    QAction *filter_age_today;
    QAction *filter_age_week;
    QAction *filter_age_three_months;
    QAction *filter_age_year;
    QAction *filter_age_month;
    QAction *save_grouping;
    QAction *manage_groupings;
    QHBoxLayout *horizontalLayout;
    QSearchField *filter;
    QToolButton *options;

    void setupUi(QWidget *LibraryFilterWidget)
    {
        if (LibraryFilterWidget->objectName().isEmpty())
            LibraryFilterWidget->setObjectName(QString::fromUtf8("LibraryFilterWidget"));
        LibraryFilterWidget->resize(400, 30);
        filter_age_all = new QAction(LibraryFilterWidget);
        filter_age_all->setObjectName(QString::fromUtf8("filter_age_all"));
        filter_age_all->setCheckable(true);
        filter_age_all->setChecked(true);
        filter_age_today = new QAction(LibraryFilterWidget);
        filter_age_today->setObjectName(QString::fromUtf8("filter_age_today"));
        filter_age_today->setCheckable(true);
        filter_age_week = new QAction(LibraryFilterWidget);
        filter_age_week->setObjectName(QString::fromUtf8("filter_age_week"));
        filter_age_week->setCheckable(true);
        filter_age_three_months = new QAction(LibraryFilterWidget);
        filter_age_three_months->setObjectName(QString::fromUtf8("filter_age_three_months"));
        filter_age_three_months->setCheckable(true);
        filter_age_year = new QAction(LibraryFilterWidget);
        filter_age_year->setObjectName(QString::fromUtf8("filter_age_year"));
        filter_age_year->setCheckable(true);
        filter_age_month = new QAction(LibraryFilterWidget);
        filter_age_month->setObjectName(QString::fromUtf8("filter_age_month"));
        filter_age_month->setCheckable(true);
        save_grouping = new QAction(LibraryFilterWidget);
        save_grouping->setObjectName(QString::fromUtf8("save_grouping"));
        manage_groupings = new QAction(LibraryFilterWidget);
        manage_groupings->setObjectName(QString::fromUtf8("manage_groupings"));
        horizontalLayout = new QHBoxLayout(LibraryFilterWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        filter = new QSearchField(LibraryFilterWidget);
        filter->setObjectName(QString::fromUtf8("filter"));

        horizontalLayout->addWidget(filter);

        options = new QToolButton(LibraryFilterWidget);
        options->setObjectName(QString::fromUtf8("options"));
        options->setIconSize(QSize(16, 16));
        options->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout->addWidget(options);


        retranslateUi(LibraryFilterWidget);

        QMetaObject::connectSlotsByName(LibraryFilterWidget);
    } // setupUi

    void retranslateUi(QWidget *LibraryFilterWidget)
    {
        LibraryFilterWidget->setWindowTitle(QCoreApplication::translate("LibraryFilterWidget", "Form", nullptr));
        filter_age_all->setText(QCoreApplication::translate("LibraryFilterWidget", "Entire collection", nullptr));
        filter_age_today->setText(QCoreApplication::translate("LibraryFilterWidget", "Added today", nullptr));
        filter_age_week->setText(QCoreApplication::translate("LibraryFilterWidget", "Added this week", nullptr));
        filter_age_three_months->setText(QCoreApplication::translate("LibraryFilterWidget", "Added within three months", nullptr));
#if QT_CONFIG(tooltip)
        filter_age_three_months->setToolTip(QCoreApplication::translate("LibraryFilterWidget", "Added within three months", nullptr));
#endif // QT_CONFIG(tooltip)
        filter_age_year->setText(QCoreApplication::translate("LibraryFilterWidget", "Added this year", nullptr));
        filter_age_month->setText(QCoreApplication::translate("LibraryFilterWidget", "Added this month", nullptr));
        save_grouping->setText(QCoreApplication::translate("LibraryFilterWidget", "Save current grouping", nullptr));
        manage_groupings->setText(QCoreApplication::translate("LibraryFilterWidget", "Manage saved groupings", nullptr));
#if QT_CONFIG(tooltip)
        filter->setToolTip(QCoreApplication::translate("LibraryFilterWidget", "<html><head/><body><p>Prefix a word with a field name to limit the search to that field, e.g. <span style=\" font-weight:600;\">artist:</span><span style=\" font-style:italic;\">Bode</span> searches the library for all artists that contain the word Bode, <span style=\" font-weight:600;\">playcount:</span><span style=\" font-style:italic;\">&gt;=2</span> searches the library for songs played at least twice, <span style=\" font-weight:600;\">lastplayed:</span>&lt;<span style=\" font-style:italic;\">1h30m</span> searches the library for songs played in the last 180 minutes.</p><p><span style=\" font-weight:600;\">Available fields: </span><span style=\" font-style:italic;\">%1</span>.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        filter->setProperty("placeholderText", QVariant(QCoreApplication::translate("LibraryFilterWidget", "Enter search terms here", nullptr)));
    } // retranslateUi

};

namespace Ui {
    class LibraryFilterWidget: public Ui_LibraryFilterWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARYFILTERWIDGET_H
