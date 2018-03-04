#include "pesquisar.h"
#include "ui_pesquisar.h"

Pesquisar::Pesquisar(QWidget *parent) : QWidget(parent), ui(new Ui::Pesquisar)
{
    ui->setupUi(this);
    QStringList labels = {"ID", "Empresa"};
    ui->tableWidget->setColumnCount(labels.count());
    ui->tableWidget->setHorizontalHeaderLabels(labels);
    ui->tableWidget->resizeColumnsToContents();
}

Pesquisar::Pesquisar(QWidget *parent, QString _empresaSelecionada, int _tipoPesquisa):
    QWidget(parent),
    ui(new Ui::Pesquisar),
    empresaSelecionada(_empresaSelecionada),
    tipoPesquisa(_tipoPesquisa)
{
    ui->setupUi(this);

    controle = new ControleDAO(this);
    QStringList labels;
    connect(this, SIGNAL(obterEmpresas()), controle, SLOT(enviarCadastroDeEmpresas()));
    connect(controle, SIGNAL(retornarCadastroDeEmpresas(QMap<int,CadastroEmpresa*>)), this, SLOT(preencherTabelaComEmpresas(QMap<int,CadastroEmpresa*>)));
    connect(this, SIGNAL(obterFiliais()), controle, SLOT(enviarCadastroDeFiliais()));
    connect(controle, SIGNAL(retornarCadastroDeFiliais(QMap<int,CadastroFilial*>)), this, SLOT(preencherTabelaComFiliais(QMap<int,CadastroFilial*>)));

    if(this->getTipoPesquisa() == 1) {
        labels = QStringList {"ID", "Empresa"};
        ui->tableWidget->setColumnCount(labels.count());
        ui->tableWidget->setHorizontalHeaderLabels(labels);
        connect(ui->tableWidget, SIGNAL(cellDoubleClicked(int,int)), this, SLOT(setEmpresa(int,int)));
        connect(ui->botaoOK, SIGNAL(clicked(bool)), this, SLOT(setEmpresa()));
        emit obterEmpresas();
    } else {
        labels = QStringList {"ID", "Filial"};
        ui->tableWidget->setColumnCount(labels.count());
        ui->tableWidget->setHorizontalHeaderLabels(labels);
        connect(ui->tableWidget, SIGNAL(cellDoubleClicked(int,int)), this, SLOT(setFilial(int,int)));
        connect(ui->botaoOK, SIGNAL(clicked(bool)), this, SLOT(setFilial()));
        emit obterFiliais();
    }

    connect(ui->botaoCancelar,SIGNAL(clicked(bool)), this, SLOT(close()));

}

Pesquisar::~Pesquisar()
{
    delete ui;
}

QMap<int, CadastroEmpresa *> Pesquisar::getMapEmpresas() const
{
    return mapEmpresas;
}

QMap<int, CadastroFilial *> Pesquisar::getMapFiliais() const
{
    return mapFiliais;
}

void Pesquisar::preencherTabelaComEmpresas(QMap<int, CadastroEmpresa *> __tempMap)
{
    int linha = 0;
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(__tempMap.count());
    QMapIterator<int, CadastroEmpresa*> map(__tempMap);
    while (map.hasNext())
    {
        map.next();
        CadastroEmpresa *c = new CadastroEmpresa();
        c = map.value();
        for(int coluna = 0; coluna < 2; coluna++)
        {
            if(coluna == 0)
                ui->tableWidget->setItem(linha, coluna, new QTableWidgetItem(c->getID_Empresa()));
            else
                ui->tableWidget->setItem(linha, coluna, new QTableWidgetItem(c->getEmpresa()));
        }
        linha++;
    }

    ui->tableWidget->resizeColumnsToContents();
    ui->tableWidget->sortByColumn(0,Qt::AscendingOrder);
}

void Pesquisar::preencherTabelaComFiliais(QMap<int, CadastroFilial *> __tempMap)
{
    ui->tableWidget->clearContents();
    QMap<QString, QString> _n;
    QMapIterator<int, CadastroFilial*> map(__tempMap);
    while (map.hasNext())
    {
        map.next();
        CadastroFilial *c = new CadastroFilial(this);
        c = map.value();
        if(c->getID_Empresa() == this->getEmpresaSelecionada())
        {
            _n.insert(c->getID_Filial(), c->getFilial());
        }
    }

    ui->tableWidget->setRowCount(_n.count());
    QMapIterator<QString, QString> _mi(_n);
    int linha = 0;
    while (_mi.hasNext())
    {
        _mi.next();
        for(int coluna = 0; coluna < 2; coluna++)
        {
            if(coluna == 0)
                ui->tableWidget->setItem(linha,coluna,new QTableWidgetItem(_mi.key()));
            else
                ui->tableWidget->setItem(linha,coluna,new QTableWidgetItem(_mi.value()));
        }
        linha++;
    }

    ui->tableWidget->resizeColumnsToContents();
    ui->tableWidget->sortByColumn(0,Qt::AscendingOrder);
}

void Pesquisar::setData(int r, int c)
{
    c = 0;
    QString retorno = "";
    if(ui->tableWidget->rowCount() > 0) {
        QTableWidgetItem *item = ui->tableWidget->item(r,c);
        retorno = item->text().trimmed();
    }

    emit getData(retorno);
    this->close();
}

void Pesquisar::setData()
{
    QString retorno = "";
    if(ui->tableWidget->rowCount() > 0) {
        QTableWidgetItem *item = ui->tableWidget->item(ui->tableWidget->currentRow(), 0);
        retorno = item->text();
    }
    emit getData(retorno);
    this->close();
}

void Pesquisar::setEmpresa(int r, int c)
{
    c = 0;
    QString retorno = "";
    retorno = ui->tableWidget->item(r,c)->text();
    emit getEmpresa(retorno);
    this->close();
}

void Pesquisar::setEmpresa()
{
    QString retorno = "";
    if(ui->tableWidget->rowCount() > 0)
    {
        int c = 0;
        int r = ui->tableWidget->currentRow();
        QTableWidgetItem *item = ui->tableWidget->item(r, c);
        retorno = item->text();
    }
    emit getEmpresa(retorno);
    this->close();
}

void Pesquisar::setFilial(int r, int c)
{
    c = 0;
    QString retorno = "";
    retorno = ui->tableWidget->item(r, c)->text();
    emit getFilial(retorno);
    this->close();
}

void Pesquisar::setFilial()
{
    QString retorno = "";
    if(ui->tableWidget->rowCount() > 0) {
        int c = 0;
        int r = ui->tableWidget->currentRow();
        QTableWidgetItem *item = ui->tableWidget->item(r,c);
        retorno = item->text();
    }
    emit getFilial(retorno);
    this->close();
}

void Pesquisar::fecharPesquisa()
{
    this->close();
}

int Pesquisar::getTipoPesquisa() const
{
    return tipoPesquisa;
}

QString Pesquisar::getEmpresaSelecionada() const
{
    return empresaSelecionada;
}
