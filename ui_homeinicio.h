/********************************************************************************
** Form generated from reading UI file 'homeinicio.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEINICIO_H
#define UI_HOMEINICIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeInicio
{
public:
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *HomeInicio)
    {
        if (HomeInicio->objectName().isEmpty())
            HomeInicio->setObjectName(QStringLiteral("HomeInicio"));
        HomeInicio->resize(692, 488);
        verticalLayout = new QVBoxLayout(HomeInicio);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        plainTextEdit = new QPlainTextEdit(HomeInicio);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setStyleSheet(QStringLiteral("background-image: url(:/images/duvida.jpg) no repeat;"));
        plainTextEdit->setReadOnly(true);

        verticalLayout->addWidget(plainTextEdit);


        retranslateUi(HomeInicio);

        QMetaObject::connectSlotsByName(HomeInicio);
    } // setupUi

    void retranslateUi(QWidget *HomeInicio)
    {
        HomeInicio->setWindowTitle(QApplication::translate("HomeInicio", "Form", Q_NULLPTR));
        plainTextEdit->setDocumentTitle(QApplication::translate("HomeInicio", "Plano de Contas", Q_NULLPTR));
        plainTextEdit->setPlainText(QApplication::translate("HomeInicio", "COMO ELABORAR UM PLANO DE CONTAS CONT\303\201BIL\n"
"J\303\272lio C\303\251sar Zanluca\n"
"\n"
"Plano de Contas (ou Elenco de Contas) \303\251 o conjunto de contas, previamente estabelecido, que norteia os trabalhos cont\303\241beis de registro de fatos e atos inerentes \303\240 entidade, al\303\251m de servir de par\303\242metro para a elabora\303\247\303\243o das demonstra\303\247\303\265es cont\303\241beis.\n"
" \n"
"A montagem de um Plano de Contas deve ser personalizada, por empresa, j\303\241 que os usu\303\241rios de informa\303\247\303\265es podem necessitar detalhamentos espec\303\255ficos, que um modelo de Plano de Contas geral pode n\303\243o compreender.\n"
" \n"
"OBJETIVOS DO PLANO DE CONTAS\n"
" \n"
"Seu principal objetivo \303\251 estabelecer normas de conduta para o registro das opera\303\247\303\265es da organiza\303\247\303\243o e, na sua montagem, devem ser levados em conta tr\303\252s objetivos fundamentais:\n"
" \n"
"a) atender \303\240s necessidades de informa\303\247\303\243o da administ"
                        "ra\303\247\303\243o da empresa;\n"
" \n"
"b) observar formato compat\303\255vel com os princ\303\255pios de contabilidade e com a norma legal de elabora\303\247\303\243o do balan\303\247o patrimonial e das demais de\302\255monstra\303\247\303\265es cont\303\241beis (Lei 6.404/76, a chamada \"Lei das S/A\342\200\235);\n"
" \n"
"c) adaptar-se tanto quanto poss\303\255vel \303\240s exig\303\252ncias dos agentes externos, principalmente \303\240s da legisla\303\247\303\243o do Imposto de Renda.\n"
" \n"
"ELENCO DE CONTAS E CORRESPONDENTE CONJUNTO DE NORMAS\n"
" \n"
"O Plano de Contas, genericamente tido como um simples elenco de contas, constitu\303\255 na verdade um conjunto de normas do qual deve fazer parte, ainda, a descri\303\247\303\243o do funcionamento de cada conta - o chamado \"Manual de Contas\", que cont\303\251m coment\303\241rios e indica\303\247\303\265es gerais sobre a aplica\303\247\303\243o e o uso de cada uma das contas (para que serve, o que deve conter e outras informa\303\247\303\265es sobre "
                        "crit\303\251rios gerais de contabiliza\303\247\303\243o).\n"
" \n"
"CONTAS DO BALAN\303\207O PATRIMONIAL\n"
" \n"
"A empresa deve manter escritura\303\247\303\243o cont\303\241bil com base na legisla\303\247\303\243o comercial e com observ\303\242ncia das Normas Brasileiras de Contabilidade.\n"
" \n"
"O balan\303\247o patrimonial \303\251 uma das demonstra\303\247\303\265es cont\303\241beis que visa a evidenciar, de forma sint\303\251tica, a situa\303\247\303\243o patrimonial da empresa e dos atos e fatos consignados na escritura\303\247\303\243o cont\303\241bil.\n"
" \n"
"Essa demonstra\303\247\303\243o deve ser estruturada de acordo com os preceitos da Lei 6.404/76 (chamada \342\200\234Lei das S/A\342\200\235) e segundo os Princ\303\255pios Fundamentais de Contabilidade.\n"
" \n"
"Tal estrutura de contas, dentro do conceito legal da pr\303\263pria Lei 6.404/76 (artigos 176 a 182 e artigo 187), em s\303\255ntese, se comp\303\265e de:\n"
"\n"
"Como exemplo, temos a conta \"Caixa\", que registrar\303\241 o dinh"
                        "eiro em esp\303\251cie (papel-moeda) dispon\303\255vel na tesouraria da empresa. Trata-se de uma conta do Ativo Circulante, subgrupo Disponibilidades.\n"
" \n"
"Sugiro que o Plano de Contas contenha, no m\303\255nimo, 4 (quatro) n\303\255veis:\n"
"\n"
"N\303\255vel 1:\n"
" \n"
"Ativo, Passivo, Patrim\303\264nio L\303\255quido, Receitas, Custos e Despesas.\n"
"\n"
"N\303\255vel 2:\n"
" \n"
"Ativo: Circulante, N\303\243o Circulante / Passivo e Patrim\303\264nio L\303\255quido: Circulante, N\303\243o Circulante e Patrim\303\264nio L\303\255quido. / Receitas: Receita Bruta, Dedu\303\247\303\265es da Receita Bruta, Outras Receitas Operacionais / Custos e Despesas Operacionais.\n"
"\n"
"N\303\255vel 3: Contas que evidenciem os grupos a que se referem, como por exemplo:\n"
"\n"
"N\303\255vel 1 - Ativo\n"
"N\303\255vel 2 - Ativo Circulante\n"
"N\303\255vel 3 - Bancos Conta Movimento\n"
"\n"
"N\303\255vel 4: Sub-contas que evidenciem o tipo de registro contabilizado, como por exemplo:\n"
"\n"
"N\303\255vel 1 - Ativo\n"
""
                        "N\303\255vel 2 - Ativo Circulante\n"
"N\303\255vel 3 - Bancos Conta Movimento\n"
"N\303\255vel 4 - Banco A\n"
" \n"
"Abaixo, segue um exemplo bem simples de uma estrutura de plano de contas em 4 n\303\255veis:\n"
" \n"
"1 ATIVO\n"
"\n"
"1.1 ATIVO CIRCULANTE\n"
"1.1.1 Caixa\n"
"1.1.1.01 Caixa Geral\n"
"1.1.2 Bancos C/Movimento\n"
"1.1.2.01 Banco Alfa\n"
"1.1.3 Contas a Receber\n"
"1.1.3.01 Clientes\n"
"1.1.3.02 Outras Contas a Receber\n"
"1.1.3.09(-) Duplicatas Descontadas\n"
"1.1.4 Estoques\n"
"1.1.4.01 Mercadorias\n"
"1.1.4.02 Produtos Acabados\n"
"1.1.4.03 Insumos\n"
"1.1.4.04 Outros\n"
"\n"
"1.2 N\303\203O CIRCULANTE\n"
"1.2.1 Contas a Receber\n"
"1.2.1.01 Clientes\n"
"1.2.1.02 Outras Contas\n"
"1.2.2 INVESTIMENTOS\n"
"1.2.2.01 Participa\303\247\303\265es Societ\303\241rias\n"
"1.2.3 IMOBILIZADO\n"
"1.2.3.01 Terrenos\n"
"1.2.3.02 Constru\303\247\303\265es e Benfeitorias\n"
"1.2.3.03 M\303\241quinas e Ferramentas\n"
"1.2.3.04 Ve\303\255culos\n"
"1.2.3.05 M\303\263veis\n"
"1.2.3.98 (-) Deprecia\303\247\303\243"
                        "o Acumulada\n"
"1.2.3.99 (-) Amortiza\303\247\303\243o Acumulada\n"
"1.2.4 INTANG\303\215VEL\n"
"1.2.4.01 Marcas\n"
"1.2.4.02 Softwares\n"
"1.2.4.99 (-) Amortiza\303\247\303\243o Acumulada\n"
"\n"
"2 PASSIVO\n"
"\n"
"2.1 CIRCULANTE\n"
"2.1.1 Impostos e Contribui\303\247\303\265es a Recolher\n"
"2.1.1.01 Simples a Recolher\n"
"2.1.1.02 INSS\n"
"2.1.1.03 FGTS\n"
"2.1.2 Contas a Pagar\n"
"2.1.2.01 Fornecedores\n"
"2.1.2.02 Outras Contas\n"
"2.1.3 Empr\303\251stimos Banc\303\241rios\n"
"2.1.3.01 Banco A - Opera\303\247\303\243o X\n"
"\n"
"2.2 N\303\203O CIRCULANTE\n"
"2.2.1 Empr\303\251stimos Banc\303\241rios\n"
"2.2.1.01 Banco A - Opera\303\247\303\243o X\n"
"\n"
"2.3 PATRIM\303\224NIO L\303\215QUIDO\n"
"2.3.1 Capital Social\n"
"2.3.2.01 Capital Social Subscrito\n"
"2.3.2.02 Capital Social a Realizar\n"
"2.3.2. Reservas\n"
"2.3.2.01 Reservas de Capital\n"
"2.3.2.02 Reservas de Lucros\n"
"2.3.3 Preju\303\255zos Acumulados\n"
"2.3.3.01 Preju\303\255zos Acumulados de Exerc\303\255cios Anteriores\n"
"2.3.3.02 Preju\303"
                        "\255zos do Exerc\303\255cio Atual\n"
"\n"
"3 CUSTOS E DESPESAS\n"
"\n"
"3.1 Custos dos Produtos Vendidos\n"
"3.1.1 Custos dos Materiais\n"
"3.1.1.01 Custos dos Materiais Aplicados\n"
"3.1.2 Custos da M\303\243o-de-Obra\n"
"3.1.2.01 Sal\303\241rios\n"
"3.1.2.02 Encargos Sociais\n"
"\n"
"3.2 Custo das Mercadorias Vendidas\n"
"3.2.1 Custo das Mercadorias\n"
"3.2.1.01 Custo das Mercadorias Vendidas\n"
"\n"
"3.3 Custo dos Servi\303\247os Prestados\n"
"3.3.1 Custo dos Servi\303\247os\n"
"3.3.1.01 Materiais Aplicados\n"
"3.3.1.02 M\303\243o-de-Obra\n"
"3.3.1.03 Encargos Sociais\n"
"\n"
"3.4 Despesas Operacionais\n"
"3.4.1 Despesas Gerais\n"
"3. 4.1.01 M\303\243o-de-Obra\n"
"3.4.1.02 Encargos Sociais\n"
"3.4.1.03 Alugu\303\251is\n"
"\n"
"3.5 Perdas de Capital\n"
"3.5.1 Baixa de Bens do Ativo N\303\243o Circulante\n"
"3.5.1.01 Custos de Aliena\303\247\303\243o de Investimentos\n"
"3.5.1.02 Custos de Aliena\303\247\303\243o do Imobilizado\n"
"\n"
"4 RECEITAS\n"
"\n"
"4.1 Receita L\303\255quida\n"
"4.1.1 Receita Bruta de"
                        " Vendas\n"
"4.1.1.01 De Mercadorias\n"
"4.1.1.02 De Produtos\n"
"4.1.1.03 De Servi\303\247os Prestados\n"
"4.1.2 Dedu\303\247\303\265es da Receita Bruta\n"
"4.1.2.01 Devolu\303\247\303\265es\n"
"4.1.2.02 Servi\303\247os Cancelados\n"
"\n"
"4.2 Outras Receitas Operacionais\n"
"4.2.1 Vendas de Ativos N\303\243o Circulantes\n"
"4.2.1.01 Receitas de Aliena\303\247\303\243o de Investimentos\n"
"4.2.1.02 Receitas de Aliena\303\247\303\243o do Imobilizado", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HomeInicio: public Ui_HomeInicio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEINICIO_H
