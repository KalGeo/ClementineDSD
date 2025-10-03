/********************************************************************************
** Form generated from reading UI file 'deviceviewcontainer.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICEVIEWCONTAINER_H
#define UI_DEVICEVIEWCONTAINER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "devices/deviceview.h"

QT_BEGIN_NAMESPACE

class Ui_DeviceViewContainer
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *windows_is_broken_frame;
    QHBoxLayout *horizontalLayout;
    QLabel *warning_icon;
    QLabel *label;
    QToolButton *close_frame_button;
    DeviceView *view;

    void setupUi(QWidget *DeviceViewContainer)
    {
        if (DeviceViewContainer->objectName().isEmpty())
            DeviceViewContainer->setObjectName(QString::fromUtf8("DeviceViewContainer"));
        DeviceViewContainer->resize(391, 396);
        verticalLayout = new QVBoxLayout(DeviceViewContainer);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        windows_is_broken_frame = new QFrame(DeviceViewContainer);
        windows_is_broken_frame->setObjectName(QString::fromUtf8("windows_is_broken_frame"));
        windows_is_broken_frame->setAutoFillBackground(true);
        windows_is_broken_frame->setFrameShape(QFrame::StyledPanel);
        windows_is_broken_frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(windows_is_broken_frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        warning_icon = new QLabel(windows_is_broken_frame);
        warning_icon->setObjectName(QString::fromUtf8("warning_icon"));

        horizontalLayout->addWidget(warning_icon);

        label = new QLabel(windows_is_broken_frame);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setWordWrap(true);

        horizontalLayout->addWidget(label);

        close_frame_button = new QToolButton(windows_is_broken_frame);
        close_frame_button->setObjectName(QString::fromUtf8("close_frame_button"));

        horizontalLayout->addWidget(close_frame_button);


        verticalLayout->addWidget(windows_is_broken_frame);

        view = new DeviceView(DeviceViewContainer);
        view->setObjectName(QString::fromUtf8("view"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(view->sizePolicy().hasHeightForWidth());
        view->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(view);


        retranslateUi(DeviceViewContainer);
        QObject::connect(close_frame_button, SIGNAL(clicked()), windows_is_broken_frame, SLOT(hide()));

        QMetaObject::connectSlotsByName(DeviceViewContainer);
    } // setupUi

    void retranslateUi(QWidget *DeviceViewContainer)
    {
        DeviceViewContainer->setWindowTitle(QCoreApplication::translate("DeviceViewContainer", "Form", nullptr));
        label->setText(QCoreApplication::translate("DeviceViewContainer", "iPods and USB devices currently don't work on Windows.  Sorry!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeviceViewContainer: public Ui_DeviceViewContainer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICEVIEWCONTAINER_H
