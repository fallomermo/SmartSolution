#-------------------------------------------------
#
# Project created by QtCreator 2018-02-28T14:52:26
#
#-------------------------------------------------

QT       += core gui sql network printsupport charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SmartSolution
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS _ATL_NATIVE_INITIALIZATION \
GIT_CURRENT_SHA1="\\\"$(shell git -C \""$$_PRO_FILE_PWD_"\" describe)\\\""

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
#QMAKE_CXXFLAGS_WARN_ON += -Wno-reorder

SOURCES += \
        main.cpp \
        login.cpp \
    administracaogeral.cpp \
    bancodedados.cpp \
    blissbeneficios.cpp \
    cadastrocolaborador.cpp \
    cadastroempresa.cpp \
    cadastrofilial.cpp \
    caixamensagemprogresso.cpp \
    controlador.cpp \
    controledao.cpp \
    controledeponto.cpp \
    conversordearquivo.cpp \
    cpocorrenciasapuracao.cpp \
    detalhesretencao.cpp \
    donutbreakdownchart.cpp \
    downloadafd.cpp \
    ecoclinicrepasses.cpp \
    eventos.cpp \
    eventosimportadosobj.cpp \
    exportararquivo.cpp \
    gerenciamentorep.cpp \
    guiainssfolha.cpp \
    higienizacaocrednosso.cpp \
    homeinicio.cpp \
    liquidofolha.cpp \
    mainslice.cpp \
    metaretencao.cpp \
    metaretencaoestruturada.cpp \
    objetocadastroupdatefile.cpp \
    objetocrednossobeneficios.cpp \
    objetocrednossohigienizacao.cpp \
    objetocrednossoretorno.cpp \
    objetoretencao.cpp \
    ocorrenciasapuracao.cpp \
    parametros.cpp \
    pesquisar.cpp \
    planodecontas.cpp \
    planosaude.cpp \
    principal.cpp \
    processararquivocrednosso.cpp \
    propriedadesusuario.cpp \
    qcustomplot.cpp \
    relacaocolaborador.cpp \
    responsavelselecaoagregado.cpp \
    sobre.cpp \
    sqlitedatabase.cpp \
    threadobject.cpp \
    truncararquivostexto.cpp \
    updatedatatablecolumm.cpp \
    usuarios.cpp \
    validacao.cpp

HEADERS += \
        login.h \
    administracaogeral.h \
    bancodedados.h \
    blissbeneficios.h \
    cadastrocolaborador.h \
    cadastroempresa.h \
    cadastrofilial.h \
    caixamensagemprogresso.h \
    controlador.h \
    controledao.h \
    controledeponto.h \
    conversordearquivo.h \
    cpocorrenciasapuracao.h \
    detalhesretencao.h \
    donutbreakdownchart.h \
    downloadafd.h \
    ecoclinicrepasses.h \
    eventos.h \
    eventosimportadosobj.h \
    exportararquivo.h \
    gerenciamentorep.h \
    guiainssfolha.h \
    higienizacaocrednosso.h \
    homeinicio.h \
    liquidofolha.h \
    mainslice.h \
    metaretencao.h \
    metaretencaoestruturada.h \
    objetocadastroupdatefile.h \
    objetocrednossobeneficios.h \
    objetocrednossohigienizacao.h \
    objetocrednossoretorno.h \
    objetoretencao.h \
    ocorrenciasapuracao.h \
    parametros.h \
    pesquisar.h \
    planodecontas.h \
    planosaude.h \
    principal.h \
    processararquivocrednosso.h \
    propriedadesusuario.h \
    qcustomplot.h \
    relacaocolaborador.h \
    responsavelselecaoagregado.h \
    sobre.h \
    sqlitedatabase.h \
    threadobject.h \
    truncararquivostexto.h \
    updatedatatablecolumm.h \
    usuarios.h \
    validacao.h

FORMS += \
        login.ui \
    administracaogeral.ui \
    blissbeneficios.ui \
    caixamensagemprogresso.ui \
    controledeponto.ui \
    conversordearquivo.ui \
    cpocorrenciasapuracao.ui \
    detalhesretencao.ui \
    downloadafd.ui \
    gerenciamentorep.ui \
    guiainssfolha.ui \
    higienizacaocrednosso.ui \
    homeinicio.ui \
    liquidofolha.ui \
    metaretencao.ui \
    metaretencaoestruturada.ui \
    ocorrenciasapuracao.ui \
    pesquisar.ui \
    planodecontas.ui \
    planosaude.ui \
    principal.ui \
    processararquivocrednosso.ui \
    propriedadesusuario.ui \
    relacaocolaborador.ui \
    sobre.ui \
    truncararquivostexto.ui

RESOURCES += \
    thema.qrc
