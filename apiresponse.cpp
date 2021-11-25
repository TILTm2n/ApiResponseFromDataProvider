#include "apiresponse.h"
#include <iostream>

APIResponse::APIResponse()
{
    networkManager = new QNetworkAccessManager;
    connect(networkManager, &QNetworkAccessManager::finished, this, &APIResponse::onResult);
    networkManager->get(QNetworkRequest(QUrl("http://localhost:5000/api/Room")));
}


void APIResponse::onResult(QNetworkReply* reply)
{

    //replyFromAPI = reply;


    if(!reply->error()){

        QJsonDocument document = QJsonDocument::fromJson(reply->readAll());

        QJsonArray root = document.array();

        //QJsonObject firstObject = (root.at(15)).toObject();

        for(int i = 0; i < root.count(); ++i)
        {
            //listofRooms.append(((root.at(i)).toObject()).value("wrpName").toString());

            std::cout << ((root.at(i)).toObject()).value("wrpName").toString().toStdString() << std::endl;

        }
        //qDebug() << typeid (((root.at(1)).toObject()).value("wrpName").toString()).name();

    }
}




