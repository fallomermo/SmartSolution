/********************************************************************************
** Form generated from reading UI file 'pesquisar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PESQUISAR_H
#define UI_PESQUISAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pesquisar
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *botaoOK;
    QPushButton *botaoCancelar;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *Pesquisar)
    {
        if (Pesquisar->objectName().isEmpty())
            Pesquisar->setObjectName(QStringLiteral("Pesquisar"));
        Pesquisar->resize(425, 336);
        Pesquisar->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(Pesquisar);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidget = new QTableWidget(Pesquisar);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setSortingEnabled(true);

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        botaoOK = new QPushButton(Pesquisar);
        botaoOK->setObjectName(QStringLiteral("botaoOK"));

        horizontalLayout->addWidget(botaoOK);

        botaoCancelar = new QPushButton(Pesquisar);
        botaoCancelar->setObjectName(QStringLiteral("botaoCancelar"));

        horizontalLayout->addWidget(botaoCancelar);

        horizontalSpacer = new QSpacerItem(218, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        QWidget::setTabOrder(tableWidget, botaoOK);
        QWidget::setTabOrder(botaoOK, botaoCancelar);

        retranslateUi(Pesquisar);

        QMetaObject::connectSlotsByName(Pesquisar);
    } // setupUi

    void retranslateUi(QWidget *Pesquisar)
    {
        Pesquisar->setWindowTitle(QApplication::translate("Pesquisar", "Form", Q_NULLPTR));
        botaoOK->setText(QApplication::translate("Pesquisar", "OK", Q_NULLPTR));
        botaoCancelar->setText(QApplication::translate("Pesquisar", "Cancelar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Pesquisar: public Ui_Pesquisar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PESQUISAR_H
