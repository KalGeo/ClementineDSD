/********************************************************************************
** Form generated from reading UI file 'transcodedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODEDIALOG_H
#define UI_TRANSCODEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TranscodeDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *input_group;
    QHBoxLayout *horizontalLayout;
    QTreeWidget *files;
    QVBoxLayout *verticalLayout_2;
    QPushButton *add;
    QPushButton *import;
    QPushButton *remove;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *output_group;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *format;
    QPushButton *options;
    QLabel *label_2;
    QComboBox *destination;
    QPushButton *select;
    QCheckBox *remove_original;
    QGroupBox *progress_group;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *progress_text;
    QPushButton *details;
    QProgressBar *progress_bar;
    QDialogButtonBox *button_box;

    void setupUi(QDialog *TranscodeDialog)
    {
        if (TranscodeDialog->objectName().isEmpty())
            TranscodeDialog->setObjectName(QString::fromUtf8("TranscodeDialog"));
        TranscodeDialog->resize(499, 482);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        TranscodeDialog->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(TranscodeDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        input_group = new QGroupBox(TranscodeDialog);
        input_group->setObjectName(QString::fromUtf8("input_group"));
        horizontalLayout = new QHBoxLayout(input_group);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        files = new QTreeWidget(input_group);
        files->setObjectName(QString::fromUtf8("files"));
        files->setAlternatingRowColors(true);
        files->setSelectionMode(QAbstractItemView::ExtendedSelection);
        files->setRootIsDecorated(false);
        files->setUniformRowHeights(true);
        files->setItemsExpandable(false);
        files->setAllColumnsShowFocus(true);
        files->header()->setStretchLastSection(false);

        horizontalLayout->addWidget(files);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        add = new QPushButton(input_group);
        add->setObjectName(QString::fromUtf8("add"));

        verticalLayout_2->addWidget(add);

        import = new QPushButton(input_group);
        import->setObjectName(QString::fromUtf8("import"));

        verticalLayout_2->addWidget(import);

        remove = new QPushButton(input_group);
        remove->setObjectName(QString::fromUtf8("remove"));

        verticalLayout_2->addWidget(remove);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addWidget(input_group);

        output_group = new QGroupBox(TranscodeDialog);
        output_group->setObjectName(QString::fromUtf8("output_group"));
        gridLayout = new QGridLayout(output_group);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(output_group);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        format = new QComboBox(output_group);
        format->setObjectName(QString::fromUtf8("format"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(format->sizePolicy().hasHeightForWidth());
        format->setSizePolicy(sizePolicy);

        gridLayout->addWidget(format, 0, 1, 1, 1);

        options = new QPushButton(output_group);
        options->setObjectName(QString::fromUtf8("options"));

        gridLayout->addWidget(options, 0, 2, 1, 1);

        label_2 = new QLabel(output_group);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        destination = new QComboBox(output_group);
        destination->addItem(QString());
        destination->setObjectName(QString::fromUtf8("destination"));
        destination->setEnabled(true);
        sizePolicy.setHeightForWidth(destination->sizePolicy().hasHeightForWidth());
        destination->setSizePolicy(sizePolicy);

        gridLayout->addWidget(destination, 1, 1, 1, 1);

        select = new QPushButton(output_group);
        select->setObjectName(QString::fromUtf8("select"));

        gridLayout->addWidget(select, 1, 2, 1, 1);

        remove_original = new QCheckBox(output_group);
        remove_original->setObjectName(QString::fromUtf8("remove_original"));

        gridLayout->addWidget(remove_original, 2, 1, 1, 1);


        verticalLayout_3->addWidget(output_group);

        progress_group = new QGroupBox(TranscodeDialog);
        progress_group->setObjectName(QString::fromUtf8("progress_group"));
        verticalLayout = new QVBoxLayout(progress_group);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        progress_text = new QLabel(progress_group);
        progress_text->setObjectName(QString::fromUtf8("progress_text"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(progress_text->sizePolicy().hasHeightForWidth());
        progress_text->setSizePolicy(sizePolicy1);
        progress_text->setTextFormat(Qt::RichText);

        horizontalLayout_2->addWidget(progress_text);

        details = new QPushButton(progress_group);
        details->setObjectName(QString::fromUtf8("details"));

        horizontalLayout_2->addWidget(details);


        verticalLayout->addLayout(horizontalLayout_2);

        progress_bar = new QProgressBar(progress_group);
        progress_bar->setObjectName(QString::fromUtf8("progress_bar"));

        verticalLayout->addWidget(progress_bar);


        verticalLayout_3->addWidget(progress_group);

        button_box = new QDialogButtonBox(TranscodeDialog);
        button_box->setObjectName(QString::fromUtf8("button_box"));
        button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Close);

        verticalLayout_3->addWidget(button_box);

        QWidget::setTabOrder(files, add);
        QWidget::setTabOrder(add, import);
        QWidget::setTabOrder(import, remove);
        QWidget::setTabOrder(remove, format);
        QWidget::setTabOrder(format, options);
        QWidget::setTabOrder(options, destination);
        QWidget::setTabOrder(destination, select);
        QWidget::setTabOrder(select, details);

        retranslateUi(TranscodeDialog);

        QMetaObject::connectSlotsByName(TranscodeDialog);
    } // setupUi

    void retranslateUi(QDialog *TranscodeDialog)
    {
        TranscodeDialog->setWindowTitle(QCoreApplication::translate("TranscodeDialog", "Transcode Music", nullptr));
        input_group->setTitle(QCoreApplication::translate("TranscodeDialog", "Files to transcode", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = files->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("TranscodeDialog", "Directory", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("TranscodeDialog", "Filename", nullptr));
        add->setText(QCoreApplication::translate("TranscodeDialog", "Add file...", nullptr));
#if QT_CONFIG(tooltip)
        import->setToolTip(QCoreApplication::translate("TranscodeDialog", "Add all tracks from a directory and all its subdirectories", nullptr));
#endif // QT_CONFIG(tooltip)
        import->setText(QCoreApplication::translate("TranscodeDialog", "Add directory...", nullptr));
        remove->setText(QCoreApplication::translate("TranscodeDialog", "Remove", nullptr));
        output_group->setTitle(QCoreApplication::translate("TranscodeDialog", "Output options", nullptr));
        label->setText(QCoreApplication::translate("TranscodeDialog", "Audio format", nullptr));
        options->setText(QCoreApplication::translate("TranscodeDialog", "Options...", nullptr));
        label_2->setText(QCoreApplication::translate("TranscodeDialog", "Destination", nullptr));
        destination->setItemText(0, QCoreApplication::translate("TranscodeDialog", "Alongside the originals", nullptr));

        select->setText(QCoreApplication::translate("TranscodeDialog", "Select...", nullptr));
#if QT_CONFIG(tooltip)
        remove_original->setToolTip(QCoreApplication::translate("TranscodeDialog", "If enabled the original files will be removed. If transcoded files have the same file extension and the destination is the same directory as the original files, the original files will be replaced.", nullptr));
#endif // QT_CONFIG(tooltip)
        remove_original->setText(QCoreApplication::translate("TranscodeDialog", "Remove or replace original files ", nullptr));
        progress_group->setTitle(QCoreApplication::translate("TranscodeDialog", "Progress", nullptr));
        details->setText(QCoreApplication::translate("TranscodeDialog", "Details...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TranscodeDialog: public Ui_TranscodeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODEDIALOG_H
