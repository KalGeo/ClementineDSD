/********************************************************************************
** Form generated from reading UI file 'ripcddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIPCDDIALOG_H
#define UI_RIPCDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include "widgets/filenameformatwidget.h"

QT_BEGIN_NAMESPACE

class Ui_RipCDDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *input_group;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *cd_drive_group;
    QSpacerItem *cd_drive_spacer_left;
    QLabel *cd_drive_label;
    QComboBox *cd_drive_selection;
    QSpacerItem *cd_drive_spacer_right;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *select_all_button;
    QPushButton *select_none_button;
    QPushButton *invert_selection_button;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidget;
    QGridLayout *gridLayout_2;
    QLabel *year_label;
    QLabel *disc_label;
    QLabel *album_label;
    QLineEdit *albumLineEdit;
    QLineEdit *discLineEdit;
    QLineEdit *yearLineEdit;
    QLabel *artist_label;
    QLineEdit *genreLineEdit;
    QLabel *genre_label;
    QLineEdit *artistLineEdit;
    FileNameFormatWidget *naming_group;
    QGroupBox *output_group;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QComboBox *destination;
    QComboBox *format;
    QPushButton *select;
    QPushButton *options;
    QGroupBox *progress_group;
    QVBoxLayout *verticalLayout_3;
    QProgressBar *progress_bar;
    QDialogButtonBox *button_box;

    void setupUi(QDialog *RipCDDialog)
    {
        if (RipCDDialog->objectName().isEmpty())
            RipCDDialog->setObjectName(QString::fromUtf8("RipCDDialog"));
        RipCDDialog->setWindowModality(Qt::NonModal);
        RipCDDialog->resize(600, 800);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        RipCDDialog->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(RipCDDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        input_group = new QGroupBox(RipCDDialog);
        input_group->setObjectName(QString::fromUtf8("input_group"));
        verticalLayout = new QVBoxLayout(input_group);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cd_drive_group = new QHBoxLayout();
        cd_drive_group->setObjectName(QString::fromUtf8("cd_drive_group"));
        cd_drive_group->setSizeConstraint(QLayout::SetMinimumSize);
        cd_drive_spacer_left = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        cd_drive_group->addItem(cd_drive_spacer_left);

        cd_drive_label = new QLabel(input_group);
        cd_drive_label->setObjectName(QString::fromUtf8("cd_drive_label"));

        cd_drive_group->addWidget(cd_drive_label);

        cd_drive_selection = new QComboBox(input_group);
        cd_drive_selection->setObjectName(QString::fromUtf8("cd_drive_selection"));

        cd_drive_group->addWidget(cd_drive_selection);

        cd_drive_spacer_right = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        cd_drive_group->addItem(cd_drive_spacer_right);


        verticalLayout->addLayout(cd_drive_group);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        select_all_button = new QPushButton(input_group);
        select_all_button->setObjectName(QString::fromUtf8("select_all_button"));

        horizontalLayout->addWidget(select_all_button);

        select_none_button = new QPushButton(input_group);
        select_none_button->setObjectName(QString::fromUtf8("select_none_button"));

        horizontalLayout->addWidget(select_none_button);

        invert_selection_button = new QPushButton(input_group);
        invert_selection_button->setObjectName(QString::fromUtf8("invert_selection_button"));

        horizontalLayout->addWidget(invert_selection_button);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_3->addLayout(horizontalLayout, 1, 0, 1, 1);

        tableWidget = new QTableWidget(input_group);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->setColumnCount(5);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setMinimumSectionSize(4);
        tableWidget->horizontalHeader()->setDefaultSectionSize(20);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        gridLayout_3->addWidget(tableWidget, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, -1, -1, 0);
        year_label = new QLabel(input_group);
        year_label->setObjectName(QString::fromUtf8("year_label"));

        gridLayout_2->addWidget(year_label, 2, 3, 1, 1, Qt::AlignLeft);

        disc_label = new QLabel(input_group);
        disc_label->setObjectName(QString::fromUtf8("disc_label"));

        gridLayout_2->addWidget(disc_label, 2, 5, 1, 1);

        album_label = new QLabel(input_group);
        album_label->setObjectName(QString::fromUtf8("album_label"));

        gridLayout_2->addWidget(album_label, 0, 0, 1, 1);

        albumLineEdit = new QLineEdit(input_group);
        albumLineEdit->setObjectName(QString::fromUtf8("albumLineEdit"));

        gridLayout_2->addWidget(albumLineEdit, 0, 1, 1, 6);

        discLineEdit = new QLineEdit(input_group);
        discLineEdit->setObjectName(QString::fromUtf8("discLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(discLineEdit->sizePolicy().hasHeightForWidth());
        discLineEdit->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(discLineEdit, 2, 6, 1, 1);

        yearLineEdit = new QLineEdit(input_group);
        yearLineEdit->setObjectName(QString::fromUtf8("yearLineEdit"));

        gridLayout_2->addWidget(yearLineEdit, 2, 4, 1, 1, Qt::AlignLeft);

        artist_label = new QLabel(input_group);
        artist_label->setObjectName(QString::fromUtf8("artist_label"));

        gridLayout_2->addWidget(artist_label, 1, 0, 1, 1);

        genreLineEdit = new QLineEdit(input_group);
        genreLineEdit->setObjectName(QString::fromUtf8("genreLineEdit"));

        gridLayout_2->addWidget(genreLineEdit, 2, 1, 1, 2);

        genre_label = new QLabel(input_group);
        genre_label->setObjectName(QString::fromUtf8("genre_label"));

        gridLayout_2->addWidget(genre_label, 2, 0, 1, 1, Qt::AlignLeft);

        artistLineEdit = new QLineEdit(input_group);
        artistLineEdit->setObjectName(QString::fromUtf8("artistLineEdit"));

        gridLayout_2->addWidget(artistLineEdit, 1, 1, 1, 6);


        verticalLayout->addLayout(gridLayout_2);


        verticalLayout_2->addWidget(input_group);

        naming_group = new FileNameFormatWidget(RipCDDialog);
        naming_group->setObjectName(QString::fromUtf8("naming_group"));

        verticalLayout_2->addWidget(naming_group);

        output_group = new QGroupBox(RipCDDialog);
        output_group->setObjectName(QString::fromUtf8("output_group"));
        gridLayout = new QGridLayout(output_group);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(output_group);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(output_group);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        destination = new QComboBox(output_group);
        destination->setObjectName(QString::fromUtf8("destination"));
        destination->setEnabled(true);
        sizePolicy1.setHeightForWidth(destination->sizePolicy().hasHeightForWidth());
        destination->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(destination, 1, 1, 1, 1);

        format = new QComboBox(output_group);
        format->setObjectName(QString::fromUtf8("format"));
        sizePolicy1.setHeightForWidth(format->sizePolicy().hasHeightForWidth());
        format->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(format, 0, 1, 1, 1);

        select = new QPushButton(output_group);
        select->setObjectName(QString::fromUtf8("select"));

        gridLayout->addWidget(select, 1, 2, 1, 1);

        options = new QPushButton(output_group);
        options->setObjectName(QString::fromUtf8("options"));

        gridLayout->addWidget(options, 0, 2, 1, 1);


        verticalLayout_2->addWidget(output_group);

        progress_group = new QGroupBox(RipCDDialog);
        progress_group->setObjectName(QString::fromUtf8("progress_group"));
        verticalLayout_3 = new QVBoxLayout(progress_group);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        progress_bar = new QProgressBar(progress_group);
        progress_bar->setObjectName(QString::fromUtf8("progress_bar"));

        verticalLayout_3->addWidget(progress_bar);


        verticalLayout_2->addWidget(progress_group);

        button_box = new QDialogButtonBox(RipCDDialog);
        button_box->setObjectName(QString::fromUtf8("button_box"));
        button_box->setOrientation(Qt::Horizontal);
        button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Close);

        verticalLayout_2->addWidget(button_box);

        QWidget::setTabOrder(tableWidget, select_all_button);
        QWidget::setTabOrder(select_all_button, select_none_button);
        QWidget::setTabOrder(select_none_button, invert_selection_button);
        QWidget::setTabOrder(invert_selection_button, albumLineEdit);
        QWidget::setTabOrder(albumLineEdit, artistLineEdit);
        QWidget::setTabOrder(artistLineEdit, genreLineEdit);
        QWidget::setTabOrder(genreLineEdit, yearLineEdit);
        QWidget::setTabOrder(yearLineEdit, discLineEdit);
        QWidget::setTabOrder(discLineEdit, format);
        QWidget::setTabOrder(format, options);
        QWidget::setTabOrder(options, destination);
        QWidget::setTabOrder(destination, select);
        QWidget::setTabOrder(select, button_box);

        retranslateUi(RipCDDialog);

        QMetaObject::connectSlotsByName(RipCDDialog);
    } // setupUi

    void retranslateUi(QDialog *RipCDDialog)
    {
        RipCDDialog->setWindowTitle(QCoreApplication::translate("RipCDDialog", "Dialog", nullptr));
        input_group->setTitle(QCoreApplication::translate("RipCDDialog", "Input options", nullptr));
        cd_drive_label->setText(QCoreApplication::translate("RipCDDialog", "CD Drive", nullptr));
        select_all_button->setText(QCoreApplication::translate("RipCDDialog", "Select All", nullptr));
        select_none_button->setText(QCoreApplication::translate("RipCDDialog", "Select None", nullptr));
        invert_selection_button->setText(QCoreApplication::translate("RipCDDialog", "Invert Selection", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("RipCDDialog", "Rip", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("RipCDDialog", "Track", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("RipCDDialog", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("RipCDDialog", "Duration", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("RipCDDialog", "Filename Preview", nullptr));
        year_label->setText(QCoreApplication::translate("RipCDDialog", "Year", nullptr));
        disc_label->setText(QCoreApplication::translate("RipCDDialog", "Disc", nullptr));
        album_label->setText(QCoreApplication::translate("RipCDDialog", "Album", nullptr));
        artist_label->setText(QCoreApplication::translate("RipCDDialog", "Artist", nullptr));
        genre_label->setText(QCoreApplication::translate("RipCDDialog", "Genre", nullptr));
        output_group->setTitle(QCoreApplication::translate("RipCDDialog", "Output options", nullptr));
        label_2->setText(QCoreApplication::translate("RipCDDialog", "Destination", nullptr));
        label->setText(QCoreApplication::translate("RipCDDialog", "Audio format", nullptr));
        select->setText(QCoreApplication::translate("RipCDDialog", "Select...", nullptr));
        options->setText(QCoreApplication::translate("RipCDDialog", "Options...", nullptr));
        progress_group->setTitle(QCoreApplication::translate("RipCDDialog", "Progress", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RipCDDialog: public Ui_RipCDDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIPCDDIALOG_H
