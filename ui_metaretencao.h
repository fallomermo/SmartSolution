/********************************************************************************
** Form generated from reading UI file 'metaretencao.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METARETENCAO_H
#define UI_METARETENCAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MetaRetencao
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *botaoProcessar;
    QPushButton *botaoExportar;
    QDateEdit *periodoInicio;
    QDateEdit *periodoFim;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QLabel *campoNumeroDeAdmitidos;
    QLabel *campoNumeroDeDemitidos;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *campoPercentualRetido;
    QLineEdit *campoPesquisarObjetosTabela;
    QTableWidget *tableWidget;

    void setupUi(QWidget *MetaRetencao)
    {
        if (MetaRetencao->objectName().isEmpty())
            MetaRetencao->setObjectName(QStringLiteral("MetaRetencao"));
        MetaRetencao->resize(529, 214);
        gridLayout_3 = new QGridLayout(MetaRetencao);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox = new QGroupBox(MetaRetencao);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        botaoProcessar = new QPushButton(groupBox);
        botaoProcessar->setObjectName(QStringLiteral("botaoProcessar"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/paper-plane.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoProcessar->setIcon(icon);

        gridLayout->addWidget(botaoProcessar, 2, 0, 1, 1);

        botaoExportar = new QPushButton(groupBox);
        botaoExportar->setObjectName(QStringLiteral("botaoExportar"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/csv-file-format-extension.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoExportar->setIcon(icon1);

        gridLayout->addWidget(botaoExportar, 2, 1, 1, 1);

        periodoInicio = new QDateEdit(groupBox);
        periodoInicio->setObjectName(QStringLiteral("periodoInicio"));
        periodoInicio->setMinimumSize(QSize(100, 0));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        periodoInicio->setFont(font);
        periodoInicio->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(periodoInicio, 0, 0, 1, 1);

        periodoFim = new QDateEdit(groupBox);
        periodoFim->setObjectName(QStringLiteral("periodoFim"));
        periodoFim->setMinimumSize(QSize(100, 0));
        periodoFim->setFont(font);
        periodoFim->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(periodoFim, 0, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(MetaRetencao);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        campoNumeroDeAdmitidos = new QLabel(groupBox_4);
        campoNumeroDeAdmitidos->setObjectName(QStringLiteral("campoNumeroDeAdmitidos"));
        campoNumeroDeAdmitidos->setFont(font);
        campoNumeroDeAdmitidos->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(campoNumeroDeAdmitidos, 0, 1, 1, 1);

        campoNumeroDeDemitidos = new QLabel(groupBox_4);
        campoNumeroDeDemitidos->setObjectName(QStringLiteral("campoNumeroDeDemitidos"));
        campoNumeroDeDemitidos->setFont(font);
        campoNumeroDeDemitidos->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(campoNumeroDeDemitidos, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_4, 1, 0, 1, 1);

        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_5, 2, 0, 1, 1);

        campoPercentualRetido = new QLabel(groupBox_4);
        campoPercentualRetido->setObjectName(QStringLiteral("campoPercentualRetido"));
        campoPercentualRetido->setFont(font);
        campoPercentualRetido->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(campoPercentualRetido, 2, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_4, 0, 1, 1, 1);

        campoPesquisarObjetosTabela = new QLineEdit(MetaRetencao);
        campoPesquisarObjetosTabela->setObjectName(QStringLiteral("campoPesquisarObjetosTabela"));

        gridLayout_3->addWidget(campoPesquisarObjetosTabela, 1, 0, 1, 2);

        tableWidget = new QTableWidget(MetaRetencao);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout_3->addWidget(tableWidget, 2, 0, 1, 2);

        QWidget::setTabOrder(botaoProcessar, botaoExportar);
        QWidget::setTabOrder(botaoExportar, campoPesquisarObjetosTabela);
        QWidget::setTabOrder(campoPesquisarObjetosTabela, tableWidget);

        retranslateUi(MetaRetencao);

        QMetaObject::connectSlotsByName(MetaRetencao);
    } // setupUi

    void retranslateUi(QWidget *MetaRetencao)
    {
        MetaRetencao->setWindowTitle(QApplication::translate("MetaRetencao", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MetaRetencao", "Per\303\255odo", Q_NULLPTR));
        botaoProcessar->setText(QApplication::translate("MetaRetencao", "Processar", Q_NULLPTR));
        botaoExportar->setText(QApplication::translate("MetaRetencao", "Exportar", Q_NULLPTR));
        periodoInicio->setDisplayFormat(QApplication::translate("MetaRetencao", "MM/yyyy", Q_NULLPTR));
        periodoFim->setDisplayFormat(QApplication::translate("MetaRetencao", "MM/yyyy", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MetaRetencao", "Scouts", Q_NULLPTR));
        campoNumeroDeAdmitidos->setText(QString());
        campoNumeroDeDemitidos->setText(QString());
        label_3->setText(QApplication::translate("MetaRetencao", "Admitidos:", Q_NULLPTR));
        label_4->setText(QApplication::translate("MetaRetencao", "Demitidos:", Q_NULLPTR));
        label_5->setText(QApplication::translate("MetaRetencao", "% Reten\303\247\303\243o:", Q_NULLPTR));
        campoPercentualRetido->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MetaRetencao: public Ui_MetaRetencao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METARETENCAO_H
