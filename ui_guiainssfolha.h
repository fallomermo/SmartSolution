/********************************************************************************
** Form generated from reading UI file 'guiainssfolha.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIAINSSFOLHA_H
#define UI_GUIAINSSFOLHA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuiaINSSFolha
{
public:
    QGridLayout *gridLayout_3;
    QTableWidget *tableWidget;
    QLineEdit *campoPesquisarObjetosTabela;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QDateEdit *periodoInicial;
    QDateEdit *periodoFinal;
    QComboBox *tipoFolhaComboBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLineEdit *campoID_Empresa;
    QLineEdit *campoID_Filial;
    QPushButton *botaoProcessar;
    QPushButton *botaoExportar;

    void setupUi(QWidget *GuiaINSSFolha)
    {
        if (GuiaINSSFolha->objectName().isEmpty())
            GuiaINSSFolha->setObjectName(QStringLiteral("GuiaINSSFolha"));
        GuiaINSSFolha->resize(609, 272);
        GuiaINSSFolha->setStyleSheet(QStringLiteral(""));
        gridLayout_3 = new QGridLayout(GuiaINSSFolha);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tableWidget = new QTableWidget(GuiaINSSFolha);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setSortingEnabled(true);

        gridLayout_3->addWidget(tableWidget, 4, 0, 1, 2);

        campoPesquisarObjetosTabela = new QLineEdit(GuiaINSSFolha);
        campoPesquisarObjetosTabela->setObjectName(QStringLiteral("campoPesquisarObjetosTabela"));
        campoPesquisarObjetosTabela->setClearButtonEnabled(true);

        gridLayout_3->addWidget(campoPesquisarObjetosTabela, 3, 0, 1, 2);

        groupBox = new QGroupBox(GuiaINSSFolha);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        periodoInicial = new QDateEdit(groupBox);
        periodoInicial->setObjectName(QStringLiteral("periodoInicial"));
        periodoInicial->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        periodoInicial->setFont(font);
        periodoInicial->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(periodoInicial, 0, 0, 1, 1);

        periodoFinal = new QDateEdit(groupBox);
        periodoFinal->setObjectName(QStringLiteral("periodoFinal"));
        periodoFinal->setMinimumSize(QSize(0, 0));
        periodoFinal->setFont(font);
        periodoFinal->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(periodoFinal, 0, 1, 1, 1);

        tipoFolhaComboBox = new QComboBox(groupBox);
        tipoFolhaComboBox->addItem(QString());
        tipoFolhaComboBox->addItem(QString());
        tipoFolhaComboBox->addItem(QString());
        tipoFolhaComboBox->addItem(QString());
        tipoFolhaComboBox->addItem(QString());
        tipoFolhaComboBox->setObjectName(QStringLiteral("tipoFolhaComboBox"));

        gridLayout_2->addWidget(tipoFolhaComboBox, 1, 0, 1, 2);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(GuiaINSSFolha);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        campoID_Empresa = new QLineEdit(groupBox_2);
        campoID_Empresa->setObjectName(QStringLiteral("campoID_Empresa"));
        campoID_Empresa->setClearButtonEnabled(false);

        gridLayout->addWidget(campoID_Empresa, 0, 0, 1, 2);

        campoID_Filial = new QLineEdit(groupBox_2);
        campoID_Filial->setObjectName(QStringLiteral("campoID_Filial"));
        campoID_Filial->setClearButtonEnabled(false);

        gridLayout->addWidget(campoID_Filial, 1, 0, 1, 2);

        botaoProcessar = new QPushButton(groupBox_2);
        botaoProcessar->setObjectName(QStringLiteral("botaoProcessar"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/paper-plane.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoProcessar->setIcon(icon);

        gridLayout->addWidget(botaoProcessar, 2, 0, 1, 1);

        botaoExportar = new QPushButton(groupBox_2);
        botaoExportar->setObjectName(QStringLiteral("botaoExportar"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/csv-file-format-extension.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoExportar->setIcon(icon1);

        gridLayout->addWidget(botaoExportar, 2, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 0, 1, 1, 1);

        QWidget::setTabOrder(periodoInicial, periodoFinal);
        QWidget::setTabOrder(periodoFinal, tipoFolhaComboBox);
        QWidget::setTabOrder(tipoFolhaComboBox, campoID_Empresa);
        QWidget::setTabOrder(campoID_Empresa, campoID_Filial);
        QWidget::setTabOrder(campoID_Filial, botaoProcessar);
        QWidget::setTabOrder(botaoProcessar, botaoExportar);
        QWidget::setTabOrder(botaoExportar, campoPesquisarObjetosTabela);
        QWidget::setTabOrder(campoPesquisarObjetosTabela, tableWidget);

        retranslateUi(GuiaINSSFolha);

        QMetaObject::connectSlotsByName(GuiaINSSFolha);
    } // setupUi

    void retranslateUi(QWidget *GuiaINSSFolha)
    {
        GuiaINSSFolha->setWindowTitle(QApplication::translate("GuiaINSSFolha", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("GuiaINSSFolha", "Per\303\255odo", nullptr));
        periodoInicial->setDisplayFormat(QApplication::translate("GuiaINSSFolha", "MM/yyyy", nullptr));
        periodoFinal->setDisplayFormat(QApplication::translate("GuiaINSSFolha", "MM/yyyy", nullptr));
        tipoFolhaComboBox->setItemText(0, QApplication::translate("GuiaINSSFolha", "11 - Folha Normal", nullptr));
        tipoFolhaComboBox->setItemText(1, QApplication::translate("GuiaINSSFolha", "12 - Folha Complementar", nullptr));
        tipoFolhaComboBox->setItemText(2, QApplication::translate("GuiaINSSFolha", "14 - Folha Complementar de Diss\303\255dio", nullptr));
        tipoFolhaComboBox->setItemText(3, QApplication::translate("GuiaINSSFolha", "31 - Folha Adiantamento de 13\302\272", nullptr));
        tipoFolhaComboBox->setItemText(4, QApplication::translate("GuiaINSSFolha", "32 - Folha 13\302\272 Integral", nullptr));

        groupBox_2->setTitle(QApplication::translate("GuiaINSSFolha", "Filtros", nullptr));
        campoID_Empresa->setPlaceholderText(QApplication::translate("GuiaINSSFolha", "C\303\263digo da Empresa", nullptr));
        campoID_Filial->setPlaceholderText(QApplication::translate("GuiaINSSFolha", "C\303\263digo da Filial", nullptr));
        botaoProcessar->setText(QApplication::translate("GuiaINSSFolha", "Processar", nullptr));
        botaoExportar->setText(QApplication::translate("GuiaINSSFolha", "Exportar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuiaINSSFolha: public Ui_GuiaINSSFolha {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIAINSSFOLHA_H
