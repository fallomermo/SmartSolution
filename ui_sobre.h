/********************************************************************************
** Form generated from reading UI file 'sobre.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOBRE_H
#define UI_SOBRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sobre
{
public:
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Sobre)
    {
        if (Sobre->objectName().isEmpty())
            Sobre->setObjectName(QStringLiteral("Sobre"));
        Sobre->resize(773, 492);
        gridLayout = new QGridLayout(Sobre);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        plainTextEdit = new QPlainTextEdit(Sobre);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        QFont font;
        font.setPointSize(9);
        font.setBold(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        plainTextEdit->setFont(font);
        plainTextEdit->setReadOnly(true);

        gridLayout->addWidget(plainTextEdit, 0, 0, 1, 1);


        retranslateUi(Sobre);

        QMetaObject::connectSlotsByName(Sobre);
    } // setupUi

    void retranslateUi(QWidget *Sobre)
    {
        Sobre->setWindowTitle(QApplication::translate("Sobre", "Form", Q_NULLPTR));
        plainTextEdit->setDocumentTitle(QString());
        plainTextEdit->setPlainText(QApplication::translate("Sobre", "Morre o ator Paulo Silvino, Severino do Zorra Total, no Rio\n"
"O humorista lutava contra um c\303\242ncer desde setembro de 2016. O ator ficou conhecido por participar do programa Zorra Total, da TV Globo\n"
"\n"
"17 de Agosto de 2017 \303\240s 11:00\n"
"Atualizado 17/08/2017 11:16:47\n"
"Reda\303\247\303\243o Folha Vit\303\263ria\n"
"\n"
"Afastado da TV, o ator e humorista Paulo Silvino, 78 anos, morreu na manh\303\243 desta quinta-feira, 17. O ator estava lutando contra um c\303\242ncer no est\303\264mago. \n"
"\n"
"Silvino tinha o endocarcinoma, nome dado ao tumor maligno no est\303\264mago. Desde o in\303\255cio de setembro de 2016.\n"
"\n"
"No twitter, v\303\241rios internautas lamentaram a morte do ator. Uma f\303\243 escreveu: \"E assim se vai um grande humorista descanse em paz #PauloSilvino\". Um outro internauta lembrou da famosa frase que o humorista usava no programa: \"V\303\241 em Paz Paulo Silvino, sempre vou achar gra\303\247a do \"Isso \303\251 uma Bichona, ela ta falando: 'Clodoaldo!, Clodoa"
                        "ldo!' vai deixar saudades\".\n"
"\n"
"Pelo Facebook, o filho do ator lamentou a morte do pai: 'Que Deus te receba de bra\303\247os abertos meu pai amado', compartilhou o filho que tamb\303\251m \303\251 ator.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Sobre: public Ui_Sobre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOBRE_H
