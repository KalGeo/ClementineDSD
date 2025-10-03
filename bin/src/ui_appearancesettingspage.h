/********************************************************************************
** Form generated from reading UI file 'appearancesettingspage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPEARANCESETTINGSPAGE_H
#define UI_APPEARANCESETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AppearanceSettingsPage
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *use_system_color_set;
    QRadioButton *use_a_custom_color_set;
    QHBoxLayout *horizontalLayout;
    QLabel *select_foreground_color_label;
    QPushButton *select_foreground_color;
    QHBoxLayout *horizontalLayout_2;
    QLabel *select_background_color_label;
    QPushButton *select_background_color;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *use_default_background;
    QRadioButton *use_album_cover_background;
    QRadioButton *use_no_background;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *use_custom_background_image;
    QLineEdit *background_image_filename;
    QPushButton *select_background_image_filename_button;
    QGridLayout *gridLayout;
    QLabel *select_background_blur_label;
    QSlider *blur_slider;
    QLabel *background_blur_radius_label;
    QLabel *select_opacity_level_label;
    QSlider *opacity_slider;
    QLabel *background_opacity_label;
    QGroupBox *moodbar_group;
    QFormLayout *formLayout;
    QCheckBox *moodbar_show;
    QLabel *label;
    QComboBox *moodbar_style;
    QCheckBox *moodbar_save;
    QCheckBox *moodbar_calculate;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *b_use_sys_icons;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *b_hide_filter_toolbar;

    void setupUi(QWidget *AppearanceSettingsPage)
    {
        if (AppearanceSettingsPage->objectName().isEmpty())
            AppearanceSettingsPage->setObjectName(QString::fromUtf8("AppearanceSettingsPage"));
        AppearanceSettingsPage->resize(596, 666);
        verticalLayout = new QVBoxLayout(AppearanceSettingsPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(AppearanceSettingsPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        use_system_color_set = new QRadioButton(groupBox);
        use_system_color_set->setObjectName(QString::fromUtf8("use_system_color_set"));

        verticalLayout_3->addWidget(use_system_color_set);

        use_a_custom_color_set = new QRadioButton(groupBox);
        use_a_custom_color_set->setObjectName(QString::fromUtf8("use_a_custom_color_set"));

        verticalLayout_3->addWidget(use_a_custom_color_set);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        select_foreground_color_label = new QLabel(groupBox);
        select_foreground_color_label->setObjectName(QString::fromUtf8("select_foreground_color_label"));
        select_foreground_color_label->setEnabled(false);

        horizontalLayout->addWidget(select_foreground_color_label);

        select_foreground_color = new QPushButton(groupBox);
        select_foreground_color->setObjectName(QString::fromUtf8("select_foreground_color"));
        select_foreground_color->setEnabled(false);

        horizontalLayout->addWidget(select_foreground_color);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        select_background_color_label = new QLabel(groupBox);
        select_background_color_label->setObjectName(QString::fromUtf8("select_background_color_label"));
        select_background_color_label->setEnabled(false);

        horizontalLayout_2->addWidget(select_background_color_label);

        select_background_color = new QPushButton(groupBox);
        select_background_color->setObjectName(QString::fromUtf8("select_background_color"));
        select_background_color->setEnabled(false);

        horizontalLayout_2->addWidget(select_background_color);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(AppearanceSettingsPage);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        use_default_background = new QRadioButton(groupBox_2);
        use_default_background->setObjectName(QString::fromUtf8("use_default_background"));

        verticalLayout_2->addWidget(use_default_background);

        use_album_cover_background = new QRadioButton(groupBox_2);
        use_album_cover_background->setObjectName(QString::fromUtf8("use_album_cover_background"));

        verticalLayout_2->addWidget(use_album_cover_background);

        use_no_background = new QRadioButton(groupBox_2);
        use_no_background->setObjectName(QString::fromUtf8("use_no_background"));

        verticalLayout_2->addWidget(use_no_background);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        use_custom_background_image = new QRadioButton(groupBox_2);
        use_custom_background_image->setObjectName(QString::fromUtf8("use_custom_background_image"));

        horizontalLayout_3->addWidget(use_custom_background_image);

        background_image_filename = new QLineEdit(groupBox_2);
        background_image_filename->setObjectName(QString::fromUtf8("background_image_filename"));
        background_image_filename->setEnabled(false);

        horizontalLayout_3->addWidget(background_image_filename);

        select_background_image_filename_button = new QPushButton(groupBox_2);
        select_background_image_filename_button->setObjectName(QString::fromUtf8("select_background_image_filename_button"));
        select_background_image_filename_button->setEnabled(false);

        horizontalLayout_3->addWidget(select_background_image_filename_button);


        verticalLayout_2->addLayout(horizontalLayout_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        select_background_blur_label = new QLabel(groupBox_2);
        select_background_blur_label->setObjectName(QString::fromUtf8("select_background_blur_label"));
        select_background_blur_label->setEnabled(true);

        gridLayout->addWidget(select_background_blur_label, 0, 0, 1, 1);

        blur_slider = new QSlider(groupBox_2);
        blur_slider->setObjectName(QString::fromUtf8("blur_slider"));
        blur_slider->setMinimum(0);
        blur_slider->setMaximum(10);
        blur_slider->setOrientation(Qt::Horizontal);
        blur_slider->setTickPosition(QSlider::TicksBelow);
        blur_slider->setTickInterval(1);

        gridLayout->addWidget(blur_slider, 0, 1, 1, 1);

        background_blur_radius_label = new QLabel(groupBox_2);
        background_blur_radius_label->setObjectName(QString::fromUtf8("background_blur_radius_label"));
        background_blur_radius_label->setEnabled(true);

        gridLayout->addWidget(background_blur_radius_label, 0, 2, 1, 1);

        select_opacity_level_label = new QLabel(groupBox_2);
        select_opacity_level_label->setObjectName(QString::fromUtf8("select_opacity_level_label"));

        gridLayout->addWidget(select_opacity_level_label, 1, 0, 1, 1);

        opacity_slider = new QSlider(groupBox_2);
        opacity_slider->setObjectName(QString::fromUtf8("opacity_slider"));
        opacity_slider->setMaximum(100);
        opacity_slider->setSingleStep(10);
        opacity_slider->setOrientation(Qt::Horizontal);
        opacity_slider->setTickPosition(QSlider::TicksBelow);
        opacity_slider->setTickInterval(10);

        gridLayout->addWidget(opacity_slider, 1, 1, 1, 1);

        background_opacity_label = new QLabel(groupBox_2);
        background_opacity_label->setObjectName(QString::fromUtf8("background_opacity_label"));

        gridLayout->addWidget(background_opacity_label, 1, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        verticalLayout->addWidget(groupBox_2);

        moodbar_group = new QGroupBox(AppearanceSettingsPage);
        moodbar_group->setObjectName(QString::fromUtf8("moodbar_group"));
        formLayout = new QFormLayout(moodbar_group);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        moodbar_show = new QCheckBox(moodbar_group);
        moodbar_show->setObjectName(QString::fromUtf8("moodbar_show"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, moodbar_show);

        label = new QLabel(moodbar_group);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        moodbar_style = new QComboBox(moodbar_group);
        moodbar_style->setObjectName(QString::fromUtf8("moodbar_style"));

        formLayout->setWidget(2, QFormLayout::FieldRole, moodbar_style);

        moodbar_save = new QCheckBox(moodbar_group);
        moodbar_save->setObjectName(QString::fromUtf8("moodbar_save"));

        formLayout->setWidget(3, QFormLayout::SpanningRole, moodbar_save);

        moodbar_calculate = new QCheckBox(moodbar_group);
        moodbar_calculate->setObjectName(QString::fromUtf8("moodbar_calculate"));

        formLayout->setWidget(0, QFormLayout::LabelRole, moodbar_calculate);


        verticalLayout->addWidget(moodbar_group);

        groupBox_3 = new QGroupBox(AppearanceSettingsPage);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_5 = new QVBoxLayout(groupBox_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        b_use_sys_icons = new QCheckBox(groupBox_3);
        b_use_sys_icons->setObjectName(QString::fromUtf8("b_use_sys_icons"));

        horizontalLayout_4->addWidget(b_use_sys_icons);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        b_hide_filter_toolbar = new QCheckBox(groupBox_3);
        b_hide_filter_toolbar->setObjectName(QString::fromUtf8("b_hide_filter_toolbar"));

        horizontalLayout_5->addWidget(b_hide_filter_toolbar);


        verticalLayout_5->addLayout(horizontalLayout_5);


        verticalLayout->addWidget(groupBox_3);


        retranslateUi(AppearanceSettingsPage);
        QObject::connect(use_a_custom_color_set, SIGNAL(toggled(bool)), select_background_color, SLOT(setEnabled(bool)));
        QObject::connect(use_a_custom_color_set, SIGNAL(toggled(bool)), select_background_color_label, SLOT(setEnabled(bool)));
        QObject::connect(use_a_custom_color_set, SIGNAL(toggled(bool)), select_foreground_color, SLOT(setEnabled(bool)));
        QObject::connect(use_a_custom_color_set, SIGNAL(toggled(bool)), select_foreground_color_label, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(AppearanceSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *AppearanceSettingsPage)
    {
        AppearanceSettingsPage->setWindowTitle(QCoreApplication::translate("AppearanceSettingsPage", "Appearance", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AppearanceSettingsPage", "Colors", nullptr));
        use_system_color_set->setText(QCoreApplication::translate("AppearanceSettingsPage", "Use the system default color set", nullptr));
        use_a_custom_color_set->setText(QCoreApplication::translate("AppearanceSettingsPage", "Use a custom color set", nullptr));
        select_foreground_color_label->setText(QCoreApplication::translate("AppearanceSettingsPage", "Select foreground color:", nullptr));
        select_foreground_color->setText(QString());
        select_background_color_label->setText(QCoreApplication::translate("AppearanceSettingsPage", "Select background color:", nullptr));
        select_background_color->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("AppearanceSettingsPage", "Background image", nullptr));
        use_default_background->setText(QCoreApplication::translate("AppearanceSettingsPage", "Default background image", nullptr));
#if QT_CONFIG(tooltip)
        use_album_cover_background->setToolTip(QCoreApplication::translate("AppearanceSettingsPage", "The album cover of the currently playing song", nullptr));
#endif // QT_CONFIG(tooltip)
        use_album_cover_background->setText(QCoreApplication::translate("AppearanceSettingsPage", "Album cover", nullptr));
        use_no_background->setText(QCoreApplication::translate("AppearanceSettingsPage", "No background image", nullptr));
        use_custom_background_image->setText(QCoreApplication::translate("AppearanceSettingsPage", "Custom image:", nullptr));
        select_background_image_filename_button->setText(QCoreApplication::translate("AppearanceSettingsPage", "Browse...", nullptr));
        select_background_blur_label->setText(QCoreApplication::translate("AppearanceSettingsPage", "Blur amount", nullptr));
        background_blur_radius_label->setText(QCoreApplication::translate("AppearanceSettingsPage", "0px", nullptr));
        select_opacity_level_label->setText(QCoreApplication::translate("AppearanceSettingsPage", "Opacity", nullptr));
        background_opacity_label->setText(QCoreApplication::translate("AppearanceSettingsPage", "40%", nullptr));
        moodbar_group->setTitle(QCoreApplication::translate("AppearanceSettingsPage", "Moodbars", nullptr));
        moodbar_show->setText(QCoreApplication::translate("AppearanceSettingsPage", "Show a moodbar in the track progress bar", nullptr));
        label->setText(QCoreApplication::translate("AppearanceSettingsPage", "Moodbar style", nullptr));
        moodbar_save->setText(QCoreApplication::translate("AppearanceSettingsPage", "Save .mood files in your music library", nullptr));
        moodbar_calculate->setText(QCoreApplication::translate("AppearanceSettingsPage", "Disable moodbar generation", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("AppearanceSettingsPage", "Other", nullptr));
        b_use_sys_icons->setText(QCoreApplication::translate("AppearanceSettingsPage", "Use system icons", nullptr));
        b_hide_filter_toolbar->setText(QCoreApplication::translate("AppearanceSettingsPage", "Hide playlist filter toolbar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AppearanceSettingsPage: public Ui_AppearanceSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPEARANCESETTINGSPAGE_H
