/********************************************************************************
** Form generated from reading UI file 'controledeponto.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLEDEPONTO_H
#define UI_CONTROLEDEPONTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ControleDePonto
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QTableWidget *tableWidget;

    void setupUi(QWidget *ControleDePonto)
    {
        if (ControleDePonto->objectName().isEmpty())
            ControleDePonto->setObjectName(QStringLiteral("ControleDePonto"));
        ControleDePonto->resize(450, 319);
        gridLayout = new QGridLayout(ControleDePonto);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(ControleDePonto);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout_2->addWidget(lineEdit_3);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(ControleDePonto);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit_4 = new QLineEdit(groupBox_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        verticalLayout->addWidget(lineEdit_4);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        lineEdit = new QLineEdit(ControleDePonto);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 0, 1, 2);

        tableWidget = new QTableWidget(ControleDePonto);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 2, 0, 1, 2);


        retranslateUi(ControleDePonto);

        QMetaObject::connectSlotsByName(ControleDePonto);
    } // setupUi

    void retranslateUi(QWidget *ControleDePonto)
    {
        ControleDePonto->setWindowTitle(QApplication::translate("ControleDePonto", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("ControleDePonto", "GroupBox", nullptr));
        groupBox_2->setTitle(QApplication::translate("ControleDePonto", "GroupBox", nullptr));
        pushButton->setText(QApplication::translate("ControleDePonto", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ControleDePonto: public Ui_ControleDePonto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLEDEPONTO_H
