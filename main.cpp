
#include <QtWidgets/QApplication>
#include <QDesktopWidget>
#include <QtGlobal>
#include <QtDebug>
#include <QSettings>
#include <QIcon>

#include <iostream>

#include "mainwindow.h"

QTextStream ts;

void messageHandler(QtMsgType type, const QMessageLogContext&, const QString& msg)
{
    std::cerr << type << ": " << msg.toLatin1().data() << "\n";
}

int main(int argc, char *argv[])
{
    qInstallMessageHandler(messageHandler);

    QApplication a(argc, argv);


    MainWindow *w = new MainWindow();
    w->show();


    return a.exec();
}
