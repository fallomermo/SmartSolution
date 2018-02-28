/********************************************************************************
** Form generated from reading UI file 'ocorrenciasapuracao.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OCORRENCIASAPURACAO_H
#define UI_OCORRENCIASAPURACAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OcorrenciasApuracao
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QDateEdit *inicioPeriiodo;
    QDateEdit *finalPeriodo;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *botaoProcessar;
    QPushButton *botaoExportar;
    QLineEdit *lineEdit;
    QTreeWidget *treeWidget;

    void setupUi(QWidget *OcorrenciasApuracao)
    {
        if (OcorrenciasApuracao->objectName().isEmpty())
            OcorrenciasApuracao->setObjectName(QStringLiteral("OcorrenciasApuracao"));
        OcorrenciasApuracao->resize(619, 391);
        gridLayout = new QGridLayout(OcorrenciasApuracao);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(OcorrenciasApuracao);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        inicioPeriiodo = new QDateEdit(groupBox);
        inicioPeriiodo->setObjectName(QStringLiteral("inicioPeriiodo"));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        inicioPeriiodo->setFont(font);
        inicioPeriiodo->setAlignment(Qt::AlignCenter);
        inicioPeriiodo->setCalendarPopup(true);

        horizontalLayout->addWidget(inicioPeriiodo);

        finalPeriodo = new QDateEdit(groupBox);
        finalPeriodo->setObjectName(QStringLiteral("finalPeriodo"));
        finalPeriodo->setFont(font);
        finalPeriodo->setAlignment(Qt::AlignCenter);
        finalPeriodo->setCalendarPopup(true);

        horizontalLayout->addWidget(finalPeriodo);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(OcorrenciasApuracao);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        botaoProcessar = new QPushButton(groupBox_2);
        botaoProcessar->setObjectName(QStringLiteral("botaoProcessar"));

        horizontalLayout_2->addWidget(botaoProcessar);

        botaoExportar = new QPushButton(groupBox_2);
        botaoExportar->setObjectName(QStringLiteral("botaoExportar"));

        horizontalLayout_2->addWidget(botaoExportar);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        lineEdit = new QLineEdit(OcorrenciasApuracao);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 0, 1, 2);

        treeWidget = new QTreeWidget(OcorrenciasApuracao);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        gridLayout->addWidget(treeWidget, 2, 0, 1, 2);

        QWidget::setTabOrder(inicioPeriiodo, finalPeriodo);
        QWidget::setTabOrder(finalPeriodo, botaoProcessar);
        QWidget::setTabOrder(botaoProcessar, botaoExportar);
        QWidget::setTabOrder(botaoExportar, lineEdit);
        QWidget::setTabOrder(lineEdit, treeWidget);

        retranslateUi(OcorrenciasApuracao);

        QMetaObject::connectSlotsByName(OcorrenciasApuracao);
    } // setupUi

    void retranslateUi(QWidget *OcorrenciasApuracao)
    {
        OcorrenciasApuracao->setWindowTitle(QApplication::translate("OcorrenciasApuracao", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("OcorrenciasApuracao", "Per\303\255odo", Q_NULLPTR));
        inicioPeriiodo->setDisplayFormat(QApplication::translate("OcorrenciasApuracao", "dd/MM/yyyy", Q_NULLPTR));
        finalPeriodo->setDisplayFormat(QApplication::translate("OcorrenciasApuracao", "dd/MM/yyyy", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("OcorrenciasApuracao", "Per\303\255odo", Q_NULLPTR));
        botaoProcessar->setText(QApplication::translate("OcorrenciasApuracao", "Processar", Q_NULLPTR));
        botaoExportar->setText(QApplication::translate("OcorrenciasApuracao", "Exportar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OcorrenciasApuracao: public Ui_OcorrenciasApuracao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OCORRENCIASAPURACAO_H
