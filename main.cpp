#include <QCoreApplication>
#include "apiresponse.h"
#include <QStringList>
#include <iostream>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //APIResponse api;
    APIResponse *api = new APIResponse();

    system("chcp 65001");

    return a.exec();
}
