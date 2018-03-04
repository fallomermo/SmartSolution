/********************************************************************************
** Form generated from reading UI file 'administracaogeral.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRACAOGERAL_H
#define UI_ADMINISTRACAOGERAL_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdministracaoGeral
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *label_2;
    QLineEdit *campoUsuario;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *campoNome;
    QLineEdit *campoSenha;
    QLabel *label_5;
    QPushButton *botaoCancelar;
    QPushButton *botaoSalvar;
    QComboBox *comboBoxPerfil;
    QDateEdit *campoDataCriacao;
    QLabel *label_7;
    QDateEdit *campoDataAlteracao;
    QHBoxLayout *horizontalLayout;
    QToolButton *botaoNovoUsuario;
    QToolButton *botaoAlterarUsuario;
    QToolButton *botaoExcluirUsuario;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidget;

    void setupUi(QWidget *AdministracaoGeral)
    {
        if (AdministracaoGeral->objectName().isEmpty())
            AdministracaoGeral->setObjectName(QStringLiteral("AdministracaoGeral"));
        AdministracaoGeral->resize(585, 324);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/iconeSeverino.ico"), QSize(), QIcon::Normal, QIcon::Off);
        AdministracaoGeral->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(AdministracaoGeral);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(AdministracaoGeral);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        campoUsuario = new QLineEdit(groupBox);
        campoUsuario->setObjectName(QStringLiteral("campoUsuario"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        campoUsuario->setFont(font);
        campoUsuario->setReadOnly(true);

        gridLayout->addWidget(campoUsuario, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        campoNome = new QLineEdit(groupBox);
        campoNome->setObjectName(QStringLiteral("campoNome"));
        campoNome->setFont(font);
        campoNome->setReadOnly(false);

        gridLayout->addWidget(campoNome, 1, 1, 1, 1);

        campoSenha = new QLineEdit(groupBox);
        campoSenha->setObjectName(QStringLiteral("campoSenha"));
        campoSenha->setFont(font);
        campoSenha->setEchoMode(QLineEdit::Password);
        campoSenha->setReadOnly(false);

        gridLayout->addWidget(campoSenha, 0, 3, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 1, 2, 1, 1);

        botaoCancelar = new QPushButton(groupBox);
        botaoCancelar->setObjectName(QStringLiteral("botaoCancelar"));

        gridLayout->addWidget(botaoCancelar, 3, 2, 1, 2);

        botaoSalvar = new QPushButton(groupBox);
        botaoSalvar->setObjectName(QStringLiteral("botaoSalvar"));

        gridLayout->addWidget(botaoSalvar, 3, 0, 1, 2);

        comboBoxPerfil = new QComboBox(groupBox);
        comboBoxPerfil->setObjectName(QStringLiteral("comboBoxPerfil"));
        comboBoxPerfil->setFont(font);

        gridLayout->addWidget(comboBoxPerfil, 1, 3, 1, 1);

        campoDataCriacao = new QDateEdit(groupBox);
        campoDataCriacao->setObjectName(QStringLiteral("campoDataCriacao"));
        campoDataCriacao->setFont(font);
        campoDataCriacao->setAlignment(Qt::AlignCenter);
        campoDataCriacao->setReadOnly(true);

        gridLayout->addWidget(campoDataCriacao, 2, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 2, 2, 1, 1);

        campoDataAlteracao = new QDateEdit(groupBox);
        campoDataAlteracao->setObjectName(QStringLiteral("campoDataAlteracao"));
        campoDataAlteracao->setFont(font);
        campoDataAlteracao->setAlignment(Qt::AlignCenter);
        campoDataAlteracao->setReadOnly(true);

        gridLayout->addWidget(campoDataAlteracao, 2, 3, 1, 1);


        verticalLayout->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        botaoNovoUsuario = new QToolButton(AdministracaoGeral);
        botaoNovoUsuario->setObjectName(QStringLiteral("botaoNovoUsuario"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/add-square-button.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoNovoUsuario->setIcon(icon1);

        horizontalLayout->addWidget(botaoNovoUsuario);

        botaoAlterarUsuario = new QToolButton(AdministracaoGeral);
        botaoAlterarUsuario->setObjectName(QStringLiteral("botaoAlterarUsuario"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/edit-selection-editor.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoAlterarUsuario->setIcon(icon2);

        horizontalLayout->addWidget(botaoAlterarUsuario);

        botaoExcluirUsuario = new QToolButton(AdministracaoGeral);
        botaoExcluirUsuario->setObjectName(QStringLiteral("botaoExcluirUsuario"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/minus-sign-on-a-square-outline.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoExcluirUsuario->setIcon(icon3);

        horizontalLayout->addWidget(botaoExcluirUsuario);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(AdministracaoGeral);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSortingEnabled(true);
        tableWidget->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(tableWidget);

        QWidget::setTabOrder(campoUsuario, campoSenha);
        QWidget::setTabOrder(campoSenha, campoNome);
        QWidget::setTabOrder(campoNome, comboBoxPerfil);
        QWidget::setTabOrder(comboBoxPerfil, campoDataCriacao);
        QWidget::setTabOrder(campoDataCriacao, campoDataAlteracao);
        QWidget::setTabOrder(campoDataAlteracao, botaoSalvar);
        QWidget::setTabOrder(botaoSalvar, botaoCancelar);
        QWidget::setTabOrder(botaoCancelar, botaoNovoUsuario);
        QWidget::setTabOrder(botaoNovoUsuario, botaoAlterarUsuario);
        QWidget::setTabOrder(botaoAlterarUsuario, botaoExcluirUsuario);
        QWidget::setTabOrder(botaoExcluirUsuario, tableWidget);

        retranslateUi(AdministracaoGeral);

        QMetaObject::connectSlotsByName(AdministracaoGeral);
    } // setupUi

    void retranslateUi(QWidget *AdministracaoGeral)
    {
        AdministracaoGeral->setWindowTitle(QApplication::translate("AdministracaoGeral", "Severino :: Administra\303\247\303\243o de Usu\303\241rios", nullptr));
        groupBox->setTitle(QApplication::translate("AdministracaoGeral", "Informa\303\247\303\265es do usu\303\241rio", nullptr));
        label_6->setText(QApplication::translate("AdministracaoGeral", "Cadastro:", nullptr));
        label_2->setText(QApplication::translate("AdministracaoGeral", "Usu\303\241rio:", nullptr));
        label_3->setText(QApplication::translate("AdministracaoGeral", "Nome:", nullptr));
        label_4->setText(QApplication::translate("AdministracaoGeral", "Senha:", nullptr));
        label_5->setText(QApplication::translate("AdministracaoGeral", "Perfil:", nullptr));
        botaoCancelar->setText(QApplication::translate("AdministracaoGeral", "Cancelar", nullptr));
        botaoSalvar->setText(QApplication::translate("AdministracaoGeral", "Salvar", nullptr));
        label_7->setText(QApplication::translate("AdministracaoGeral", "\303\232ltima Altera\303\247\303\243o:", nullptr));
        botaoNovoUsuario->setText(QString());
        botaoAlterarUsuario->setText(QApplication::translate("AdministracaoGeral", "...", nullptr));
        botaoExcluirUsuario->setText(QApplication::translate("AdministracaoGeral", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdministracaoGeral: public Ui_AdministracaoGeral {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRACAOGERAL_H
