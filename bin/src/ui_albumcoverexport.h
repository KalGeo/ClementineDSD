/********************************************************************************
** Form generated from reading UI file 'albumcoverexport.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALBUMCOVEREXPORT_H
#define UI_ALBUMCOVEREXPORT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AlbumCoverExport
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *fileName;
    QCheckBox *export_downloaded;
    QCheckBox *export_embedded;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *doNotOverwrite;
    QRadioButton *overwriteAll;
    QRadioButton *overwriteSmaller;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *forceSize;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *width;
    QLabel *label_2;
    QLineEdit *height;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AlbumCoverExport)
    {
        if (AlbumCoverExport->objectName().isEmpty())
            AlbumCoverExport->setObjectName(QString::fromUtf8("AlbumCoverExport"));
        AlbumCoverExport->resize(608, 412);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AlbumCoverExport->sizePolicy().hasHeightForWidth());
        AlbumCoverExport->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        AlbumCoverExport->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(AlbumCoverExport);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(AlbumCoverExport);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        fileName = new QLineEdit(groupBox);
        fileName->setObjectName(QString::fromUtf8("fileName"));

        verticalLayout_2->addWidget(fileName);

        export_downloaded = new QCheckBox(groupBox);
        export_downloaded->setObjectName(QString::fromUtf8("export_downloaded"));
        export_downloaded->setChecked(true);

        verticalLayout_2->addWidget(export_downloaded);

        export_embedded = new QCheckBox(groupBox);
        export_embedded->setObjectName(QString::fromUtf8("export_embedded"));
        export_embedded->setChecked(false);

        verticalLayout_2->addWidget(export_embedded);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(AlbumCoverExport);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        doNotOverwrite = new QRadioButton(groupBox_2);
        doNotOverwrite->setObjectName(QString::fromUtf8("doNotOverwrite"));

        verticalLayout_3->addWidget(doNotOverwrite);

        overwriteAll = new QRadioButton(groupBox_2);
        overwriteAll->setObjectName(QString::fromUtf8("overwriteAll"));

        verticalLayout_3->addWidget(overwriteAll);

        overwriteSmaller = new QRadioButton(groupBox_2);
        overwriteSmaller->setObjectName(QString::fromUtf8("overwriteSmaller"));

        verticalLayout_3->addWidget(overwriteSmaller);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(AlbumCoverExport);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        forceSize = new QCheckBox(groupBox_3);
        forceSize->setObjectName(QString::fromUtf8("forceSize"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        forceSize->setFont(font);

        verticalLayout_4->addWidget(forceSize);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        width = new QLineEdit(groupBox_3);
        width->setObjectName(QString::fromUtf8("width"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(width->sizePolicy().hasHeightForWidth());
        width->setSizePolicy(sizePolicy1);
        width->setInputMethodHints(Qt::ImhDigitsOnly);
        width->setInputMask(QString::fromUtf8(""));
        width->setMaxLength(4);

        horizontalLayout->addWidget(width);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setText(QString::fromUtf8("\303\227"));

        horizontalLayout->addWidget(label_2);

        height = new QLineEdit(groupBox_3);
        height->setObjectName(QString::fromUtf8("height"));
        height->setInputMethodHints(Qt::ImhDigitsOnly);
        height->setInputMask(QString::fromUtf8(""));
        height->setMaxLength(4);

        horizontalLayout->addWidget(height);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(200, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox_3);

        buttonBox = new QDialogButtonBox(AlbumCoverExport);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AlbumCoverExport);
        QObject::connect(buttonBox, SIGNAL(accepted()), AlbumCoverExport, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AlbumCoverExport, SLOT(reject()));

        QMetaObject::connectSlotsByName(AlbumCoverExport);
    } // setupUi

    void retranslateUi(QDialog *AlbumCoverExport)
    {
        AlbumCoverExport->setWindowTitle(QCoreApplication::translate("AlbumCoverExport", "Export covers", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AlbumCoverExport", "Output", nullptr));
        label->setText(QCoreApplication::translate("AlbumCoverExport", "Enter a filename for exported covers (no extension):", nullptr));
        export_downloaded->setText(QCoreApplication::translate("AlbumCoverExport", "Export downloaded covers", nullptr));
        export_embedded->setText(QCoreApplication::translate("AlbumCoverExport", "Export embedded covers", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("AlbumCoverExport", "Existing covers", nullptr));
        doNotOverwrite->setText(QCoreApplication::translate("AlbumCoverExport", "Do not overwrite", nullptr));
        overwriteAll->setText(QCoreApplication::translate("AlbumCoverExport", "Overwrite all", nullptr));
        overwriteSmaller->setText(QCoreApplication::translate("AlbumCoverExport", "Overwrite smaller ones only", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("AlbumCoverExport", "Size", nullptr));
        forceSize->setText(QCoreApplication::translate("AlbumCoverExport", "Scale size", nullptr));
        label_4->setText(QCoreApplication::translate("AlbumCoverExport", "Size:", nullptr));
        label_3->setText(QCoreApplication::translate("AlbumCoverExport", "Pixel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlbumCoverExport: public Ui_AlbumCoverExport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALBUMCOVEREXPORT_H
