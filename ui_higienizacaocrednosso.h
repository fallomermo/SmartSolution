/********************************************************************************
** Form generated from reading UI file 'higienizacaocrednosso.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HIGIENIZACAOCREDNOSSO_H
#define UI_HIGIENIZACAOCREDNOSSO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HigienizacaoCrednosso
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_FiltroPesquisa_2;
    QGridLayout *gridLayout_2;
    QPushButton *botaoExportar;
    QPushButton *botaoProcessar;
    QDateEdit *campoDataReferencia;
    QComboBox *campoListaOpcoes;
    QGroupBox *groupBox_FiltroPesquisa;
    QGridLayout *gridLayout;
    QLabel *label_Total;
    QLabel *label_TotalDeRegistros;
    QLabel *campoTotalRegistros;
    QLabel *campoValorTotal;
    QLineEdit *campoPesquisarObjetosTabela;
    QTableWidget *tableWidget;

    void setupUi(QWidget *HigienizacaoCrednosso)
    {
        if (HigienizacaoCrednosso->objectName().isEmpty())
            HigienizacaoCrednosso->setObjectName(QStringLiteral("HigienizacaoCrednosso"));
        HigienizacaoCrednosso->resize(764, 432);
        gridLayout_3 = new QGridLayout(HigienizacaoCrednosso);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox_FiltroPesquisa_2 = new QGroupBox(HigienizacaoCrednosso);
        groupBox_FiltroPesquisa_2->setObjectName(QStringLiteral("groupBox_FiltroPesquisa_2"));
        gridLayout_2 = new QGridLayout(groupBox_FiltroPesquisa_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        botaoExportar = new QPushButton(groupBox_FiltroPesquisa_2);
        botaoExportar->setObjectName(QStringLiteral("botaoExportar"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/txt-file-symbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoExportar->setIcon(icon);

        gridLayout_2->addWidget(botaoExportar, 1, 2, 1, 1);

        botaoProcessar = new QPushButton(groupBox_FiltroPesquisa_2);
        botaoProcessar->setObjectName(QStringLiteral("botaoProcessar"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/paper-plane.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoProcessar->setIcon(icon1);

        gridLayout_2->addWidget(botaoProcessar, 1, 1, 1, 1);

        campoDataReferencia = new QDateEdit(groupBox_FiltroPesquisa_2);
        campoDataReferencia->setObjectName(QStringLiteral("campoDataReferencia"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        campoDataReferencia->setFont(font);
        campoDataReferencia->setAlignment(Qt::AlignCenter);
        campoDataReferencia->setCalendarPopup(false);

        gridLayout_2->addWidget(campoDataReferencia, 1, 0, 1, 1);

        campoListaOpcoes = new QComboBox(groupBox_FiltroPesquisa_2);
        campoListaOpcoes->addItem(QString());
        campoListaOpcoes->addItem(QString());
        campoListaOpcoes->addItem(QString());
        campoListaOpcoes->addItem(QString());
        campoListaOpcoes->setObjectName(QStringLiteral("campoListaOpcoes"));

        gridLayout_2->addWidget(campoListaOpcoes, 0, 0, 1, 3);


        gridLayout_3->addWidget(groupBox_FiltroPesquisa_2, 0, 0, 1, 1);

        groupBox_FiltroPesquisa = new QGroupBox(HigienizacaoCrednosso);
        groupBox_FiltroPesquisa->setObjectName(QStringLiteral("groupBox_FiltroPesquisa"));
        gridLayout = new QGridLayout(groupBox_FiltroPesquisa);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_Total = new QLabel(groupBox_FiltroPesquisa);
        label_Total->setObjectName(QStringLiteral("label_Total"));
        label_Total->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_Total, 1, 0, 1, 1);

        label_TotalDeRegistros = new QLabel(groupBox_FiltroPesquisa);
        label_TotalDeRegistros->setObjectName(QStringLiteral("label_TotalDeRegistros"));
        label_TotalDeRegistros->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_TotalDeRegistros, 0, 0, 1, 1);

        campoTotalRegistros = new QLabel(groupBox_FiltroPesquisa);
        campoTotalRegistros->setObjectName(QStringLiteral("campoTotalRegistros"));
        campoTotalRegistros->setFont(font);
        campoTotalRegistros->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(campoTotalRegistros, 0, 1, 1, 1);

        campoValorTotal = new QLabel(groupBox_FiltroPesquisa);
        campoValorTotal->setObjectName(QStringLiteral("campoValorTotal"));
        campoValorTotal->setFont(font);
        campoValorTotal->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(campoValorTotal, 1, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_FiltroPesquisa, 0, 1, 1, 1);

        campoPesquisarObjetosTabela = new QLineEdit(HigienizacaoCrednosso);
        campoPesquisarObjetosTabela->setObjectName(QStringLiteral("campoPesquisarObjetosTabela"));

        gridLayout_3->addWidget(campoPesquisarObjetosTabela, 1, 0, 1, 2);

        tableWidget = new QTableWidget(HigienizacaoCrednosso);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSortingEnabled(true);

        gridLayout_3->addWidget(tableWidget, 2, 0, 1, 2);

        QWidget::setTabOrder(campoListaOpcoes, campoDataReferencia);
        QWidget::setTabOrder(campoDataReferencia, botaoProcessar);
        QWidget::setTabOrder(botaoProcessar, botaoExportar);
        QWidget::setTabOrder(botaoExportar, campoPesquisarObjetosTabela);
        QWidget::setTabOrder(campoPesquisarObjetosTabela, tableWidget);

        retranslateUi(HigienizacaoCrednosso);

        QMetaObject::connectSlotsByName(HigienizacaoCrednosso);
    } // setupUi

    void retranslateUi(QWidget *HigienizacaoCrednosso)
    {
        HigienizacaoCrednosso->setWindowTitle(QApplication::translate("HigienizacaoCrednosso", "Form", nullptr));
        groupBox_FiltroPesquisa_2->setTitle(QApplication::translate("HigienizacaoCrednosso", "Filtro de Pesquisa - Compet\303\252ncia", nullptr));
        botaoExportar->setText(QApplication::translate("HigienizacaoCrednosso", "Exportar", nullptr));
        botaoProcessar->setText(QApplication::translate("HigienizacaoCrednosso", "Processar", nullptr));
        campoDataReferencia->setDisplayFormat(QApplication::translate("HigienizacaoCrednosso", "MM/yyyy", nullptr));
        campoListaOpcoes->setItemText(0, QApplication::translate("HigienizacaoCrednosso", "Higieniza\303\247\303\243o Crednosso - Atualiza\303\247\303\243o de Retorno", nullptr));
        campoListaOpcoes->setItemText(1, QApplication::translate("HigienizacaoCrednosso", "Higieniza\303\247\303\243o Crednosso - Colaboradores Demitidos", nullptr));
        campoListaOpcoes->setItemText(2, QApplication::translate("HigienizacaoCrednosso", "Crednosso - Arquivo de Corte de F\303\251rias", nullptr));
        campoListaOpcoes->setItemText(3, QApplication::translate("HigienizacaoCrednosso", "Crednosso - Arquivo de Corte Folha", nullptr));

        groupBox_FiltroPesquisa->setTitle(QApplication::translate("HigienizacaoCrednosso", "Resultados", nullptr));
        label_Total->setText(QApplication::translate("HigienizacaoCrednosso", "Total:", nullptr));
        label_TotalDeRegistros->setText(QApplication::translate("HigienizacaoCrednosso", "Total de registros:", nullptr));
        campoTotalRegistros->setText(QString());
        campoValorTotal->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HigienizacaoCrednosso: public Ui_HigienizacaoCrednosso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HIGIENIZACAOCREDNOSSO_H
