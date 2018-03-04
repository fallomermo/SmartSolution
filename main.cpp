#include "login.h"

#include <QFile>
#include <QString>
#include <QIODevice>
#include <QTextStream>
#include <QApplication>

#define GIT_CURRENT_SHA1

Login *setup ()
{
    static auto app = new Login(nullptr);

    QFile file(QString(":/images/tema.css"));
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        QString tema;
        while (!in.atEnd()) {
            QString line = in.readLine();
            tema.append(line);
        }

        file.close();
        app->setStyleSheet(tema);
    }

    return app;
}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    /*
     * Esta definição é usada para que os ajustes do QSettings não se confunda com os demais aplicativos
    */
    a.setApplicationName("Smart Solution");
    a.setApplicationVersion(QString(GIT_CURRENT_SHA1));
    a.setOrganizationName("DRS Smart");
    a.setOrganizationDomain("www.drssmart.com");

    setup()->show();

    return a.exec();
}
