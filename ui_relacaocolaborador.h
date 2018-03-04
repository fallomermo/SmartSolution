/********************************************************************************
** Form generated from reading UI file 'relacaocolaborador.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELACAOCOLABORADOR_H
#define UI_RELACAOCOLABORADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
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

class Ui_RelacaoColaborador
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *painelTabela;
    QVBoxLayout *verticalLayout;
    QLineEdit *campoPesquisarObjetosTabela;
    QTableWidget *tableWidget;
    QGroupBox *painelResultados;
    QHBoxLayout *horizontalLayout_2;
    QLabel *campoItemSelecionado;
    QLabel *campoTotalRegistros;
    QFrame *frameFiltros;
    QGridLayout *gridLayout;
    QLineEdit *campoID_Empresa;
    QLineEdit *campoID_Filial;
    QFrame *frameAcoes;
    QHBoxLayout *horizontalLayout;
    QDateEdit *dataReferencia;
    QPushButton *botaoProcessar;
    QPushButton *botaoExportar;

    void setupUi(QWidget *RelacaoColaborador)
    {
        if (RelacaoColaborador->objectName().isEmpty())
            RelacaoColaborador->setObjectName(QStringLiteral("RelacaoColaborador"));
        RelacaoColaborador->resize(609, 352);
        RelacaoColaborador->setStyleSheet(QStringLiteral(""));
        gridLayout_3 = new QGridLayout(RelacaoColaborador);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        painelTabela = new QGroupBox(RelacaoColaborador);
        painelTabela->setObjectName(QStringLiteral("painelTabela"));
        verticalLayout = new QVBoxLayout(painelTabela);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        campoPesquisarObjetosTabela = new QLineEdit(painelTabela);
        campoPesquisarObjetosTabela->setObjectName(QStringLiteral("campoPesquisarObjetosTabela"));

        verticalLayout->addWidget(campoPesquisarObjetosTabela);

        tableWidget = new QTableWidget(painelTabela);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setSortingEnabled(true);

        verticalLayout->addWidget(tableWidget);


        gridLayout_3->addWidget(painelTabela, 2, 0, 1, 2);

        painelResultados = new QGroupBox(RelacaoColaborador);
        painelResultados->setObjectName(QStringLiteral("painelResultados"));
        horizontalLayout_2 = new QHBoxLayout(painelResultados);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        campoItemSelecionado = new QLabel(painelResultados);
        campoItemSelecionado->setObjectName(QStringLiteral("campoItemSelecionado"));
        campoItemSelecionado->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(campoItemSelecionado);

        campoTotalRegistros = new QLabel(painelResultados);
        campoTotalRegistros->setObjectName(QStringLiteral("campoTotalRegistros"));

        horizontalLayout_2->addWidget(campoTotalRegistros);


        gridLayout_3->addWidget(painelResultados, 3, 0, 1, 2);

        frameFiltros = new QFrame(RelacaoColaborador);
        frameFiltros->setObjectName(QStringLiteral("frameFiltros"));
        frameFiltros->setFrameShape(QFrame::StyledPanel);
        frameFiltros->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frameFiltros);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        campoID_Empresa = new QLineEdit(frameFiltros);
        campoID_Empresa->setObjectName(QStringLiteral("campoID_Empresa"));
        campoID_Empresa->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(campoID_Empresa, 0, 1, 1, 1);

        campoID_Filial = new QLineEdit(frameFiltros);
        campoID_Filial->setObjectName(QStringLiteral("campoID_Filial"));
        campoID_Filial->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(campoID_Filial, 1, 1, 1, 1);


        gridLayout_3->addWidget(frameFiltros, 0, 0, 1, 1);

        frameAcoes = new QFrame(RelacaoColaborador);
        frameAcoes->setObjectName(QStringLiteral("frameAcoes"));
        frameAcoes->setMinimumSize(QSize(200, 0));
        frameAcoes->setFrameShape(QFrame::StyledPanel);
        frameAcoes->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frameAcoes);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        dataReferencia = new QDateEdit(frameAcoes);
        dataReferencia->setObjectName(QStringLiteral("dataReferencia"));
        dataReferencia->setWrapping(false);
        dataReferencia->setAlignment(Qt::AlignCenter);
        dataReferencia->setProperty("showGroupSeparator", QVariant(true));
        dataReferencia->setCurrentSection(QDateTimeEdit::DaySection);
        dataReferencia->setCalendarPopup(true);

        horizontalLayout->addWidget(dataReferencia);

        botaoProcessar = new QPushButton(frameAcoes);
        botaoProcessar->setObjectName(QStringLiteral("botaoProcessar"));
        botaoProcessar->setMinimumSize(QSize(0, 24));
        botaoProcessar->setMaximumSize(QSize(16777215, 24));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/paper-plane.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoProcessar->setIcon(icon);

        horizontalLayout->addWidget(botaoProcessar);

        botaoExportar = new QPushButton(frameAcoes);
        botaoExportar->setObjectName(QStringLiteral("botaoExportar"));
        botaoExportar->setMinimumSize(QSize(0, 24));
        botaoExportar->setMaximumSize(QSize(16777215, 24));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/csv-file-format-extension.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoExportar->setIcon(icon1);

        horizontalLayout->addWidget(botaoExportar);


        gridLayout_3->addWidget(frameAcoes, 1, 0, 1, 1);

        QWidget::setTabOrder(campoID_Empresa, campoID_Filial);
        QWidget::setTabOrder(campoID_Filial, dataReferencia);
        QWidget::setTabOrder(dataReferencia, botaoProcessar);
        QWidget::setTabOrder(botaoProcessar, botaoExportar);
        QWidget::setTabOrder(botaoExportar, campoPesquisarObjetosTabela);
        QWidget::setTabOrder(campoPesquisarObjetosTabela, tableWidget);

        retranslateUi(RelacaoColaborador);

        QMetaObject::connectSlotsByName(RelacaoColaborador);
    } // setupUi

    void retranslateUi(QWidget *RelacaoColaborador)
    {
        RelacaoColaborador->setWindowTitle(QApplication::translate("RelacaoColaborador", "Form", nullptr));
        painelTabela->setTitle(QString());
        painelResultados->setTitle(QString());
        campoItemSelecionado->setText(QApplication::translate("RelacaoColaborador", "[]", nullptr));
        campoTotalRegistros->setText(QString());
#ifndef QT_NO_TOOLTIP
        campoID_Empresa->setToolTip(QApplication::translate("RelacaoColaborador", "<html><head/><body><p><img src=\":/images/flag_otimo.png\"/>C\303\263digo da <span style=\" font-weight:600; font-style:italic;\">empresa</span> que deseja filtrar. Nesta vers\303\243o s\303\263 uma empresa \303\251 permitida.</p><p>Caso queira todas as empresas, deixe o campo em branco/vazio.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        campoID_Empresa->setPlaceholderText(QApplication::translate("RelacaoColaborador", "C\303\263digo da Empresa", nullptr));
#ifndef QT_NO_TOOLTIP
        campoID_Filial->setToolTip(QApplication::translate("RelacaoColaborador", "<html><head/><body><p><img src=\":/images/flag_otimo.png\"/>C\303\263digo da <span style=\" font-weight:600; font-style:italic;\">filial</span> que deseja filtrar. Nesta vers\303\243o s\303\263 uma empresa \303\251 permitida.</p><p>Caso queira todas as empresas, deixe o campo em branco/vazio.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        campoID_Filial->setPlaceholderText(QApplication::translate("RelacaoColaborador", "C\303\263digo da Filial", nullptr));
        dataReferencia->setDisplayFormat(QApplication::translate("RelacaoColaborador", "dd/MM/yyyy", nullptr));
        botaoProcessar->setText(QApplication::translate("RelacaoColaborador", "Processar", nullptr));
        botaoExportar->setText(QApplication::translate("RelacaoColaborador", "Exportar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RelacaoColaborador: public Ui_RelacaoColaborador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELACAOCOLABORADOR_H
