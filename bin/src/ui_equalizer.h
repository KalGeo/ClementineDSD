/********************************************************************************
** Form generated from reading UI file 'equalizer.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUALIZER_H
#define UI_EQUALIZER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Equalizer
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *preset;
    QToolButton *preset_save;
    QToolButton *preset_del;
    QFrame *line;
    QCheckBox *enable;
    QWidget *slider_container;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *slider_label_layout;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QSlider *balance_slider;

    void setupUi(QDialog *Equalizer)
    {
        if (Equalizer->objectName().isEmpty())
            Equalizer->setObjectName(QString::fromUtf8("Equalizer"));
        Equalizer->resize(435, 265);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Equalizer->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(Equalizer);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Equalizer);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        preset = new QComboBox(Equalizer);
        preset->setObjectName(QString::fromUtf8("preset"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(preset->sizePolicy().hasHeightForWidth());
        preset->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(preset);

        preset_save = new QToolButton(Equalizer);
        preset_save->setObjectName(QString::fromUtf8("preset_save"));

        horizontalLayout->addWidget(preset_save);

        preset_del = new QToolButton(Equalizer);
        preset_del->setObjectName(QString::fromUtf8("preset_del"));

        horizontalLayout->addWidget(preset_del);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(Equalizer);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        enable = new QCheckBox(Equalizer);
        enable->setObjectName(QString::fromUtf8("enable"));

        verticalLayout->addWidget(enable);

        slider_container = new QWidget(Equalizer);
        slider_container->setObjectName(QString::fromUtf8("slider_container"));
        slider_container->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(slider_container->sizePolicy().hasHeightForWidth());
        slider_container->setSizePolicy(sizePolicy1);
        horizontalLayout_2 = new QHBoxLayout(slider_container);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));

        verticalLayout->addWidget(slider_container);

        slider_label_layout = new QHBoxLayout();
        slider_label_layout->setObjectName(QString::fromUtf8("slider_label_layout"));
        label1 = new QLabel(Equalizer);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setAlignment(Qt::AlignLeft | Qt::AlignBottom);
        QFont font;
        font.setPointSize(11);
        label1->setFont(font);

        slider_label_layout->addWidget(label1);

        label2 = new QLabel(Equalizer);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setAlignment(Qt::AlignCenter);

        slider_label_layout->addWidget(label2);

        label3 = new QLabel(Equalizer);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setAlignment(Qt::AlignRight | Qt::AlignBottom);
        label3->setFont(font);

        slider_label_layout->addWidget(label3);


        verticalLayout->addLayout(slider_label_layout);

        balance_slider = new QSlider(Equalizer);
        balance_slider->setObjectName(QString::fromUtf8("balance_slider"));
        balance_slider->setMaximum(100);
        balance_slider->setMinimum(-100);
        balance_slider->setOrientation(Qt::Horizontal);
        balance_slider->setTickPosition(QSlider::TicksBelow);
        balance_slider->setTickInterval(10);
        balance_slider->setSingleStep(10);
        balance_slider->setPageStep(100);

        verticalLayout->addWidget(balance_slider);

        QWidget::setTabOrder(preset, preset_save);

        retranslateUi(Equalizer);

        QMetaObject::connectSlotsByName(Equalizer);
    } // setupUi

    void retranslateUi(QDialog *Equalizer)
    {
        Equalizer->setWindowTitle(QCoreApplication::translate("Equalizer", "Equalizer", nullptr));
        label->setText(QCoreApplication::translate("Equalizer", "Preset:", nullptr));
#if QT_CONFIG(tooltip)
        preset_save->setToolTip(QCoreApplication::translate("Equalizer", "Save preset", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        preset_del->setToolTip(QCoreApplication::translate("Equalizer", "Delete preset", nullptr));
#endif // QT_CONFIG(tooltip)
        enable->setText(QCoreApplication::translate("Equalizer", "Enable equalizer", nullptr));
        label1->setText(QCoreApplication::translate("Equalizer", "Left", nullptr));
        label2->setText(QCoreApplication::translate("Equalizer", "Balance", nullptr));
        label3->setText(QCoreApplication::translate("Equalizer", "Right", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Equalizer: public Ui_Equalizer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUALIZER_H
