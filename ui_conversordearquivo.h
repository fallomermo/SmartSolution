/********************************************************************************
** Form generated from reading UI file 'conversordearquivo.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERSORDEARQUIVO_H
#define UI_CONVERSORDEARQUIVO_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConversorDeArquivo
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget_Senior;
    QTableWidget *tableWidget_Planilha;
    QPushButton *botaoAtualizaTabelas;
    QPushButton *botaoExportarDados;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QPushButton *botaoEventosFichaFinanceira;
    QPushButton *botaoEventosFichaFinanceira_2;
    QPushButton *botaoEventosLctoVariaveis;
    QPushButton *botaoEventosLctoVariaveis_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLineEdit *codigoFilialLlineEdit;
    QDateEdit *dateEdit;
    QLineEdit *codigoEmpresaLineEdit;
    QComboBox *tipoFolhaComboBox;
    QLineEdit *codigoEventoLlineEdit;
    QLineEdit *codigoSindicatoLlineEdit;
    QLineEdit *pesquisaItemTabelaALineEdit;
    QLineEdit *pesquisaItemTabelaBLineEdit;

    void setupUi(QWidget *ConversorDeArquivo)
    {
        if (ConversorDeArquivo->objectName().isEmpty())
            ConversorDeArquivo->setObjectName(QStringLiteral("ConversorDeArquivo"));
        ConversorDeArquivo->resize(711, 422);
        gridLayout = new QGridLayout(ConversorDeArquivo);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidget_Senior = new QTableWidget(ConversorDeArquivo);
        tableWidget_Senior->setObjectName(QStringLiteral("tableWidget_Senior"));

        gridLayout->addWidget(tableWidget_Senior, 2, 0, 1, 1);

        tableWidget_Planilha = new QTableWidget(ConversorDeArquivo);
        tableWidget_Planilha->setObjectName(QStringLiteral("tableWidget_Planilha"));

        gridLayout->addWidget(tableWidget_Planilha, 2, 1, 1, 1);

        botaoAtualizaTabelas = new QPushButton(ConversorDeArquivo);
        botaoAtualizaTabelas->setObjectName(QStringLiteral("botaoAtualizaTabelas"));

        gridLayout->addWidget(botaoAtualizaTabelas, 3, 0, 1, 1);

        botaoExportarDados = new QPushButton(ConversorDeArquivo);
        botaoExportarDados->setObjectName(QStringLiteral("botaoExportarDados"));

        gridLayout->addWidget(botaoExportarDados, 3, 1, 1, 1);

        groupBox_2 = new QGroupBox(ConversorDeArquivo);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        botaoEventosFichaFinanceira = new QPushButton(groupBox_2);
        botaoEventosFichaFinanceira->setObjectName(QStringLiteral("botaoEventosFichaFinanceira"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        botaoEventosFichaFinanceira->setFont(font);

        verticalLayout->addWidget(botaoEventosFichaFinanceira);

        botaoEventosFichaFinanceira_2 = new QPushButton(groupBox_2);
        botaoEventosFichaFinanceira_2->setObjectName(QStringLiteral("botaoEventosFichaFinanceira_2"));
        botaoEventosFichaFinanceira_2->setFont(font);

        verticalLayout->addWidget(botaoEventosFichaFinanceira_2);

        botaoEventosLctoVariaveis = new QPushButton(groupBox_2);
        botaoEventosLctoVariaveis->setObjectName(QStringLiteral("botaoEventosLctoVariaveis"));
        botaoEventosLctoVariaveis->setFont(font);

        verticalLayout->addWidget(botaoEventosLctoVariaveis);

        botaoEventosLctoVariaveis_2 = new QPushButton(groupBox_2);
        botaoEventosLctoVariaveis_2->setObjectName(QStringLiteral("botaoEventosLctoVariaveis_2"));
        botaoEventosLctoVariaveis_2->setFont(font);

        verticalLayout->addWidget(botaoEventosLctoVariaveis_2);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox = new QGroupBox(ConversorDeArquivo);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        codigoFilialLlineEdit = new QLineEdit(groupBox);
        codigoFilialLlineEdit->setObjectName(QStringLiteral("codigoFilialLlineEdit"));
        codigoFilialLlineEdit->setFont(font);
        codigoFilialLlineEdit->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(codigoFilialLlineEdit, 3, 1, 1, 1);

        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setFont(font);
        dateEdit->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(dateEdit, 1, 0, 1, 2);

        codigoEmpresaLineEdit = new QLineEdit(groupBox);
        codigoEmpresaLineEdit->setObjectName(QStringLiteral("codigoEmpresaLineEdit"));
        codigoEmpresaLineEdit->setFont(font);
        codigoEmpresaLineEdit->setMaxLength(32767);
        codigoEmpresaLineEdit->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(codigoEmpresaLineEdit, 3, 0, 1, 1);

        tipoFolhaComboBox = new QComboBox(groupBox);
        tipoFolhaComboBox->setObjectName(QStringLiteral("tipoFolhaComboBox"));
        tipoFolhaComboBox->setFont(font);

        gridLayout_2->addWidget(tipoFolhaComboBox, 2, 0, 1, 2);

        codigoEventoLlineEdit = new QLineEdit(groupBox);
        codigoEventoLlineEdit->setObjectName(QStringLiteral("codigoEventoLlineEdit"));
        codigoEventoLlineEdit->setFont(font);
        codigoEventoLlineEdit->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(codigoEventoLlineEdit, 4, 0, 1, 1);

        codigoSindicatoLlineEdit = new QLineEdit(groupBox);
        codigoSindicatoLlineEdit->setObjectName(QStringLiteral("codigoSindicatoLlineEdit"));
        codigoSindicatoLlineEdit->setFont(font);
        codigoSindicatoLlineEdit->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(codigoSindicatoLlineEdit, 4, 1, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        pesquisaItemTabelaALineEdit = new QLineEdit(ConversorDeArquivo);
        pesquisaItemTabelaALineEdit->setObjectName(QStringLiteral("pesquisaItemTabelaALineEdit"));

        gridLayout->addWidget(pesquisaItemTabelaALineEdit, 1, 0, 1, 1);

        pesquisaItemTabelaBLineEdit = new QLineEdit(ConversorDeArquivo);
        pesquisaItemTabelaBLineEdit->setObjectName(QStringLiteral("pesquisaItemTabelaBLineEdit"));

        gridLayout->addWidget(pesquisaItemTabelaBLineEdit, 1, 1, 1, 1);

        QWidget::setTabOrder(dateEdit, tipoFolhaComboBox);
        QWidget::setTabOrder(tipoFolhaComboBox, codigoEmpresaLineEdit);
        QWidget::setTabOrder(codigoEmpresaLineEdit, codigoFilialLlineEdit);
        QWidget::setTabOrder(codigoFilialLlineEdit, codigoEventoLlineEdit);
        QWidget::setTabOrder(codigoEventoLlineEdit, codigoSindicatoLlineEdit);
        QWidget::setTabOrder(codigoSindicatoLlineEdit, botaoEventosFichaFinanceira);
        QWidget::setTabOrder(botaoEventosFichaFinanceira, botaoEventosFichaFinanceira_2);
        QWidget::setTabOrder(botaoEventosFichaFinanceira_2, botaoEventosLctoVariaveis);
        QWidget::setTabOrder(botaoEventosLctoVariaveis, botaoEventosLctoVariaveis_2);
        QWidget::setTabOrder(botaoEventosLctoVariaveis_2, pesquisaItemTabelaALineEdit);
        QWidget::setTabOrder(pesquisaItemTabelaALineEdit, pesquisaItemTabelaBLineEdit);
        QWidget::setTabOrder(pesquisaItemTabelaBLineEdit, tableWidget_Senior);
        QWidget::setTabOrder(tableWidget_Senior, tableWidget_Planilha);
        QWidget::setTabOrder(tableWidget_Planilha, botaoAtualizaTabelas);
        QWidget::setTabOrder(botaoAtualizaTabelas, botaoExportarDados);

        retranslateUi(ConversorDeArquivo);

        QMetaObject::connectSlotsByName(ConversorDeArquivo);
    } // setupUi

    void retranslateUi(QWidget *ConversorDeArquivo)
    {
        ConversorDeArquivo->setWindowTitle(QApplication::translate("ConversorDeArquivo", "Form", nullptr));
        botaoAtualizaTabelas->setText(QApplication::translate("ConversorDeArquivo", "Atualizar Tabelas", nullptr));
        botaoExportarDados->setText(QApplication::translate("ConversorDeArquivo", "Exportar", nullptr));
        groupBox_2->setTitle(QApplication::translate("ConversorDeArquivo", "Checagem de registros x Planilha XLS", nullptr));
        botaoEventosFichaFinanceira->setText(QApplication::translate("ConversorDeArquivo", "Eventos F. Fianceira", nullptr));
        botaoEventosFichaFinanceira_2->setText(QApplication::translate("ConversorDeArquivo", "Inativo [1]", nullptr));
        botaoEventosLctoVariaveis->setText(QApplication::translate("ConversorDeArquivo", "Inativo [2]", nullptr));
        botaoEventosLctoVariaveis_2->setText(QApplication::translate("ConversorDeArquivo", "Inativo [3]", nullptr));
        groupBox->setTitle(QApplication::translate("ConversorDeArquivo", "Compet\303\252ncia x Tipo de Folha", nullptr));
        codigoFilialLlineEdit->setPlaceholderText(QApplication::translate("ConversorDeArquivo", "C\303\263digo da Filial", nullptr));
        dateEdit->setDisplayFormat(QApplication::translate("ConversorDeArquivo", "MM/yyyy", nullptr));
        codigoEmpresaLineEdit->setPlaceholderText(QApplication::translate("ConversorDeArquivo", "C\303\263digo da Empresa", nullptr));
        codigoEventoLlineEdit->setPlaceholderText(QApplication::translate("ConversorDeArquivo", "C\303\263digo do Evento", nullptr));
        codigoSindicatoLlineEdit->setPlaceholderText(QApplication::translate("ConversorDeArquivo", "C\303\263digo do Sindicato", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConversorDeArquivo: public Ui_ConversorDeArquivo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERSORDEARQUIVO_H
