/********************************************************************************
** Form generated from reading UI file 'metaretencaoestruturada.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METARETENCAOESTRUTURADA_H
#define UI_METARETENCAOESTRUTURADA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MetaRetencaoEstruturada
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_Periodo;
    QHBoxLayout *horizontalLayout;
    QDateEdit *inicioPeriodo;
    QDateEdit *finalPeriodo;
    QGroupBox *groupBox_Acoes;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *botaoProcessar;
    QPushButton *botaoDetalhes;
    QPushButton *botaoImprimir;
    QSplitter *splitter;
    QFrame *frameDados;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *tableWidget;
    QGraphicsView *graphicsView;
    QFrame *frameGraphicPlot;
    QGridLayout *gridLayout;
    QSlider *girarEtiquetas;
    QToolButton *botaoSalvarScreenshot;
    QCustomPlot *customPlot;

    void setupUi(QWidget *MetaRetencaoEstruturada)
    {
        if (MetaRetencaoEstruturada->objectName().isEmpty())
            MetaRetencaoEstruturada->setObjectName(QStringLiteral("MetaRetencaoEstruturada"));
        MetaRetencaoEstruturada->resize(695, 461);
        gridLayout_2 = new QGridLayout(MetaRetencaoEstruturada);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox_Periodo = new QGroupBox(MetaRetencaoEstruturada);
        groupBox_Periodo->setObjectName(QStringLiteral("groupBox_Periodo"));
        groupBox_Periodo->setMinimumSize(QSize(237, 0));
        horizontalLayout = new QHBoxLayout(groupBox_Periodo);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        inicioPeriodo = new QDateEdit(groupBox_Periodo);
        inicioPeriodo->setObjectName(QStringLiteral("inicioPeriodo"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(inicioPeriodo->sizePolicy().hasHeightForWidth());
        inicioPeriodo->setSizePolicy(sizePolicy);
        inicioPeriodo->setWrapping(false);
        inicioPeriodo->setAlignment(Qt::AlignCenter);
        inicioPeriodo->setProperty("showGroupSeparator", QVariant(true));
        inicioPeriodo->setCurrentSection(QDateTimeEdit::DaySection);
        inicioPeriodo->setCalendarPopup(true);

        horizontalLayout->addWidget(inicioPeriodo);

        finalPeriodo = new QDateEdit(groupBox_Periodo);
        finalPeriodo->setObjectName(QStringLiteral("finalPeriodo"));
        sizePolicy.setHeightForWidth(finalPeriodo->sizePolicy().hasHeightForWidth());
        finalPeriodo->setSizePolicy(sizePolicy);
        finalPeriodo->setWrapping(false);
        finalPeriodo->setAlignment(Qt::AlignCenter);
        finalPeriodo->setProperty("showGroupSeparator", QVariant(true));
        finalPeriodo->setCurrentSection(QDateTimeEdit::DaySection);
        finalPeriodo->setCalendarPopup(true);

        horizontalLayout->addWidget(finalPeriodo);


        gridLayout_2->addWidget(groupBox_Periodo, 0, 0, 1, 1);

        groupBox_Acoes = new QGroupBox(MetaRetencaoEstruturada);
        groupBox_Acoes->setObjectName(QStringLiteral("groupBox_Acoes"));
        groupBox_Acoes->setMinimumSize(QSize(257, 0));
        horizontalLayout_2 = new QHBoxLayout(groupBox_Acoes);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        botaoProcessar = new QPushButton(groupBox_Acoes);
        botaoProcessar->setObjectName(QStringLiteral("botaoProcessar"));

        horizontalLayout_2->addWidget(botaoProcessar);

        botaoDetalhes = new QPushButton(groupBox_Acoes);
        botaoDetalhes->setObjectName(QStringLiteral("botaoDetalhes"));

        horizontalLayout_2->addWidget(botaoDetalhes);

        botaoImprimir = new QPushButton(groupBox_Acoes);
        botaoImprimir->setObjectName(QStringLiteral("botaoImprimir"));

        horizontalLayout_2->addWidget(botaoImprimir);


        gridLayout_2->addWidget(groupBox_Acoes, 0, 1, 1, 1);

        splitter = new QSplitter(MetaRetencaoEstruturada);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        frameDados = new QFrame(splitter);
        frameDados->setObjectName(QStringLiteral("frameDados"));
        frameDados->setFrameShape(QFrame::StyledPanel);
        frameDados->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frameDados);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        tableWidget = new QTableWidget(frameDados);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setSortingEnabled(true);
        tableWidget->setCornerButtonEnabled(false);
        tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(true));

        horizontalLayout_3->addWidget(tableWidget);

        graphicsView = new QGraphicsView(frameDados);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        horizontalLayout_3->addWidget(graphicsView);

        splitter->addWidget(frameDados);
        frameGraphicPlot = new QFrame(splitter);
        frameGraphicPlot->setObjectName(QStringLiteral("frameGraphicPlot"));
        frameGraphicPlot->setMinimumSize(QSize(0, 200));
        frameGraphicPlot->setFrameShape(QFrame::StyledPanel);
        frameGraphicPlot->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frameGraphicPlot);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        girarEtiquetas = new QSlider(frameGraphicPlot);
        girarEtiquetas->setObjectName(QStringLiteral("girarEtiquetas"));
        girarEtiquetas->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(girarEtiquetas, 1, 0, 1, 1);

        botaoSalvarScreenshot = new QToolButton(frameGraphicPlot);
        botaoSalvarScreenshot->setObjectName(QStringLiteral("botaoSalvarScreenshot"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/save_diskette.png"), QSize(), QIcon::Normal, QIcon::Off);
        botaoSalvarScreenshot->setIcon(icon);

        gridLayout->addWidget(botaoSalvarScreenshot, 1, 1, 1, 1);

        customPlot = new QCustomPlot(frameGraphicPlot);
        customPlot->setObjectName(QStringLiteral("customPlot"));

        gridLayout->addWidget(customPlot, 0, 0, 1, 2);

        splitter->addWidget(frameGraphicPlot);

        gridLayout_2->addWidget(splitter, 1, 0, 1, 2);

        QWidget::setTabOrder(inicioPeriodo, finalPeriodo);
        QWidget::setTabOrder(finalPeriodo, botaoProcessar);
        QWidget::setTabOrder(botaoProcessar, botaoDetalhes);
        QWidget::setTabOrder(botaoDetalhes, botaoImprimir);
        QWidget::setTabOrder(botaoImprimir, tableWidget);
        QWidget::setTabOrder(tableWidget, girarEtiquetas);

        retranslateUi(MetaRetencaoEstruturada);

        QMetaObject::connectSlotsByName(MetaRetencaoEstruturada);
    } // setupUi

    void retranslateUi(QWidget *MetaRetencaoEstruturada)
    {
        MetaRetencaoEstruturada->setWindowTitle(QApplication::translate("MetaRetencaoEstruturada", "Meta Reten\303\247\303\243o Estruturada", Q_NULLPTR));
        groupBox_Periodo->setTitle(QApplication::translate("MetaRetencaoEstruturada", "Per\303\255odo", Q_NULLPTR));
        inicioPeriodo->setDisplayFormat(QApplication::translate("MetaRetencaoEstruturada", "dd/MM/yyyy", Q_NULLPTR));
        finalPeriodo->setDisplayFormat(QApplication::translate("MetaRetencaoEstruturada", "dd/MM/yyyy", Q_NULLPTR));
        groupBox_Acoes->setTitle(QApplication::translate("MetaRetencaoEstruturada", "A\303\247\303\265es", Q_NULLPTR));
        botaoProcessar->setText(QApplication::translate("MetaRetencaoEstruturada", "Processar", Q_NULLPTR));
        botaoDetalhes->setText(QApplication::translate("MetaRetencaoEstruturada", "Detalhes", Q_NULLPTR));
        botaoImprimir->setText(QApplication::translate("MetaRetencaoEstruturada", "Imprimir", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        girarEtiquetas->setToolTip(QApplication::translate("MetaRetencaoEstruturada", "<html><head/><body><p>Girar etiquetas <span style=\" font-weight:600; font-style:italic;\">&quot;</span><span style=\" font-weight:600; font-style:italic; color:#0055ff;\">Respons\303\241veis pela Sele\303\247\303\243o</span><span style=\" font-weight:600; font-style:italic;\">&quot;</span>.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        botaoSalvarScreenshot->setToolTip(QApplication::translate("MetaRetencaoEstruturada", "<html><head/><body><p>Salvar <span style=\" font-weight:600; font-style:italic;\">screenshot</span> da plotagem do gr\303\241fico.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        botaoSalvarScreenshot->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MetaRetencaoEstruturada: public Ui_MetaRetencaoEstruturada {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METARETENCAOESTRUTURADA_H
