/********************************************************************************
** Form generated from reading UI file 'principal.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_H
#define UI_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Principal
{
public:
    QGridLayout *gridLayout_2;
    QFrame *framePanel_InfoUsuario;
    QGridLayout *gridLayout_5;
    QLabel *statusDevelop;
    QLabel *statusAplicacao;
    QLabel *campoTime;
    QFrame *framePanel_InfoSessao;
    QGridLayout *gridLayout;
    QFrame *framePanel;
    QVBoxLayout *verticalLayout;
    QToolBox *toolBox;
    QWidget *pageRotinas;
    QVBoxLayout *verticalLayout_2;
    QToolButton *toolButtonRecursosHumanos;
    QToolButton *toolButtonIntegracaoFinanceira;
    QToolButton *toolButtonCartaoCrednosso;
    QToolButton *toolButtonBeneficios;
    QToolButton *toolButtonControlePonto;
    QToolButton *toolButtonFerramentas;
    QToolButton *botaoSair;
    QSpacerItem *verticalSpacer_2;
    QWidget *pageUsuario;
    QVBoxLayout *verticalLayout_3;
    QToolButton *botaoAvatar;
    QSpacerItem *verticalSpacer;
    QTabWidget *tabWidget;

    void setupUi(QWidget *Principal)
    {
        if (Principal->objectName().isEmpty())
            Principal->setObjectName(QStringLiteral("Principal"));
        Principal->resize(824, 503);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/iconeSeverino.png"), QSize(), QIcon::Normal, QIcon::Off);
        Principal->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(Principal);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        framePanel_InfoUsuario = new QFrame(Principal);
        framePanel_InfoUsuario->setObjectName(QStringLiteral("framePanel_InfoUsuario"));
        framePanel_InfoUsuario->setFrameShape(QFrame::StyledPanel);
        framePanel_InfoUsuario->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(framePanel_InfoUsuario);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(6, 6, 6, 6);
        statusDevelop = new QLabel(framePanel_InfoUsuario);
        statusDevelop->setObjectName(QStringLiteral("statusDevelop"));
        QFont font;
        font.setPointSize(7);
        font.setItalic(true);
        statusDevelop->setFont(font);
        statusDevelop->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(statusDevelop, 0, 2, 1, 1);

        statusAplicacao = new QLabel(framePanel_InfoUsuario);
        statusAplicacao->setObjectName(QStringLiteral("statusAplicacao"));

        gridLayout_5->addWidget(statusAplicacao, 0, 0, 1, 1);

        campoTime = new QLabel(framePanel_InfoUsuario);
        campoTime->setObjectName(QStringLiteral("campoTime"));
        QFont font1;
        campoTime->setFont(font1);
        campoTime->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(campoTime, 0, 1, 1, 1);


        gridLayout_2->addWidget(framePanel_InfoUsuario, 2, 0, 1, 1);

        framePanel_InfoSessao = new QFrame(Principal);
        framePanel_InfoSessao->setObjectName(QStringLiteral("framePanel_InfoSessao"));
        framePanel_InfoSessao->setStyleSheet(QStringLiteral(""));
        framePanel_InfoSessao->setFrameShape(QFrame::StyledPanel);
        framePanel_InfoSessao->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(framePanel_InfoSessao);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        framePanel = new QFrame(framePanel_InfoSessao);
        framePanel->setObjectName(QStringLiteral("framePanel"));
        framePanel->setMaximumSize(QSize(200, 16777215));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        framePanel->setFont(font2);
        framePanel->setStyleSheet(QStringLiteral(""));
        framePanel->setFrameShape(QFrame::StyledPanel);
        framePanel->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(framePanel);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        toolBox = new QToolBox(framePanel);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setLayoutDirection(Qt::LeftToRight);
        toolBox->setAutoFillBackground(false);
        toolBox->setFrameShape(QFrame::NoFrame);
        pageRotinas = new QWidget();
        pageRotinas->setObjectName(QStringLiteral("pageRotinas"));
        pageRotinas->setGeometry(QRect(0, -5, 181, 417));
        verticalLayout_2 = new QVBoxLayout(pageRotinas);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        toolButtonRecursosHumanos = new QToolButton(pageRotinas);
        toolButtonRecursosHumanos->setObjectName(QStringLiteral("toolButtonRecursosHumanos"));
        toolButtonRecursosHumanos->setMaximumSize(QSize(400, 16777215));
        toolButtonRecursosHumanos->setContextMenuPolicy(Qt::ActionsContextMenu);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/grouprh.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonRecursosHumanos->setIcon(icon1);
        toolButtonRecursosHumanos->setIconSize(QSize(28, 28));
        toolButtonRecursosHumanos->setPopupMode(QToolButton::InstantPopup);
        toolButtonRecursosHumanos->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButtonRecursosHumanos->setArrowType(Qt::NoArrow);

        verticalLayout_2->addWidget(toolButtonRecursosHumanos);

        toolButtonIntegracaoFinanceira = new QToolButton(pageRotinas);
        toolButtonIntegracaoFinanceira->setObjectName(QStringLiteral("toolButtonIntegracaoFinanceira"));
        toolButtonIntegracaoFinanceira->setMaximumSize(QSize(400, 16777215));
        toolButtonIntegracaoFinanceira->setContextMenuPolicy(Qt::ActionsContextMenu);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/financeiro.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonIntegracaoFinanceira->setIcon(icon2);
        toolButtonIntegracaoFinanceira->setIconSize(QSize(28, 28));
        toolButtonIntegracaoFinanceira->setPopupMode(QToolButton::InstantPopup);
        toolButtonIntegracaoFinanceira->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButtonIntegracaoFinanceira->setArrowType(Qt::NoArrow);

        verticalLayout_2->addWidget(toolButtonIntegracaoFinanceira);

        toolButtonCartaoCrednosso = new QToolButton(pageRotinas);
        toolButtonCartaoCrednosso->setObjectName(QStringLiteral("toolButtonCartaoCrednosso"));
        toolButtonCartaoCrednosso->setMaximumSize(QSize(400, 16777215));
        toolButtonCartaoCrednosso->setContextMenuPolicy(Qt::ActionsContextMenu);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/credinosso_card.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonCartaoCrednosso->setIcon(icon3);
        toolButtonCartaoCrednosso->setIconSize(QSize(28, 28));
        toolButtonCartaoCrednosso->setPopupMode(QToolButton::InstantPopup);
        toolButtonCartaoCrednosso->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButtonCartaoCrednosso->setArrowType(Qt::NoArrow);

        verticalLayout_2->addWidget(toolButtonCartaoCrednosso);

        toolButtonBeneficios = new QToolButton(pageRotinas);
        toolButtonBeneficios->setObjectName(QStringLiteral("toolButtonBeneficios"));
        toolButtonBeneficios->setMaximumSize(QSize(400, 16777215));
        toolButtonBeneficios->setContextMenuPolicy(Qt::ActionsContextMenu);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/newspaper.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonBeneficios->setIcon(icon4);
        toolButtonBeneficios->setIconSize(QSize(28, 28));
        toolButtonBeneficios->setPopupMode(QToolButton::InstantPopup);
        toolButtonBeneficios->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButtonBeneficios->setArrowType(Qt::NoArrow);

        verticalLayout_2->addWidget(toolButtonBeneficios);

        toolButtonControlePonto = new QToolButton(pageRotinas);
        toolButtonControlePonto->setObjectName(QStringLiteral("toolButtonControlePonto"));
        toolButtonControlePonto->setMaximumSize(QSize(400, 16777215));
        toolButtonControlePonto->setContextMenuPolicy(Qt::ActionsContextMenu);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/clock-circular-outline.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonControlePonto->setIcon(icon5);
        toolButtonControlePonto->setIconSize(QSize(28, 28));
        toolButtonControlePonto->setPopupMode(QToolButton::InstantPopup);
        toolButtonControlePonto->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButtonControlePonto->setArrowType(Qt::NoArrow);

        verticalLayout_2->addWidget(toolButtonControlePonto);

        toolButtonFerramentas = new QToolButton(pageRotinas);
        toolButtonFerramentas->setObjectName(QStringLiteral("toolButtonFerramentas"));
        toolButtonFerramentas->setMaximumSize(QSize(400, 16777215));
        toolButtonFerramentas->setContextMenuPolicy(Qt::ActionsContextMenu);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/archive.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonFerramentas->setIcon(icon6);
        toolButtonFerramentas->setIconSize(QSize(28, 28));
        toolButtonFerramentas->setPopupMode(QToolButton::InstantPopup);
        toolButtonFerramentas->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButtonFerramentas->setArrowType(Qt::NoArrow);

        verticalLayout_2->addWidget(toolButtonFerramentas);

        botaoSair = new QToolButton(pageRotinas);
        botaoSair->setObjectName(QStringLiteral("botaoSair"));
        botaoSair->setMaximumSize(QSize(400, 16777215));
        botaoSair->setContextMenuPolicy(Qt::ActionsContextMenu);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoSair->setIcon(icon7);
        botaoSair->setIconSize(QSize(28, 28));
        botaoSair->setPopupMode(QToolButton::InstantPopup);
        botaoSair->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        botaoSair->setArrowType(Qt::NoArrow);

        verticalLayout_2->addWidget(botaoSair);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/order.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(pageRotinas, icon8, QStringLiteral("Rotinas"));
        pageUsuario = new QWidget();
        pageUsuario->setObjectName(QStringLiteral("pageUsuario"));
        pageUsuario->setGeometry(QRect(0, 0, 198, 412));
        verticalLayout_3 = new QVBoxLayout(pageUsuario);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        botaoAvatar = new QToolButton(pageUsuario);
        botaoAvatar->setObjectName(QStringLiteral("botaoAvatar"));
        botaoAvatar->setMinimumSize(QSize(0, 100));
        botaoAvatar->setMaximumSize(QSize(400, 16777215));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoAvatar->setIcon(icon9);
        botaoAvatar->setIconSize(QSize(64, 64));
        botaoAvatar->setPopupMode(QToolButton::InstantPopup);
        botaoAvatar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        botaoAvatar->setAutoRaise(true);

        verticalLayout_3->addWidget(botaoAvatar);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        toolBox->addItem(pageUsuario, icon9, QString::fromUtf8("Usu\303\241rio"));

        verticalLayout->addWidget(toolBox);


        gridLayout->addWidget(framePanel, 0, 0, 1, 1);

        tabWidget = new QTabWidget(framePanel_InfoSessao);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setDocumentMode(true);
        tabWidget->setTabsClosable(true);

        gridLayout->addWidget(tabWidget, 0, 1, 1, 1);


        gridLayout_2->addWidget(framePanel_InfoSessao, 1, 0, 1, 1);

        QWidget::setTabOrder(tabWidget, toolButtonRecursosHumanos);
        QWidget::setTabOrder(toolButtonRecursosHumanos, toolButtonIntegracaoFinanceira);
        QWidget::setTabOrder(toolButtonIntegracaoFinanceira, toolButtonCartaoCrednosso);
        QWidget::setTabOrder(toolButtonCartaoCrednosso, toolButtonBeneficios);
        QWidget::setTabOrder(toolButtonBeneficios, toolButtonControlePonto);
        QWidget::setTabOrder(toolButtonControlePonto, toolButtonFerramentas);
        QWidget::setTabOrder(toolButtonFerramentas, botaoSair);
        QWidget::setTabOrder(botaoSair, botaoAvatar);

        retranslateUi(Principal);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Principal);
    } // setupUi

    void retranslateUi(QWidget *Principal)
    {
        Principal->setWindowTitle(QApplication::translate("Principal", "Severino | Plano de Contas", Q_NULLPTR));
        statusDevelop->setText(QApplication::translate("Principal", "F\303\241bio Reis  - fabio.reis@grupomateus.com.br", Q_NULLPTR));
        statusAplicacao->setText(QApplication::translate("Principal", "[...]", Q_NULLPTR));
        campoTime->setText(QApplication::translate("Principal", "...", Q_NULLPTR));
        toolButtonRecursosHumanos->setText(QApplication::translate("Principal", "Recursos Humanos", Q_NULLPTR));
        toolButtonIntegracaoFinanceira->setText(QApplication::translate("Principal", "Or\303\247amentos", Q_NULLPTR));
        toolButtonCartaoCrednosso->setText(QApplication::translate("Principal", "Cart\303\243o Crednosso", Q_NULLPTR));
        toolButtonBeneficios->setText(QApplication::translate("Principal", "Benef\303\255cios", Q_NULLPTR));
        toolButtonControlePonto->setText(QApplication::translate("Principal", "Controle de Ponto", Q_NULLPTR));
        toolButtonFerramentas->setText(QApplication::translate("Principal", "Diversos", Q_NULLPTR));
        botaoSair->setText(QApplication::translate("Principal", "Sair", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(pageRotinas), QApplication::translate("Principal", "Rotinas", Q_NULLPTR));
        botaoAvatar->setText(QApplication::translate("Principal", "usu\303\241rio", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        botaoAvatar->setShortcut(QApplication::translate("Principal", "F12", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        toolBox->setItemText(toolBox->indexOf(pageUsuario), QApplication::translate("Principal", "Usu\303\241rio", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Principal: public Ui_Principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_H
