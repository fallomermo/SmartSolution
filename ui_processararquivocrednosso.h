/********************************************************************************
** Form generated from reading UI file 'processararquivocrednosso.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESSARARQUIVOCREDNOSSO_H
#define UI_PROCESSARARQUIVOCREDNOSSO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProcessarArquivoCrednosso
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *botaoAtualizar;
    QSpacerItem *horizontalSpacer;
    QPushButton *botaoExportar;
    QPushButton *botaoConverter;
    QComboBox *comboBox;
    QLineEdit *campoLocalDoArquivo;
    QLineEdit *campoPesquisarObjetosTabela;
    QTableWidget *tableWidget;

    void setupUi(QWidget *ProcessarArquivoCrednosso)
    {
        if (ProcessarArquivoCrednosso->objectName().isEmpty())
            ProcessarArquivoCrednosso->setObjectName(QStringLiteral("ProcessarArquivoCrednosso"));
        ProcessarArquivoCrednosso->resize(603, 432);
        gridLayout_2 = new QGridLayout(ProcessarArquivoCrednosso);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(ProcessarArquivoCrednosso);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        botaoAtualizar = new QPushButton(groupBox);
        botaoAtualizar->setObjectName(QStringLiteral("botaoAtualizar"));

        gridLayout->addWidget(botaoAtualizar, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(396, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 3, 1, 2);

        botaoExportar = new QPushButton(groupBox);
        botaoExportar->setObjectName(QStringLiteral("botaoExportar"));

        gridLayout->addWidget(botaoExportar, 3, 2, 1, 1);

        botaoConverter = new QPushButton(groupBox);
        botaoConverter->setObjectName(QStringLiteral("botaoConverter"));

        gridLayout->addWidget(botaoConverter, 3, 0, 1, 1);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        comboBox->setFont(font);

        gridLayout->addWidget(comboBox, 1, 0, 1, 5);

        campoLocalDoArquivo = new QLineEdit(groupBox);
        campoLocalDoArquivo->setObjectName(QStringLiteral("campoLocalDoArquivo"));
        campoLocalDoArquivo->setReadOnly(true);

        gridLayout->addWidget(campoLocalDoArquivo, 2, 0, 1, 5);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        campoPesquisarObjetosTabela = new QLineEdit(ProcessarArquivoCrednosso);
        campoPesquisarObjetosTabela->setObjectName(QStringLiteral("campoPesquisarObjetosTabela"));

        gridLayout_2->addWidget(campoPesquisarObjetosTabela, 1, 0, 1, 1);

        tableWidget = new QTableWidget(ProcessarArquivoCrednosso);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout_2->addWidget(tableWidget, 2, 0, 1, 1);

        QWidget::setTabOrder(comboBox, campoLocalDoArquivo);
        QWidget::setTabOrder(campoLocalDoArquivo, botaoConverter);
        QWidget::setTabOrder(botaoConverter, botaoAtualizar);
        QWidget::setTabOrder(botaoAtualizar, botaoExportar);
        QWidget::setTabOrder(botaoExportar, campoPesquisarObjetosTabela);
        QWidget::setTabOrder(campoPesquisarObjetosTabela, tableWidget);

        retranslateUi(ProcessarArquivoCrednosso);

        QMetaObject::connectSlotsByName(ProcessarArquivoCrednosso);
    } // setupUi

    void retranslateUi(QWidget *ProcessarArquivoCrednosso)
    {
        ProcessarArquivoCrednosso->setWindowTitle(QApplication::translate("ProcessarArquivoCrednosso", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ProcessarArquivoCrednosso", "Informa\303\247\303\265es do arquivo", Q_NULLPTR));
        botaoAtualizar->setText(QApplication::translate("ProcessarArquivoCrednosso", "Atualizar", Q_NULLPTR));
        botaoExportar->setText(QApplication::translate("ProcessarArquivoCrednosso", "Exportar", Q_NULLPTR));
        botaoConverter->setText(QApplication::translate("ProcessarArquivoCrednosso", "Converter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        campoLocalDoArquivo->setToolTip(QApplication::translate("ProcessarArquivoCrednosso", "<html><head/><body><p><span style=\" font-size:9pt;\">Caminho onde o arquivo (</span><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">TXT/DAT</span><span style=\" font-size:9pt;\">) est\303\241 localizado.</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        campoLocalDoArquivo->setPlaceholderText(QApplication::translate("ProcessarArquivoCrednosso", "Endere\303\247o completo do arquivo selecionado...", Q_NULLPTR));
        campoPesquisarObjetosTabela->setPlaceholderText(QApplication::translate("ProcessarArquivoCrednosso", "Pesquise um item na tabela abaixo digitando aqui...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ProcessarArquivoCrednosso: public Ui_ProcessarArquivoCrednosso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESSARARQUIVOCREDNOSSO_H
