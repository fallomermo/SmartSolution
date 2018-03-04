/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *widgetPrincipal;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_LoginPanel;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *toolButtonAdm;
    QToolButton *botaoPerfilFacebook;
    QToolButton *botaoPerfilInstagram;
    QToolButton *botaoPerfilTwitter;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_logo;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_InputLogin;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_Usuario;
    QVBoxLayout *verticalLayout_Labels;
    QLineEdit *campoUsuario;
    QLabel *label_Senha;
    QLineEdit *campoSenha;
    QVBoxLayout *verticalLayout_Buttons;
    QPushButton *botaoEntrar;
    QPushButton *botaoAbortar;
    QSpacerItem *horizontalSpacer_1;
    QSpacerItem *verticalSpacer;
    QLabel *labelStatus;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(1048, 512);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/iconeSeverino.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Login->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(Login);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widgetPrincipal = new QWidget(Login);
        widgetPrincipal->setObjectName(QStringLiteral("widgetPrincipal"));
        horizontalLayout = new QHBoxLayout(widgetPrincipal);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox_LoginPanel = new QGroupBox(widgetPrincipal);
        groupBox_LoginPanel->setObjectName(QStringLiteral("groupBox_LoginPanel"));
        groupBox_LoginPanel->setMaximumSize(QSize(400, 16777215));
        verticalLayout = new QVBoxLayout(groupBox_LoginPanel);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        toolButtonAdm = new QToolButton(groupBox_LoginPanel);
        toolButtonAdm->setObjectName(QStringLiteral("toolButtonAdm"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/iconeSeverino.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonAdm->setIcon(icon1);

        horizontalLayout_3->addWidget(toolButtonAdm);

        botaoPerfilFacebook = new QToolButton(groupBox_LoginPanel);
        botaoPerfilFacebook->setObjectName(QStringLiteral("botaoPerfilFacebook"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/facebook-app-logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoPerfilFacebook->setIcon(icon2);

        horizontalLayout_3->addWidget(botaoPerfilFacebook);

        botaoPerfilInstagram = new QToolButton(groupBox_LoginPanel);
        botaoPerfilInstagram->setObjectName(QStringLiteral("botaoPerfilInstagram"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/instagram-symbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoPerfilInstagram->setIcon(icon3);

        horizontalLayout_3->addWidget(botaoPerfilInstagram);

        botaoPerfilTwitter = new QToolButton(groupBox_LoginPanel);
        botaoPerfilTwitter->setObjectName(QStringLiteral("botaoPerfilTwitter"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/twitter-logo-on-black-background.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoPerfilTwitter->setIcon(icon4);

        horizontalLayout_3->addWidget(botaoPerfilTwitter);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        label_logo = new QLabel(groupBox_LoginPanel);
        label_logo->setObjectName(QStringLiteral("label_logo"));
        label_logo->setFrameShape(QFrame::NoFrame);
        label_logo->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_logo);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        groupBox_InputLogin = new QGroupBox(groupBox_LoginPanel);
        groupBox_InputLogin->setObjectName(QStringLiteral("groupBox_InputLogin"));
        groupBox_InputLogin->setMinimumSize(QSize(300, 0));
        groupBox_InputLogin->setMaximumSize(QSize(300, 250));
        verticalLayout_4 = new QVBoxLayout(groupBox_InputLogin);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_Usuario = new QLabel(groupBox_InputLogin);
        label_Usuario->setObjectName(QStringLiteral("label_Usuario"));
        label_Usuario->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_Usuario);

        verticalLayout_Labels = new QVBoxLayout();
        verticalLayout_Labels->setObjectName(QStringLiteral("verticalLayout_Labels"));
        campoUsuario = new QLineEdit(groupBox_InputLogin);
        campoUsuario->setObjectName(QStringLiteral("campoUsuario"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        campoUsuario->setFont(font);
        campoUsuario->setAlignment(Qt::AlignCenter);
        campoUsuario->setClearButtonEnabled(true);

        verticalLayout_Labels->addWidget(campoUsuario);

        label_Senha = new QLabel(groupBox_InputLogin);
        label_Senha->setObjectName(QStringLiteral("label_Senha"));
        label_Senha->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_Labels->addWidget(label_Senha);

        campoSenha = new QLineEdit(groupBox_InputLogin);
        campoSenha->setObjectName(QStringLiteral("campoSenha"));
        campoSenha->setFont(font);
        campoSenha->setEchoMode(QLineEdit::Password);
        campoSenha->setAlignment(Qt::AlignCenter);
        campoSenha->setClearButtonEnabled(true);

        verticalLayout_Labels->addWidget(campoSenha);


        verticalLayout_4->addLayout(verticalLayout_Labels);

        verticalLayout_Buttons = new QVBoxLayout();
        verticalLayout_Buttons->setObjectName(QStringLiteral("verticalLayout_Buttons"));
        botaoEntrar = new QPushButton(groupBox_InputLogin);
        botaoEntrar->setObjectName(QStringLiteral("botaoEntrar"));
        botaoEntrar->setAutoDefault(true);

        verticalLayout_Buttons->addWidget(botaoEntrar);

        botaoAbortar = new QPushButton(groupBox_InputLogin);
        botaoAbortar->setObjectName(QStringLiteral("botaoAbortar"));

        verticalLayout_Buttons->addWidget(botaoAbortar);


        verticalLayout_4->addLayout(verticalLayout_Buttons);


        horizontalLayout_2->addWidget(groupBox_InputLogin);

        horizontalSpacer_1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_1);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 227, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        labelStatus = new QLabel(groupBox_LoginPanel);
        labelStatus->setObjectName(QStringLiteral("labelStatus"));

        verticalLayout->addWidget(labelStatus);


        horizontalLayout->addWidget(groupBox_LoginPanel);


        verticalLayout_3->addWidget(widgetPrincipal);

        QWidget::setTabOrder(campoUsuario, campoSenha);
        QWidget::setTabOrder(campoSenha, botaoEntrar);
        QWidget::setTabOrder(botaoEntrar, botaoAbortar);
        QWidget::setTabOrder(botaoAbortar, toolButtonAdm);
        QWidget::setTabOrder(toolButtonAdm, botaoPerfilFacebook);
        QWidget::setTabOrder(botaoPerfilFacebook, botaoPerfilInstagram);
        QWidget::setTabOrder(botaoPerfilInstagram, botaoPerfilTwitter);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Severino ToolKit", nullptr));
        groupBox_LoginPanel->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        toolButtonAdm->setToolTip(QApplication::translate("Login", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">Acessar painel de gest\303\243o de usu\303\241rios.</span></p><p align=\"center\"><img src=\":/images/iconeSeverino.png\"/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        toolButtonAdm->setText(QApplication::translate("Login", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        botaoPerfilFacebook->setToolTip(QApplication::translate("Login", "<html><head/><body><p><br/></p><p><span style=\" font-weight:600; font-style:italic;\">Facebook: </span><a href=\"http://facebook.com/fallomermo\"><span style=\" text-decoration: underline; color:#007af4;\">http://facebook.com/fallomermo</span></a></p><p><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        botaoPerfilFacebook->setText(QApplication::translate("Login", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        botaoPerfilInstagram->setToolTip(QApplication::translate("Login", "<html><head/><body><p><br/></p><p><span style=\" font-weight:600;\">Instagram: </span><a href=\"http://instagram.com/fallomermo\"><span style=\" font-weight:600; text-decoration: underline; color:#007af4;\">http://instagram.com/fallomermo</span></a></p><p><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        botaoPerfilInstagram->setText(QApplication::translate("Login", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        botaoPerfilTwitter->setToolTip(QApplication::translate("Login", "<html><head/><body><p><br/></p><p><span style=\" font-weight:600;\">Twitter: </span><a href=\"http://twitter.com/fallomermo\"><span style=\" font-weight:600; text-decoration: underline; color:#007af4;\">http://twitter.com/fallomermo</span></a></p><p><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        botaoPerfilTwitter->setText(QApplication::translate("Login", "...", nullptr));
        label_logo->setText(QString());
        groupBox_InputLogin->setTitle(QString());
        label_Usuario->setText(QApplication::translate("Login", "Usu\303\241rio:", nullptr));
        campoUsuario->setPlaceholderText(QApplication::translate("Login", "Nome do usu\303\241rio...", nullptr));
        label_Senha->setText(QApplication::translate("Login", "Senha:", nullptr));
        botaoEntrar->setText(QApplication::translate("Login", "Entrar", nullptr));
        botaoAbortar->setText(QApplication::translate("Login", "Abortar", nullptr));
        labelStatus->setText(QApplication::translate("Login", "[...]", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
