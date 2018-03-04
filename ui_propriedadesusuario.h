/********************************************************************************
** Form generated from reading UI file 'propriedadesusuario.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPRIEDADESUSUARIO_H
#define UI_PROPRIEDADESUSUARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PropriedadesUsuario
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QPushButton *botaoAlterarUsuario;
    QPushButton *botaoAlterarSenha;

    void setupUi(QWidget *PropriedadesUsuario)
    {
        if (PropriedadesUsuario->objectName().isEmpty())
            PropriedadesUsuario->setObjectName(QStringLiteral("PropriedadesUsuario"));
        PropriedadesUsuario->resize(181, 90);
        PropriedadesUsuario->setMinimumSize(QSize(181, 90));
        gridLayout = new QGridLayout(PropriedadesUsuario);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(PropriedadesUsuario);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        botaoAlterarUsuario = new QPushButton(frame);
        botaoAlterarUsuario->setObjectName(QStringLiteral("botaoAlterarUsuario"));

        verticalLayout->addWidget(botaoAlterarUsuario);

        botaoAlterarSenha = new QPushButton(frame);
        botaoAlterarSenha->setObjectName(QStringLiteral("botaoAlterarSenha"));

        verticalLayout->addWidget(botaoAlterarSenha);


        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(PropriedadesUsuario);

        QMetaObject::connectSlotsByName(PropriedadesUsuario);
    } // setupUi

    void retranslateUi(QWidget *PropriedadesUsuario)
    {
        PropriedadesUsuario->setWindowTitle(QApplication::translate("PropriedadesUsuario", "Form", nullptr));
        botaoAlterarUsuario->setText(QApplication::translate("PropriedadesUsuario", "Alterar Usu\303\241rio", nullptr));
        botaoAlterarSenha->setText(QApplication::translate("PropriedadesUsuario", "Alterar Senha", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PropriedadesUsuario: public Ui_PropriedadesUsuario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPRIEDADESUSUARIO_H
