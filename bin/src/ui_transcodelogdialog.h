/********************************************************************************
** Form generated from reading UI file 'transcodelogdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODELOGDIALOG_H
#define UI_TRANSCODELOGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>
#include "engines/pipelineview.h"

QT_BEGIN_NAMESPACE

class Ui_TranscodeLogDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *pipelineBox;
    QVBoxLayout *verticalLayout_3;
    PipelineView *pipelines;
    QGroupBox *logBox;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *log;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TranscodeLogDialog)
    {
        if (TranscodeLogDialog->objectName().isEmpty())
            TranscodeLogDialog->setObjectName(QString::fromUtf8("TranscodeLogDialog"));
        TranscodeLogDialog->resize(676, 358);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        TranscodeLogDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(TranscodeLogDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pipelineBox = new QGroupBox(TranscodeLogDialog);
        pipelineBox->setObjectName(QString::fromUtf8("pipelineBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pipelineBox->sizePolicy().hasHeightForWidth());
        pipelineBox->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(pipelineBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pipelines = new PipelineView(pipelineBox);
        pipelines->setObjectName(QString::fromUtf8("pipelines"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pipelines->sizePolicy().hasHeightForWidth());
        pipelines->setSizePolicy(sizePolicy1);
        pipelines->setContextMenuPolicy(Qt::ActionsContextMenu);

        verticalLayout_3->addWidget(pipelines);


        verticalLayout->addWidget(pipelineBox);

        logBox = new QGroupBox(TranscodeLogDialog);
        logBox->setObjectName(QString::fromUtf8("logBox"));
        sizePolicy1.setHeightForWidth(logBox->sizePolicy().hasHeightForWidth());
        logBox->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(logBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        log = new QPlainTextEdit(logBox);
        log->setObjectName(QString::fromUtf8("log"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(log->sizePolicy().hasHeightForWidth());
        log->setSizePolicy(sizePolicy2);
        log->setReadOnly(true);

        verticalLayout_2->addWidget(log);


        verticalLayout->addWidget(logBox);

        buttonBox = new QDialogButtonBox(TranscodeLogDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TranscodeLogDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), TranscodeLogDialog, SLOT(hide()));

        QMetaObject::connectSlotsByName(TranscodeLogDialog);
    } // setupUi

    void retranslateUi(QDialog *TranscodeLogDialog)
    {
        TranscodeLogDialog->setWindowTitle(QCoreApplication::translate("TranscodeLogDialog", "Transcoder Details", nullptr));
        pipelineBox->setTitle(QCoreApplication::translate("TranscodeLogDialog", "Pipelines", nullptr));
        logBox->setTitle(QCoreApplication::translate("TranscodeLogDialog", "Logs", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TranscodeLogDialog: public Ui_TranscodeLogDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODELOGDIALOG_H
