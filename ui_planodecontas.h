/********************************************************************************
** Form generated from reading UI file 'planodecontas.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLANODECONTAS_H
#define UI_PLANODECONTAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlanoDeContas
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_Filtro;
    QGridLayout *gridLayout;
    QLineEdit *campoIDEmpresa;
    QLineEdit *campoIDFilial;
    QTableWidget *tableWidget;
    QLineEdit *campoPesquisarObjetosTabela;
    QGroupBox *groupBox_Filtro_3;
    QHBoxLayout *horizontalLayout;
    QDateEdit *campoInicioPeriodo;
    QDateEdit *campoFinalPeriodo;
    QGroupBox *groupBox_Filtro_5;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBoxTiposCalculos;
    QGroupBox *groupBox_Filtro_2;
    QGridLayout *gridLayout_6;
    QLabel *label_14;
    QLabel *campoEventoPlanoContas;
    QLabel *label_20;
    QLabel *campoTotalRegistros;
    QLabel *campoValorTotalAgrupado;
    QLabel *campoValorEventoAgrupado;
    QLabel *label_16;
    QGroupBox *groupBox_Filtro_4;
    QVBoxLayout *verticalLayout;
    QPushButton *botaoProcessar;
    QPushButton *botaoExportar;

    void setupUi(QWidget *PlanoDeContas)
    {
        if (PlanoDeContas->objectName().isEmpty())
            PlanoDeContas->setObjectName(QStringLiteral("PlanoDeContas"));
        PlanoDeContas->resize(808, 421);
        PlanoDeContas->setStyleSheet(QStringLiteral(""));
        gridLayout_2 = new QGridLayout(PlanoDeContas);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox_Filtro = new QGroupBox(PlanoDeContas);
        groupBox_Filtro->setObjectName(QStringLiteral("groupBox_Filtro"));
        gridLayout = new QGridLayout(groupBox_Filtro);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        campoIDEmpresa = new QLineEdit(groupBox_Filtro);
        campoIDEmpresa->setObjectName(QStringLiteral("campoIDEmpresa"));
        campoIDEmpresa->setMinimumSize(QSize(100, 0));
        campoIDEmpresa->setClearButtonEnabled(false);

        gridLayout->addWidget(campoIDEmpresa, 0, 0, 1, 1);

        campoIDFilial = new QLineEdit(groupBox_Filtro);
        campoIDFilial->setObjectName(QStringLiteral("campoIDFilial"));
        campoIDFilial->setMinimumSize(QSize(100, 0));
        campoIDFilial->setClearButtonEnabled(false);

        gridLayout->addWidget(campoIDFilial, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_Filtro, 2, 0, 2, 2);

        tableWidget = new QTableWidget(PlanoDeContas);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setSortingEnabled(true);

        gridLayout_2->addWidget(tableWidget, 7, 0, 1, 4);

        campoPesquisarObjetosTabela = new QLineEdit(PlanoDeContas);
        campoPesquisarObjetosTabela->setObjectName(QStringLiteral("campoPesquisarObjetosTabela"));
        campoPesquisarObjetosTabela->setClearButtonEnabled(true);

        gridLayout_2->addWidget(campoPesquisarObjetosTabela, 6, 0, 1, 4);

        groupBox_Filtro_3 = new QGroupBox(PlanoDeContas);
        groupBox_Filtro_3->setObjectName(QStringLiteral("groupBox_Filtro_3"));
        horizontalLayout = new QHBoxLayout(groupBox_Filtro_3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        campoInicioPeriodo = new QDateEdit(groupBox_Filtro_3);
        campoInicioPeriodo->setObjectName(QStringLiteral("campoInicioPeriodo"));
        campoInicioPeriodo->setMinimumSize(QSize(100, 0));
        campoInicioPeriodo->setAlignment(Qt::AlignCenter);
        campoInicioPeriodo->setProperty("showGroupSeparator", QVariant(true));

        horizontalLayout->addWidget(campoInicioPeriodo);

        campoFinalPeriodo = new QDateEdit(groupBox_Filtro_3);
        campoFinalPeriodo->setObjectName(QStringLiteral("campoFinalPeriodo"));
        campoFinalPeriodo->setMinimumSize(QSize(100, 0));
        campoFinalPeriodo->setAlignment(Qt::AlignCenter);
        campoFinalPeriodo->setProperty("showGroupSeparator", QVariant(true));

        horizontalLayout->addWidget(campoFinalPeriodo);


        gridLayout_2->addWidget(groupBox_Filtro_3, 0, 0, 1, 2);

        groupBox_Filtro_5 = new QGroupBox(PlanoDeContas);
        groupBox_Filtro_5->setObjectName(QStringLiteral("groupBox_Filtro_5"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_Filtro_5);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        comboBoxTiposCalculos = new QComboBox(groupBox_Filtro_5);
        comboBoxTiposCalculos->setObjectName(QStringLiteral("comboBoxTiposCalculos"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        comboBoxTiposCalculos->setFont(font);

        horizontalLayout_3->addWidget(comboBoxTiposCalculos);


        gridLayout_2->addWidget(groupBox_Filtro_5, 1, 0, 1, 2);

        groupBox_Filtro_2 = new QGroupBox(PlanoDeContas);
        groupBox_Filtro_2->setObjectName(QStringLiteral("groupBox_Filtro_2"));
        gridLayout_6 = new QGridLayout(groupBox_Filtro_2);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_14 = new QLabel(groupBox_Filtro_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_14, 1, 0, 1, 1);

        campoEventoPlanoContas = new QLabel(groupBox_Filtro_2);
        campoEventoPlanoContas->setObjectName(QStringLiteral("campoEventoPlanoContas"));
        campoEventoPlanoContas->setFont(font);
        campoEventoPlanoContas->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(campoEventoPlanoContas, 0, 0, 1, 2);

        label_20 = new QLabel(groupBox_Filtro_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_20, 2, 0, 1, 1);

        campoTotalRegistros = new QLabel(groupBox_Filtro_2);
        campoTotalRegistros->setObjectName(QStringLiteral("campoTotalRegistros"));
        campoTotalRegistros->setMinimumSize(QSize(100, 0));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        campoTotalRegistros->setFont(font1);

        gridLayout_6->addWidget(campoTotalRegistros, 1, 1, 1, 1);

        campoValorTotalAgrupado = new QLabel(groupBox_Filtro_2);
        campoValorTotalAgrupado->setObjectName(QStringLiteral("campoValorTotalAgrupado"));
        campoValorTotalAgrupado->setMinimumSize(QSize(100, 0));
        campoValorTotalAgrupado->setFont(font1);

        gridLayout_6->addWidget(campoValorTotalAgrupado, 3, 1, 1, 1);

        campoValorEventoAgrupado = new QLabel(groupBox_Filtro_2);
        campoValorEventoAgrupado->setObjectName(QStringLiteral("campoValorEventoAgrupado"));
        campoValorEventoAgrupado->setMinimumSize(QSize(100, 0));
        campoValorEventoAgrupado->setFont(font1);

        gridLayout_6->addWidget(campoValorEventoAgrupado, 2, 1, 1, 1);

        label_16 = new QLabel(groupBox_Filtro_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_16, 3, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_Filtro_2, 0, 2, 2, 2);

        groupBox_Filtro_4 = new QGroupBox(PlanoDeContas);
        groupBox_Filtro_4->setObjectName(QStringLiteral("groupBox_Filtro_4"));
        verticalLayout = new QVBoxLayout(groupBox_Filtro_4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        botaoProcessar = new QPushButton(groupBox_Filtro_4);
        botaoProcessar->setObjectName(QStringLiteral("botaoProcessar"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/paper-plane.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoProcessar->setIcon(icon);

        verticalLayout->addWidget(botaoProcessar);

        botaoExportar = new QPushButton(groupBox_Filtro_4);
        botaoExportar->setObjectName(QStringLiteral("botaoExportar"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/csv-file-format-extension.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoExportar->setIcon(icon1);

        verticalLayout->addWidget(botaoExportar);


        gridLayout_2->addWidget(groupBox_Filtro_4, 2, 2, 2, 2);

        QWidget::setTabOrder(campoInicioPeriodo, campoFinalPeriodo);
        QWidget::setTabOrder(campoFinalPeriodo, comboBoxTiposCalculos);
        QWidget::setTabOrder(comboBoxTiposCalculos, campoIDEmpresa);
        QWidget::setTabOrder(campoIDEmpresa, campoIDFilial);
        QWidget::setTabOrder(campoIDFilial, botaoProcessar);
        QWidget::setTabOrder(botaoProcessar, botaoExportar);
        QWidget::setTabOrder(botaoExportar, campoPesquisarObjetosTabela);
        QWidget::setTabOrder(campoPesquisarObjetosTabela, tableWidget);

        retranslateUi(PlanoDeContas);

        QMetaObject::connectSlotsByName(PlanoDeContas);
    } // setupUi

    void retranslateUi(QWidget *PlanoDeContas)
    {
        PlanoDeContas->setWindowTitle(QApplication::translate("PlanoDeContas", "Form", Q_NULLPTR));
        groupBox_Filtro->setTitle(QApplication::translate("PlanoDeContas", "Empresa e Filial", Q_NULLPTR));
        groupBox_Filtro_3->setTitle(QApplication::translate("PlanoDeContas", "Per\303\255odo", Q_NULLPTR));
        campoInicioPeriodo->setDisplayFormat(QApplication::translate("PlanoDeContas", "MM/yyyy", Q_NULLPTR));
        campoFinalPeriodo->setDisplayFormat(QApplication::translate("PlanoDeContas", "MM/yyyy", Q_NULLPTR));
        groupBox_Filtro_5->setTitle(QApplication::translate("PlanoDeContas", "Tipo de Folha", Q_NULLPTR));
        comboBoxTiposCalculos->clear();
        comboBoxTiposCalculos->insertItems(0, QStringList()
         << QApplication::translate("PlanoDeContas", "11 - Folha Normal M\303\252s", Q_NULLPTR)
         << QApplication::translate("PlanoDeContas", "14 - Folha Complementar de Diss\303\255dio Coletivo", Q_NULLPTR)
         << QApplication::translate("PlanoDeContas", "31 - Folha de Adiantamento de 13\302\272 Sal\303\241rio", Q_NULLPTR)
         << QApplication::translate("PlanoDeContas", "32 - Folha de 13\302\272 - Integral", Q_NULLPTR)
        );
        groupBox_Filtro_2->setTitle(QApplication::translate("PlanoDeContas", "Scouts", Q_NULLPTR));
        label_14->setText(QApplication::translate("PlanoDeContas", "Total de Registros:", Q_NULLPTR));
        campoEventoPlanoContas->setText(QString());
        label_20->setText(QApplication::translate("PlanoDeContas", "Total Agrupado:", Q_NULLPTR));
        campoTotalRegistros->setText(QString());
        campoValorTotalAgrupado->setText(QString());
        campoValorEventoAgrupado->setText(QString());
        label_16->setText(QApplication::translate("PlanoDeContas", "Total Geral Agrupado:", Q_NULLPTR));
        groupBox_Filtro_4->setTitle(QApplication::translate("PlanoDeContas", "A\303\247\303\265es", Q_NULLPTR));
        botaoProcessar->setText(QApplication::translate("PlanoDeContas", "Processar", Q_NULLPTR));
        botaoExportar->setText(QApplication::translate("PlanoDeContas", "Exportar...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PlanoDeContas: public Ui_PlanoDeContas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANODECONTAS_H
