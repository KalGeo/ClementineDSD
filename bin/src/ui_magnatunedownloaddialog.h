/********************************************************************************
** Form generated from reading UI file 'magnatunedownloaddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAGNATUNEDOWNLOADDIALOG_H
#define UI_MAGNATUNEDOWNLOADDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MagnatuneDownloadDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTreeWidget *albums;
    QWidget *options;
    QFormLayout *formLayout;
    QLabel *label_2;
    QComboBox *format;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *directory;
    QPushButton *browse;
    QDialogButtonBox *button_box;

    void setupUi(QDialog *MagnatuneDownloadDialog)
    {
        if (MagnatuneDownloadDialog->objectName().isEmpty())
            MagnatuneDownloadDialog->setObjectName(QString::fromUtf8("MagnatuneDownloadDialog"));
        MagnatuneDownloadDialog->resize(502, 330);
        verticalLayout = new QVBoxLayout(MagnatuneDownloadDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(MagnatuneDownloadDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        albums = new QTreeWidget(MagnatuneDownloadDialog);
        albums->setObjectName(QString::fromUtf8("albums"));
        albums->setSelectionMode(QAbstractItemView::NoSelection);
        albums->setRootIsDecorated(false);
        albums->setAllColumnsShowFocus(true);
        albums->header()->setVisible(false);

        verticalLayout->addWidget(albums);

        options = new QWidget(MagnatuneDownloadDialog);
        options->setObjectName(QString::fromUtf8("options"));
        formLayout = new QFormLayout(options);
        formLayout->setContentsMargins(0, 0, 0, 0);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(options);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        format = new QComboBox(options);
        format->addItem(QString());
        format->addItem(QString());
        format->addItem(QString());
        format->addItem(QString());
        format->addItem(QString());
        format->setObjectName(QString::fromUtf8("format"));

        formLayout->setWidget(0, QFormLayout::FieldRole, format);

        label_3 = new QLabel(options);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        directory = new QLineEdit(options);
        directory->setObjectName(QString::fromUtf8("directory"));

        horizontalLayout->addWidget(directory);

        browse = new QPushButton(options);
        browse->setObjectName(QString::fromUtf8("browse"));

        horizontalLayout->addWidget(browse);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);


        verticalLayout->addWidget(options);

        button_box = new QDialogButtonBox(MagnatuneDownloadDialog);
        button_box->setObjectName(QString::fromUtf8("button_box"));
        button_box->setOrientation(Qt::Horizontal);
        button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Close|QDialogButtonBox::Ok);

        verticalLayout->addWidget(button_box);

        QWidget::setTabOrder(albums, format);
        QWidget::setTabOrder(format, directory);
        QWidget::setTabOrder(directory, browse);
        QWidget::setTabOrder(browse, button_box);

        retranslateUi(MagnatuneDownloadDialog);
        QObject::connect(button_box, SIGNAL(accepted()), MagnatuneDownloadDialog, SLOT(accept()));
        QObject::connect(button_box, SIGNAL(rejected()), MagnatuneDownloadDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MagnatuneDownloadDialog);
    } // setupUi

    void retranslateUi(QDialog *MagnatuneDownloadDialog)
    {
        MagnatuneDownloadDialog->setWindowTitle(QCoreApplication::translate("MagnatuneDownloadDialog", "Magnatune Download", nullptr));
        label->setText(QCoreApplication::translate("MagnatuneDownloadDialog", "You are about to download the following albums", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = albums->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("MagnatuneDownloadDialog", "Progress", "Category label"));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MagnatuneDownloadDialog", "Name", "Category label"));
        label_2->setText(QCoreApplication::translate("MagnatuneDownloadDialog", "Format", nullptr));
        format->setItemText(0, QCoreApplication::translate("MagnatuneDownloadDialog", "Ogg Vorbis", nullptr));
        format->setItemText(1, QCoreApplication::translate("MagnatuneDownloadDialog", "FLAC", nullptr));
        format->setItemText(2, QCoreApplication::translate("MagnatuneDownloadDialog", "WAV", nullptr));
        format->setItemText(3, QCoreApplication::translate("MagnatuneDownloadDialog", "VBR MP3", nullptr));
        format->setItemText(4, QCoreApplication::translate("MagnatuneDownloadDialog", "128k MP3", nullptr));

        label_3->setText(QCoreApplication::translate("MagnatuneDownloadDialog", "Directory", nullptr));
        browse->setText(QCoreApplication::translate("MagnatuneDownloadDialog", "Browse...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MagnatuneDownloadDialog: public Ui_MagnatuneDownloadDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAGNATUNEDOWNLOADDIALOG_H
