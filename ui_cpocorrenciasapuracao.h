/********************************************************************************
** Form generated from reading UI file 'cpocorrenciasapuracao.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CPOCORRENCIASAPURACAO_H
#define UI_CPOCORRENCIASAPURACAO_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CPOcorrenciasApuracao
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QDateEdit *apuracaoPeriodoInicial;
    QDateEdit *apuracaoPeriodoFinal;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QDateEdit *demitidosPeriodoInicial;
    QDateEdit *demitidosPeriodoFinal;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *botaoProcessar;
    QPushButton *botaoExportar;
    QTableWidget *tableWidget;

    void setupUi(QWidget *CPOcorrenciasApuracao)
    {
        if (CPOcorrenciasApuracao->objectName().isEmpty())
            CPOcorrenciasApuracao->setObjectName(QStringLiteral("CPOcorrenciasApuracao"));
        CPOcorrenciasApuracao->resize(842, 344);
        gridLayout = new QGridLayout(CPOcorrenciasApuracao);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(CPOcorrenciasApuracao);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        apuracaoPeriodoInicial = new QDateEdit(groupBox);
        apuracaoPeriodoInicial->setObjectName(QStringLiteral("apuracaoPeriodoInicial"));
        apuracaoPeriodoInicial->setAlignment(Qt::AlignCenter);
        apuracaoPeriodoInicial->setCalendarPopup(true);

        horizontalLayout->addWidget(apuracaoPeriodoInicial);

        apuracaoPeriodoFinal = new QDateEdit(groupBox);
        apuracaoPeriodoFinal->setObjectName(QStringLiteral("apuracaoPeriodoFinal"));
        apuracaoPeriodoFinal->setAlignment(Qt::AlignCenter);
        apuracaoPeriodoFinal->setCalendarPopup(true);

        horizontalLayout->addWidget(apuracaoPeriodoFinal);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(CPOcorrenciasApuracao);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        demitidosPeriodoInicial = new QDateEdit(groupBox_2);
        demitidosPeriodoInicial->setObjectName(QStringLiteral("demitidosPeriodoInicial"));
        demitidosPeriodoInicial->setAlignment(Qt::AlignCenter);
        demitidosPeriodoInicial->setCalendarPopup(true);

        horizontalLayout_2->addWidget(demitidosPeriodoInicial);

        demitidosPeriodoFinal = new QDateEdit(groupBox_2);
        demitidosPeriodoFinal->setObjectName(QStringLiteral("demitidosPeriodoFinal"));
        demitidosPeriodoFinal->setAlignment(Qt::AlignCenter);
        demitidosPeriodoFinal->setCalendarPopup(true);

        horizontalLayout_2->addWidget(demitidosPeriodoFinal);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        frame = new QFrame(CPOcorrenciasApuracao);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        botaoProcessar = new QPushButton(frame);
        botaoProcessar->setObjectName(QStringLiteral("botaoProcessar"));

        horizontalLayout_3->addWidget(botaoProcessar);

        botaoExportar = new QPushButton(frame);
        botaoExportar->setObjectName(QStringLiteral("botaoExportar"));

        horizontalLayout_3->addWidget(botaoExportar);


        gridLayout->addWidget(frame, 1, 0, 1, 2);

        tableWidget = new QTableWidget(CPOcorrenciasApuracao);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 2, 0, 1, 2);

        QWidget::setTabOrder(apuracaoPeriodoInicial, apuracaoPeriodoFinal);
        QWidget::setTabOrder(apuracaoPeriodoFinal, demitidosPeriodoInicial);
        QWidget::setTabOrder(demitidosPeriodoInicial, demitidosPeriodoFinal);
        QWidget::setTabOrder(demitidosPeriodoFinal, botaoProcessar);
        QWidget::setTabOrder(botaoProcessar, botaoExportar);
        QWidget::setTabOrder(botaoExportar, tableWidget);

        retranslateUi(CPOcorrenciasApuracao);

        QMetaObject::connectSlotsByName(CPOcorrenciasApuracao);
    } // setupUi

    void retranslateUi(QWidget *CPOcorrenciasApuracao)
    {
        CPOcorrenciasApuracao->setWindowTitle(QApplication::translate("CPOcorrenciasApuracao", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("CPOcorrenciasApuracao", "Per\303\255odo de Apura\303\247\303\243o", Q_NULLPTR));
        apuracaoPeriodoInicial->setDisplayFormat(QApplication::translate("CPOcorrenciasApuracao", "dd/MM/yyyy", Q_NULLPTR));
        apuracaoPeriodoFinal->setDisplayFormat(QApplication::translate("CPOcorrenciasApuracao", "dd/MM/yyyy", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("CPOcorrenciasApuracao", "Per\303\255odo de Demitidos", Q_NULLPTR));
        demitidosPeriodoInicial->setDisplayFormat(QApplication::translate("CPOcorrenciasApuracao", "dd/MM/yyyy", Q_NULLPTR));
        demitidosPeriodoFinal->setDisplayFormat(QApplication::translate("CPOcorrenciasApuracao", "dd/MM/yyyy", Q_NULLPTR));
        botaoProcessar->setText(QApplication::translate("CPOcorrenciasApuracao", "Processar", Q_NULLPTR));
        botaoExportar->setText(QApplication::translate("CPOcorrenciasApuracao", "Exportar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CPOcorrenciasApuracao: public Ui_CPOcorrenciasApuracao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CPOCORRENCIASAPURACAO_H
