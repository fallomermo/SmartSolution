/********************************************************************************
** Form generated from reading UI file 'metaretencao.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
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
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QDateEdit *periodoInicio;
    QDateEdit *periodoFim;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *botaoProcessar;
    QPushButton *botaoExportar;
    QFrame *frameScouts;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLabel *campoNumeroDeAdmitidos;
    QLabel *label_4;
    QLabel *campoNumeroDeDemitidos;
    QLabel *label_5;
    QLabel *campoPercentualRetido;
    QLineEdit *campoPesquisarObjetosTabela;
    QTableWidget *tableWidget;

    void setupUi(QWidget *MetaRetencao)
    {
        if (MetaRetencao->objectName().isEmpty())
            MetaRetencao->setObjectName(QStringLiteral("MetaRetencao"));
        MetaRetencao->resize(549, 418);
        gridLayout = new QGridLayout(MetaRetencao);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(MetaRetencao);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        periodoInicio = new QDateEdit(groupBox);
        periodoInicio->setObjectName(QStringLiteral("periodoInicio"));
        periodoInicio->setMinimumSize(QSize(100, 0));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        periodoInicio->setFont(font);
        periodoInicio->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(periodoInicio);

        periodoFim = new QDateEdit(groupBox);
        periodoFim->setObjectName(QStringLiteral("periodoFim"));
        periodoFim->setMinimumSize(QSize(100, 0));
        periodoFim->setFont(font);
        periodoFim->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(periodoFim);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(MetaRetencao);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        botaoProcessar = new QPushButton(groupBox_2);
        botaoProcessar->setObjectName(QStringLiteral("botaoProcessar"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/paper-plane.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoProcessar->setIcon(icon);

        horizontalLayout->addWidget(botaoProcessar);

        botaoExportar = new QPushButton(groupBox_2);
        botaoExportar->setObjectName(QStringLiteral("botaoExportar"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/csv-file-format-extension.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoExportar->setIcon(icon1);

        horizontalLayout->addWidget(botaoExportar);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        frameScouts = new QFrame(MetaRetencao);
        frameScouts->setObjectName(QStringLiteral("frameScouts"));
        frameScouts->setFrameShape(QFrame::StyledPanel);
        frameScouts->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frameScouts);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(frameScouts);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_3);

        campoNumeroDeAdmitidos = new QLabel(frameScouts);
        campoNumeroDeAdmitidos->setObjectName(QStringLiteral("campoNumeroDeAdmitidos"));
        campoNumeroDeAdmitidos->setFont(font);
        campoNumeroDeAdmitidos->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(campoNumeroDeAdmitidos);

        label_4 = new QLabel(frameScouts);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_4);

        campoNumeroDeDemitidos = new QLabel(frameScouts);
        campoNumeroDeDemitidos->setObjectName(QStringLiteral("campoNumeroDeDemitidos"));
        campoNumeroDeDemitidos->setFont(font);
        campoNumeroDeDemitidos->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(campoNumeroDeDemitidos);

        label_5 = new QLabel(frameScouts);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_5);

        campoPercentualRetido = new QLabel(frameScouts);
        campoPercentualRetido->setObjectName(QStringLiteral("campoPercentualRetido"));
        campoPercentualRetido->setFont(font);
        campoPercentualRetido->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(campoPercentualRetido);


        gridLayout->addWidget(frameScouts, 1, 0, 1, 2);

        campoPesquisarObjetosTabela = new QLineEdit(MetaRetencao);
        campoPesquisarObjetosTabela->setObjectName(QStringLiteral("campoPesquisarObjetosTabela"));

        gridLayout->addWidget(campoPesquisarObjetosTabela, 2, 0, 1, 2);

        tableWidget = new QTableWidget(MetaRetencao);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 3, 0, 1, 2);

        QWidget::setTabOrder(campoPesquisarObjetosTabela, tableWidget);

        retranslateUi(MetaRetencao);

        QMetaObject::connectSlotsByName(MetaRetencao);
    } // setupUi

    void retranslateUi(QWidget *MetaRetencao)
    {
        MetaRetencao->setWindowTitle(QApplication::translate("MetaRetencao", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("MetaRetencao", "Per\303\255odo", nullptr));
        periodoInicio->setDisplayFormat(QApplication::translate("MetaRetencao", "MM/yyyy", nullptr));
        periodoFim->setDisplayFormat(QApplication::translate("MetaRetencao", "MM/yyyy", nullptr));
        groupBox_2->setTitle(QApplication::translate("MetaRetencao", "A\303\247\303\265es", nullptr));
        botaoProcessar->setText(QApplication::translate("MetaRetencao", "Processar", nullptr));
        botaoExportar->setText(QApplication::translate("MetaRetencao", "Exportar", nullptr));
        label_3->setText(QApplication::translate("MetaRetencao", "Admitidos:", nullptr));
        campoNumeroDeAdmitidos->setText(QString());
        label_4->setText(QApplication::translate("MetaRetencao", "Demitidos:", nullptr));
        campoNumeroDeDemitidos->setText(QString());
        label_5->setText(QApplication::translate("MetaRetencao", "% Reten\303\247\303\243o:", nullptr));
        campoPercentualRetido->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MetaRetencao: public Ui_MetaRetencao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METARETENCAO_H
