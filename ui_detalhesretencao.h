/********************************************************************************
** Form generated from reading UI file 'detalhesretencao.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETALHESRETENCAO_H
#define UI_DETALHESRETENCAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DetalhesRetencao
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_Status;
    QGridLayout *gridLayout_3;
    QLabel *percentualRetido;
    QGroupBox *groupBox_Responsavel;
    QHBoxLayout *horizontalLayout;
    QLabel *campoResponsavelSelecao;
    QLabel *campoStatus;
    QGroupBox *groupBox_Resultados;
    QGridLayout *gridLayout;
    QLabel *campoNumeroAdmitidos;
    QLabel *label_3;
    QLabel *campoNumeroDemitidos;
    QLabel *label_6;
    QLabel *campoPeriodoApuracao;
    QLabel *label_9;

    void setupUi(QDialog *DetalhesRetencao)
    {
        if (DetalhesRetencao->objectName().isEmpty())
            DetalhesRetencao->setObjectName(QStringLiteral("DetalhesRetencao"));
        DetalhesRetencao->resize(614, 229);
        gridLayout_2 = new QGridLayout(DetalhesRetencao);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox_Status = new QGroupBox(DetalhesRetencao);
        groupBox_Status->setObjectName(QStringLiteral("groupBox_Status"));
        gridLayout_3 = new QGridLayout(groupBox_Status);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        percentualRetido = new QLabel(groupBox_Status);
        percentualRetido->setObjectName(QStringLiteral("percentualRetido"));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        percentualRetido->setFont(font);
        percentualRetido->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(percentualRetido, 0, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_Status, 1, 1, 1, 1);

        groupBox_Responsavel = new QGroupBox(DetalhesRetencao);
        groupBox_Responsavel->setObjectName(QStringLiteral("groupBox_Responsavel"));
        horizontalLayout = new QHBoxLayout(groupBox_Responsavel);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        campoResponsavelSelecao = new QLabel(groupBox_Responsavel);
        campoResponsavelSelecao->setObjectName(QStringLiteral("campoResponsavelSelecao"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        campoResponsavelSelecao->setFont(font1);
        campoResponsavelSelecao->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(campoResponsavelSelecao);

        campoStatus = new QLabel(groupBox_Responsavel);
        campoStatus->setObjectName(QStringLiteral("campoStatus"));
        campoStatus->setMaximumSize(QSize(50, 16777215));
        campoStatus->setFont(font1);
        campoStatus->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(campoStatus);


        gridLayout_2->addWidget(groupBox_Responsavel, 0, 0, 1, 2);

        groupBox_Resultados = new QGroupBox(DetalhesRetencao);
        groupBox_Resultados->setObjectName(QStringLiteral("groupBox_Resultados"));
        gridLayout = new QGridLayout(groupBox_Resultados);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        campoNumeroAdmitidos = new QLabel(groupBox_Resultados);
        campoNumeroAdmitidos->setObjectName(QStringLiteral("campoNumeroAdmitidos"));

        gridLayout->addWidget(campoNumeroAdmitidos, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox_Resultados);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        campoNumeroDemitidos = new QLabel(groupBox_Resultados);
        campoNumeroDemitidos->setObjectName(QStringLiteral("campoNumeroDemitidos"));

        gridLayout->addWidget(campoNumeroDemitidos, 2, 1, 1, 1);

        label_6 = new QLabel(groupBox_Resultados);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        campoPeriodoApuracao = new QLabel(groupBox_Resultados);
        campoPeriodoApuracao->setObjectName(QStringLiteral("campoPeriodoApuracao"));

        gridLayout->addWidget(campoPeriodoApuracao, 0, 1, 1, 1);

        label_9 = new QLabel(groupBox_Resultados);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_Resultados, 1, 0, 1, 1);


        retranslateUi(DetalhesRetencao);

        QMetaObject::connectSlotsByName(DetalhesRetencao);
    } // setupUi

    void retranslateUi(QDialog *DetalhesRetencao)
    {
        DetalhesRetencao->setWindowTitle(QApplication::translate("DetalhesRetencao", "Dialog", nullptr));
        groupBox_Status->setTitle(QApplication::translate("DetalhesRetencao", "Reten\303\247\303\243o", nullptr));
        percentualRetido->setText(QApplication::translate("DetalhesRetencao", "%", nullptr));
        groupBox_Responsavel->setTitle(QApplication::translate("DetalhesRetencao", "Respons\303\241vel pela Sele\303\247\303\243o", nullptr));
        campoResponsavelSelecao->setText(QString());
        campoStatus->setText(QString());
        groupBox_Resultados->setTitle(QApplication::translate("DetalhesRetencao", "Resultados", nullptr));
        campoNumeroAdmitidos->setText(QString());
        label_3->setText(QApplication::translate("DetalhesRetencao", "N\303\272mero e Admitidos:", nullptr));
        campoNumeroDemitidos->setText(QString());
        label_6->setText(QApplication::translate("DetalhesRetencao", "N\303\272mero e Demitidos:", nullptr));
        campoPeriodoApuracao->setText(QString());
        label_9->setText(QApplication::translate("DetalhesRetencao", "Per\303\255odo:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DetalhesRetencao: public Ui_DetalhesRetencao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETALHESRETENCAO_H
