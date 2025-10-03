/********************************************************************************
** Form generated from reading UI file 'librarysettingspage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARYSETTINGSPAGE_H
#define UI_LIBRARYSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LibrarySettingsPage
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QListView *list;
    QVBoxLayout *verticalLayout;
    QPushButton *add;
    QPushButton *remove;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *startup_scan;
    QCheckBox *monitor;
    QCheckBox *save_ratings_in_file;
    QCheckBox *save_statistics_in_file;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *sync_stats_button;
    QSpacerItem *horizontalSpacer;
    QLabel *skip_extensions_label;
    QLineEdit *skip_extensions;
    QLabel *cover_art_patterns_label;
    QLineEdit *cover_art_patterns;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *auto_open;
    QCheckBox *pretty_covers;
    QCheckBox *show_dividers;

    void setupUi(QWidget *LibrarySettingsPage)
    {
        if (LibrarySettingsPage->objectName().isEmpty())
            LibrarySettingsPage->setObjectName(QString::fromUtf8("LibrarySettingsPage"));
        LibrarySettingsPage->resize(509, 600);
        verticalLayout_3 = new QVBoxLayout(LibrarySettingsPage);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(LibrarySettingsPage);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        list = new QListView(LibrarySettingsPage);
        list->setObjectName(QString::fromUtf8("list"));
        list->setIconSize(QSize(16, 16));
        list->setUniformItemSizes(true);

        horizontalLayout->addWidget(list);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        add = new QPushButton(LibrarySettingsPage);
        add->setObjectName(QString::fromUtf8("add"));
        add->setFlat(false);

        verticalLayout->addWidget(add);

        remove = new QPushButton(LibrarySettingsPage);
        remove->setObjectName(QString::fromUtf8("remove"));

        verticalLayout->addWidget(remove);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        groupBox_2 = new QGroupBox(LibrarySettingsPage);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        startup_scan = new QCheckBox(groupBox_2);
        startup_scan->setObjectName(QString::fromUtf8("startup_scan"));

        verticalLayout_4->addWidget(startup_scan);

        monitor = new QCheckBox(groupBox_2);
        monitor->setObjectName(QString::fromUtf8("monitor"));

        verticalLayout_4->addWidget(monitor);

        save_ratings_in_file = new QCheckBox(groupBox_2);
        save_ratings_in_file->setObjectName(QString::fromUtf8("save_ratings_in_file"));

        verticalLayout_4->addWidget(save_ratings_in_file);

        save_statistics_in_file = new QCheckBox(groupBox_2);
        save_statistics_in_file->setObjectName(QString::fromUtf8("save_statistics_in_file"));

        verticalLayout_4->addWidget(save_statistics_in_file);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        sync_stats_button = new QPushButton(groupBox_2);
        sync_stats_button->setObjectName(QString::fromUtf8("sync_stats_button"));

        horizontalLayout_5->addWidget(sync_stats_button);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_5);

        skip_extensions_label = new QLabel(groupBox_2);
        skip_extensions_label->setObjectName(QString::fromUtf8("skip_extensions_label"));

        verticalLayout_4->addWidget(skip_extensions_label);

        skip_extensions = new QLineEdit(groupBox_2);
        skip_extensions->setObjectName(QString::fromUtf8("skip_extensions"));

        verticalLayout_4->addWidget(skip_extensions);

        cover_art_patterns_label = new QLabel(groupBox_2);
        cover_art_patterns_label->setObjectName(QString::fromUtf8("cover_art_patterns_label"));

        verticalLayout_4->addWidget(cover_art_patterns_label);

        cover_art_patterns = new QLineEdit(groupBox_2);
        cover_art_patterns->setObjectName(QString::fromUtf8("cover_art_patterns"));

        verticalLayout_4->addWidget(cover_art_patterns);


        verticalLayout_3->addWidget(groupBox_2);

        groupBox = new QGroupBox(LibrarySettingsPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        auto_open = new QCheckBox(groupBox);
        auto_open->setObjectName(QString::fromUtf8("auto_open"));

        verticalLayout_2->addWidget(auto_open);

        pretty_covers = new QCheckBox(groupBox);
        pretty_covers->setObjectName(QString::fromUtf8("pretty_covers"));

        verticalLayout_2->addWidget(pretty_covers);

        show_dividers = new QCheckBox(groupBox);
        show_dividers->setObjectName(QString::fromUtf8("show_dividers"));

        verticalLayout_2->addWidget(show_dividers);


        verticalLayout_3->addWidget(groupBox);

        QWidget::setTabOrder(list, add);
        QWidget::setTabOrder(add, remove);

        retranslateUi(LibrarySettingsPage);

        QMetaObject::connectSlotsByName(LibrarySettingsPage);
    } // setupUi

    void retranslateUi(QWidget *LibrarySettingsPage)
    {
        LibrarySettingsPage->setWindowTitle(QCoreApplication::translate("LibrarySettingsPage", "Music Library", nullptr));
        label->setText(QCoreApplication::translate("LibrarySettingsPage", "These folders will be scanned for music to make up your library", nullptr));
        add->setText(QCoreApplication::translate("LibrarySettingsPage", "Add new folder...", nullptr));
        remove->setText(QCoreApplication::translate("LibrarySettingsPage", "Remove folder", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("LibrarySettingsPage", "Automatic updating", nullptr));
        startup_scan->setText(QCoreApplication::translate("LibrarySettingsPage", "Update the library when Clementine starts", nullptr));
        monitor->setText(QCoreApplication::translate("LibrarySettingsPage", "Monitor the library for changes", nullptr));
        save_ratings_in_file->setText(QCoreApplication::translate("LibrarySettingsPage", "Save ratings in file tags when possible", nullptr));
#if QT_CONFIG(tooltip)
        save_statistics_in_file->setToolTip(QCoreApplication::translate("LibrarySettingsPage", "<html><head/><body><p>If not checked, Clementine will  try to save your ratings and other statistics only in a separate database and don't modify your files.</p><p>If checked, it will save statistics both in database and directly into the file each time they changed.</p><p>Please note it might not work for every format and, as there is no standard for doing so, other music players might not be able to read them.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        save_statistics_in_file->setText(QCoreApplication::translate("LibrarySettingsPage", "Save statistics in file tags when possible", nullptr));
#if QT_CONFIG(tooltip)
        sync_stats_button->setToolTip(QCoreApplication::translate("LibrarySettingsPage", "<html><head/><body><p>This will write songs' ratings and statistics into files tags for all your library's songs.</p><p>This is not needed if the &quot;Save ratings and statistics in file tags&quot; option has always been activated.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        sync_stats_button->setText(QCoreApplication::translate("LibrarySettingsPage", "Synchronize statistics to files now", nullptr));
        skip_extensions_label->setText(QCoreApplication::translate("LibrarySettingsPage", "Skip files with these extensions (comma separated, case insensitive)", nullptr));
        cover_art_patterns_label->setText(QCoreApplication::translate("LibrarySettingsPage", "Preferred album art filenames (comma separated)", nullptr));
#if QT_CONFIG(tooltip)
        cover_art_patterns->setToolTip(QCoreApplication::translate("LibrarySettingsPage", "When looking for album art Clementine will first look for picture files that contain one of these words.\n"
"If there are no matches then it will use the largest image in the directory.", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("LibrarySettingsPage", "Display options", nullptr));
        auto_open->setText(QCoreApplication::translate("LibrarySettingsPage", "Automatically open single categories in the library tree", nullptr));
        pretty_covers->setText(QCoreApplication::translate("LibrarySettingsPage", "Show cover art in library", nullptr));
        show_dividers->setText(QCoreApplication::translate("LibrarySettingsPage", "Show dividers", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LibrarySettingsPage: public Ui_LibrarySettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARYSETTINGSPAGE_H
