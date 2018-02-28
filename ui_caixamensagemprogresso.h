/********************************************************************************
** Form generated from reading UI file 'caixamensagemprogresso.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAIXAMENSAGEMPROGRESSO_H
#define UI_CAIXAMENSAGEMPROGRESSO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CaixaMensagemProgresso
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *labelImageFrame;
    QProgressBar *barraDeProgresso;
    QPushButton *botaoCancelar;

    void setupUi(QDialog *CaixaMensagemProgresso)
    {
        if (CaixaMensagemProgresso->objectName().isEmpty())
            CaixaMensagemProgresso->setObjectName(QStringLiteral("CaixaMensagemProgresso"));
        CaixaMensagemProgresso->setWindowModality(Qt::ApplicationModal);
        CaixaMensagemProgresso->resize(277, 129);
        CaixaMensagemProgresso->setMinimumSize(QSize(277, 129));
        CaixaMensagemProgresso->setMaximumSize(QSize(277, 129));
        CaixaMensagemProgresso->setContextMenuPolicy(Qt::NoContextMenu);
        CaixaMensagemProgresso->setSizeGripEnabled(true);
        verticalLayout_2 = new QVBoxLayout(CaixaMensagemProgresso);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        frame = new QFrame(CaixaMensagemProgresso);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(100, 100));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelImageFrame = new QLabel(frame);
        labelImageFrame->setObjectName(QStringLiteral("labelImageFrame"));
        labelImageFrame->setPixmap(QPixmap(QString::fromUtf8(":/images/splash.gif")));
        labelImageFrame->setScaledContents(false);
        labelImageFrame->setAlignment(Qt::AlignCenter);
        labelImageFrame->setWordWrap(true);

        verticalLayout->addWidget(labelImageFrame);

        barraDeProgresso = new QProgressBar(frame);
        barraDeProgresso->setObjectName(QStringLiteral("barraDeProgresso"));
        barraDeProgresso->setValue(0);
        barraDeProgresso->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(barraDeProgresso);

        botaoCancelar = new QPushButton(frame);
        botaoCancelar->setObjectName(QStringLiteral("botaoCancelar"));

        verticalLayout->addWidget(botaoCancelar);


        verticalLayout_2->addWidget(frame);


        retranslateUi(CaixaMensagemProgresso);

        QMetaObject::connectSlotsByName(CaixaMensagemProgresso);
    } // setupUi

    void retranslateUi(QDialog *CaixaMensagemProgresso)
    {
        CaixaMensagemProgresso->setWindowTitle(QApplication::translate("CaixaMensagemProgresso", "Processando! Aguarde...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CaixaMensagemProgresso->setToolTip(QApplication::translate("CaixaMensagemProgresso", "<html><head/><body><p>Trabalhando em sua <span style=\" font-weight:600; font-style:italic;\">requisi\303\247\303\243o</span>...</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelImageFrame->setText(QString());
        botaoCancelar->setText(QApplication::translate("CaixaMensagemProgresso", "Cancelar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CaixaMensagemProgresso: public Ui_CaixaMensagemProgresso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAIXAMENSAGEMPROGRESSO_H
