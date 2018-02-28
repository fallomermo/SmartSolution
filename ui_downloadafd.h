/********************************************************************************
** Form generated from reading UI file 'downloadafd.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADAFD_H
#define UI_DOWNLOADAFD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DownloadAFD
{
public:
    QTimeEdit *timeEdit;
    QDial *dial;

    void setupUi(QWidget *DownloadAFD)
    {
        if (DownloadAFD->objectName().isEmpty())
            DownloadAFD->setObjectName(QStringLiteral("DownloadAFD"));
        DownloadAFD->resize(535, 373);
        timeEdit = new QTimeEdit(DownloadAFD);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(60, 90, 118, 22));
        dial = new QDial(DownloadAFD);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(210, 190, 50, 64));

        retranslateUi(DownloadAFD);

        QMetaObject::connectSlotsByName(DownloadAFD);
    } // setupUi

    void retranslateUi(QWidget *DownloadAFD)
    {
        DownloadAFD->setWindowTitle(QApplication::translate("DownloadAFD", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DownloadAFD: public Ui_DownloadAFD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADAFD_H
