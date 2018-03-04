/********************************************************************************
** Form generated from reading UI file 'caixamensagemprogresso.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
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
    QVBoxLayout *verticalLayoutFrame;
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
        CaixaMensagemProgresso->resize(314, 167);
        CaixaMensagemProgresso->setMinimumSize(QSize(314, 167));
        CaixaMensagemProgresso->setMaximumSize(QSize(314, 167));
        CaixaMensagemProgresso->setContextMenuPolicy(Qt::NoContextMenu);
        CaixaMensagemProgresso->setSizeGripEnabled(true);
        verticalLayoutFrame = new QVBoxLayout(CaixaMensagemProgresso);
        verticalLayoutFrame->setObjectName(QStringLiteral("verticalLayoutFrame"));
        verticalLayoutFrame->setContentsMargins(2, 2, 2, 2);
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


        verticalLayoutFrame->addWidget(frame);


        retranslateUi(CaixaMensagemProgresso);

        QMetaObject::connectSlotsByName(CaixaMensagemProgresso);
    } // setupUi

    void retranslateUi(QDialog *CaixaMensagemProgresso)
    {
        CaixaMensagemProgresso->setWindowTitle(QApplication::translate("CaixaMensagemProgresso", "Processando! Aguarde...", nullptr));
#ifndef QT_NO_TOOLTIP
        CaixaMensagemProgresso->setToolTip(QApplication::translate("CaixaMensagemProgresso", "<html><head/><body><p>Trabalhando em sua <span style=\" font-weight:600; font-style:italic;\">requisi\303\247\303\243o</span>...</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelImageFrame->setText(QString());
        botaoCancelar->setText(QApplication::translate("CaixaMensagemProgresso", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CaixaMensagemProgresso: public Ui_CaixaMensagemProgresso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAIXAMENSAGEMPROGRESSO_H
