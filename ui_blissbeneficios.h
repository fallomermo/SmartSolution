/********************************************************************************
** Form generated from reading UI file 'blissbeneficios.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLISSBENEFICIOS_H
#define UI_BLISSBENEFICIOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BlissBeneficios
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *campoImportacaoRubi;
    QRadioButton *campoImportacaoVT;
    QLineEdit *campoLocalDoArquivo;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *botaoProcessar;
    QPushButton *botaoExportar;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidget;

    void setupUi(QWidget *BlissBeneficios)
    {
        if (BlissBeneficios->objectName().isEmpty())
            BlissBeneficios->setObjectName(QStringLiteral("BlissBeneficios"));
        BlissBeneficios->resize(430, 326);
        gridLayout = new QGridLayout(BlissBeneficios);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(BlissBeneficios);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        campoImportacaoRubi = new QRadioButton(groupBox);
        campoImportacaoRubi->setObjectName(QStringLiteral("campoImportacaoRubi"));
        campoImportacaoRubi->setChecked(true);

        horizontalLayout->addWidget(campoImportacaoRubi);

        campoImportacaoVT = new QRadioButton(groupBox);
        campoImportacaoVT->setObjectName(QStringLiteral("campoImportacaoVT"));

        horizontalLayout->addWidget(campoImportacaoVT);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        campoLocalDoArquivo = new QLineEdit(BlissBeneficios);
        campoLocalDoArquivo->setObjectName(QStringLiteral("campoLocalDoArquivo"));
        campoLocalDoArquivo->setReadOnly(true);

        gridLayout->addWidget(campoLocalDoArquivo, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        botaoProcessar = new QPushButton(BlissBeneficios);
        botaoProcessar->setObjectName(QStringLiteral("botaoProcessar"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/compass.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoProcessar->setIcon(icon);

        horizontalLayout_2->addWidget(botaoProcessar);

        botaoExportar = new QPushButton(BlissBeneficios);
        botaoExportar->setObjectName(QStringLiteral("botaoExportar"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/txt-file-symbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoExportar->setIcon(icon1);

        horizontalLayout_2->addWidget(botaoExportar);

        horizontalSpacer = new QSpacerItem(338, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        tableWidget = new QTableWidget(BlissBeneficios);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 3, 0, 1, 1);

        QWidget::setTabOrder(campoImportacaoRubi, campoImportacaoVT);
        QWidget::setTabOrder(campoImportacaoVT, campoLocalDoArquivo);
        QWidget::setTabOrder(campoLocalDoArquivo, botaoProcessar);
        QWidget::setTabOrder(botaoProcessar, botaoExportar);
        QWidget::setTabOrder(botaoExportar, tableWidget);

        retranslateUi(BlissBeneficios);

        QMetaObject::connectSlotsByName(BlissBeneficios);
    } // setupUi

    void retranslateUi(QWidget *BlissBeneficios)
    {
        BlissBeneficios->setWindowTitle(QApplication::translate("BlissBeneficios", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("BlissBeneficios", "Tipo de Arquivo", nullptr));
        campoImportacaoRubi->setText(QApplication::translate("BlissBeneficios", "Arquivo Importa\303\247\303\243o Rubi (Senior)", nullptr));
        campoImportacaoVT->setText(QApplication::translate("BlissBeneficios", "Arquivo Importa\303\247\303\243o SET(Empresa VT)", nullptr));
        botaoProcessar->setText(QApplication::translate("BlissBeneficios", "Processar", nullptr));
        botaoExportar->setText(QApplication::translate("BlissBeneficios", "Exportar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BlissBeneficios: public Ui_BlissBeneficios {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLISSBENEFICIOS_H
