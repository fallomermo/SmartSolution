/********************************************************************************
** Form generated from reading UI file 'truncararquivostexto.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRUNCARARQUIVOSTEXTO_H
#define UI_TRUNCARARQUIVOSTEXTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TruncarArquivosTexto
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *labelTotalDeLinhas;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *botaoProcessar;
    QPushButton *botaoSalvar;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLineEdit *campoLocalDoArquivo;

    void setupUi(QWidget *TruncarArquivosTexto)
    {
        if (TruncarArquivosTexto->objectName().isEmpty())
            TruncarArquivosTexto->setObjectName(QStringLiteral("TruncarArquivosTexto"));
        TruncarArquivosTexto->resize(535, 304);
        gridLayout = new QGridLayout(TruncarArquivosTexto);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(TruncarArquivosTexto);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        labelTotalDeLinhas = new QLabel(TruncarArquivosTexto);
        labelTotalDeLinhas->setObjectName(QStringLiteral("labelTotalDeLinhas"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        labelTotalDeLinhas->setFont(font1);

        gridLayout->addWidget(labelTotalDeLinhas, 3, 1, 1, 1);

        plainTextEdit = new QPlainTextEdit(TruncarArquivosTexto);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        gridLayout->addWidget(plainTextEdit, 2, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        botaoProcessar = new QPushButton(TruncarArquivosTexto);
        botaoProcessar->setObjectName(QStringLiteral("botaoProcessar"));

        horizontalLayout_2->addWidget(botaoProcessar);

        botaoSalvar = new QPushButton(TruncarArquivosTexto);
        botaoSalvar->setObjectName(QStringLiteral("botaoSalvar"));

        horizontalLayout_2->addWidget(botaoSalvar);

        horizontalSpacer = new QSpacerItem(398, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 2);

        groupBox = new QGroupBox(TruncarArquivosTexto);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        campoLocalDoArquivo = new QLineEdit(groupBox);
        campoLocalDoArquivo->setObjectName(QStringLiteral("campoLocalDoArquivo"));
        campoLocalDoArquivo->setFont(font1);
        campoLocalDoArquivo->setReadOnly(true);

        horizontalLayout->addWidget(campoLocalDoArquivo);


        gridLayout->addWidget(groupBox, 0, 0, 1, 2);

        QWidget::setTabOrder(campoLocalDoArquivo, botaoProcessar);
        QWidget::setTabOrder(botaoProcessar, botaoSalvar);
        QWidget::setTabOrder(botaoSalvar, plainTextEdit);

        retranslateUi(TruncarArquivosTexto);

        QMetaObject::connectSlotsByName(TruncarArquivosTexto);
    } // setupUi

    void retranslateUi(QWidget *TruncarArquivosTexto)
    {
        TruncarArquivosTexto->setWindowTitle(QApplication::translate("TruncarArquivosTexto", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("TruncarArquivosTexto", "Linhas:", Q_NULLPTR));
        labelTotalDeLinhas->setText(QApplication::translate("TruncarArquivosTexto", "[...]", Q_NULLPTR));
        botaoProcessar->setText(QApplication::translate("TruncarArquivosTexto", "Processar", Q_NULLPTR));
        botaoSalvar->setText(QApplication::translate("TruncarArquivosTexto", "Salvar", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("TruncarArquivosTexto", "Local do arquivo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TruncarArquivosTexto: public Ui_TruncarArquivosTexto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRUNCARARQUIVOSTEXTO_H
