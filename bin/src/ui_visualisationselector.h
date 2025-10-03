/********************************************************************************
** Form generated from reading UI file 'visualisationselector.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISUALISATIONSELECTOR_H
#define UI_VISUALISATIONSELECTOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VisualisationSelector
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *mode;
    QLabel *label_2;
    QSpinBox *delay;
    QListView *list;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *VisualisationSelector)
    {
        if (VisualisationSelector->objectName().isEmpty())
            VisualisationSelector->setObjectName(QString::fromUtf8("VisualisationSelector"));
        VisualisationSelector->resize(595, 475);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        VisualisationSelector->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(VisualisationSelector);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(VisualisationSelector);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        mode = new QComboBox(VisualisationSelector);
        mode->addItem(QString());
        mode->addItem(QString());
        mode->setObjectName(QString::fromUtf8("mode"));

        formLayout->setWidget(0, QFormLayout::FieldRole, mode);

        label_2 = new QLabel(VisualisationSelector);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        delay = new QSpinBox(VisualisationSelector);
        delay->setObjectName(QString::fromUtf8("delay"));
        delay->setMinimum(2);
        delay->setMaximum(120);
        delay->setValue(15);

        formLayout->setWidget(1, QFormLayout::FieldRole, delay);


        verticalLayout->addLayout(formLayout);

        list = new QListView(VisualisationSelector);
        list->setObjectName(QString::fromUtf8("list"));
        list->setEnabled(false);
        list->setAlternatingRowColors(true);
        list->setSelectionBehavior(QAbstractItemView::SelectRows);
        list->setUniformItemSizes(true);

        verticalLayout->addWidget(list);

        buttonBox = new QDialogButtonBox(VisualisationSelector);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(mode, delay);
        QWidget::setTabOrder(delay, list);
        QWidget::setTabOrder(list, buttonBox);

        retranslateUi(VisualisationSelector);
        QObject::connect(buttonBox, SIGNAL(accepted()), VisualisationSelector, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VisualisationSelector, SLOT(reject()));

        QMetaObject::connectSlotsByName(VisualisationSelector);
    } // setupUi

    void retranslateUi(QDialog *VisualisationSelector)
    {
        VisualisationSelector->setWindowTitle(QCoreApplication::translate("VisualisationSelector", "Select visualizations", nullptr));
        label->setText(QCoreApplication::translate("VisualisationSelector", "Visualization mode", nullptr));
        mode->setItemText(0, QCoreApplication::translate("VisualisationSelector", "Random visualization", nullptr));
        mode->setItemText(1, QCoreApplication::translate("VisualisationSelector", "Choose from the list", nullptr));

        label_2->setText(QCoreApplication::translate("VisualisationSelector", "Delay between visualizations", nullptr));
        delay->setSuffix(QCoreApplication::translate("VisualisationSelector", " seconds", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VisualisationSelector: public Ui_VisualisationSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISUALISATIONSELECTOR_H
