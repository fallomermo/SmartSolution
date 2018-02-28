/********************************************************************************
** Form generated from reading UI file 'liquidofolha.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIQUIDOFOLHA_H
#define UI_LIQUIDOFOLHA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LiquidoFolha
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QDateEdit *dataIni;
    QDateEdit *dataFim;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *botaoProcesar;
    QPushButton *botaoExportar;
    QLineEdit *lineEdit_3;
    QTableWidget *tableWidget;

    void setupUi(QWidget *LiquidoFolha)
    {
        if (LiquidoFolha->objectName().isEmpty())
            LiquidoFolha->setObjectName(QStringLiteral("LiquidoFolha"));
        LiquidoFolha->resize(596, 393);
        gridLayout = new QGridLayout(LiquidoFolha);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(LiquidoFolha);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(LiquidoFolha);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        dataIni = new QDateEdit(groupBox_2);
        dataIni->setObjectName(QStringLiteral("dataIni"));
        dataIni->setMinimumSize(QSize(100, 0));
        dataIni->setAlignment(Qt::AlignCenter);
        dataIni->setCalendarPopup(true);

        verticalLayout_2->addWidget(dataIni);

        dataFim = new QDateEdit(groupBox_2);
        dataFim->setObjectName(QStringLiteral("dataFim"));
        dataFim->setMinimumSize(QSize(100, 0));
        dataFim->setAlignment(Qt::AlignCenter);
        dataFim->setCalendarPopup(true);

        verticalLayout_2->addWidget(dataFim);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(LiquidoFolha);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        botaoProcesar = new QPushButton(groupBox_3);
        botaoProcesar->setObjectName(QStringLiteral("botaoProcesar"));
        botaoProcesar->setMinimumSize(QSize(100, 0));

        verticalLayout_3->addWidget(botaoProcesar);

        botaoExportar = new QPushButton(groupBox_3);
        botaoExportar->setObjectName(QStringLiteral("botaoExportar"));
        botaoExportar->setMinimumSize(QSize(100, 0));

        verticalLayout_3->addWidget(botaoExportar);


        gridLayout->addWidget(groupBox_3, 0, 2, 1, 1);

        lineEdit_3 = new QLineEdit(LiquidoFolha);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 1, 0, 1, 3);

        tableWidget = new QTableWidget(LiquidoFolha);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 2, 0, 1, 3);

        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, dataIni);
        QWidget::setTabOrder(dataIni, dataFim);
        QWidget::setTabOrder(dataFim, botaoProcesar);
        QWidget::setTabOrder(botaoProcesar, botaoExportar);
        QWidget::setTabOrder(botaoExportar, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, tableWidget);

        retranslateUi(LiquidoFolha);

        QMetaObject::connectSlotsByName(LiquidoFolha);
    } // setupUi

    void retranslateUi(QWidget *LiquidoFolha)
    {
        LiquidoFolha->setWindowTitle(QApplication::translate("LiquidoFolha", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("LiquidoFolha", "Empresas e Filiais", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("LiquidoFolha", "Per\303\255odo", Q_NULLPTR));
        dataIni->setDisplayFormat(QApplication::translate("LiquidoFolha", "dd/MM/yyyy", Q_NULLPTR));
        dataFim->setDisplayFormat(QApplication::translate("LiquidoFolha", "dd/MM/yyyy", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("LiquidoFolha", "A\303\247\303\265es", Q_NULLPTR));
        botaoProcesar->setText(QApplication::translate("LiquidoFolha", "Processar", Q_NULLPTR));
        botaoExportar->setText(QApplication::translate("LiquidoFolha", "Exportar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LiquidoFolha: public Ui_LiquidoFolha {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIQUIDOFOLHA_H
