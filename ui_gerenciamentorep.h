/********************************************************************************
** Form generated from reading UI file 'gerenciamentorep.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GERENCIAMENTOREP_H
#define UI_GERENCIAMENTOREP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GerenciamentoREP
{
public:
    QVBoxLayout *verticalLayout;
    QDial *dial;

    void setupUi(QWidget *GerenciamentoREP)
    {
        if (GerenciamentoREP->objectName().isEmpty())
            GerenciamentoREP->setObjectName(QStringLiteral("GerenciamentoREP"));
        GerenciamentoREP->resize(400, 300);
        verticalLayout = new QVBoxLayout(GerenciamentoREP);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        dial = new QDial(GerenciamentoREP);
        dial->setObjectName(QStringLiteral("dial"));

        verticalLayout->addWidget(dial);


        retranslateUi(GerenciamentoREP);

        QMetaObject::connectSlotsByName(GerenciamentoREP);
    } // setupUi

    void retranslateUi(QWidget *GerenciamentoREP)
    {
        GerenciamentoREP->setWindowTitle(QApplication::translate("GerenciamentoREP", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GerenciamentoREP: public Ui_GerenciamentoREP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GERENCIAMENTOREP_H
