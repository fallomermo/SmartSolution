#ifndef DETALHESRETENCAO_H
#define DETALHESRETENCAO_H

#include <QDialog>
#include <QWidget>
#include <QPixmap>
#include <QMovie>
#include <QChart>
#include <QChartView>
#include <QPieSeries>
#include <QTableWidget>
#include <QTableWidgetItem>

#include "objetoretencao.h"
#include "donutbreakdownchart.h"

namespace Ui {
class DetalhesRetencao;
}

class DetalhesRetencao : public QDialog
{
    Q_OBJECT

public:
    explicit DetalhesRetencao(QWidget *parent = 0,
                              QString responsavel = nullptr,
                              QString admitidos = nullptr,
                              QString demitidos = nullptr,
                              QString percentual = nullptr,
                              QString periodo = nullptr);
    ~DetalhesRetencao();

    QMap<int, ObjetoRetencao *> getMapRetencao() const;
    void setMapRetencao(const QMap<int, ObjetoRetencao *> &value);

    QModelIndex getModelIndex() const;
    void setModelIndex(const QModelIndex &value);

    QString getResponsavelSelecao() const;
    void setResponsavelSelecao(const QString &value);

    QString getNumeroAdmitidos() const;
    void setNumeroAdmitidos(const QString &value);

    QString getNumeroDemitidos() const;
    void setNumeroDemitidos(const QString &value);

    QString getPercentualRetido() const;
    void setPercentualRetido(const QString &value);

    QString getPeriodoSelecionado() const;
    void setPeriodoSelecionado(const QString &value);

    QPixmap getImagemStatus() const;
    void setImagemStatus(const QPixmap &value);

private slots:
    void updateStatus();


private:
    Ui::DetalhesRetencao *ui;
    QMap<int, ObjetoRetencao *> mapRetencao;

    QModelIndex modelIndex;
    QString responsavelSelecao;
    QString numeroAdmitidos;
    QString numeroDemitidos;
    QString percentualRetido;
    QString periodoSelecionado;
    QPixmap imagemStatus;
};

#endif // DETALHESRETENCAO_H
