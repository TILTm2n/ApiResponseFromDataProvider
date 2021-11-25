#ifndef APIRESPONSE_H
#define APIRESPONSE_H

#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

#include <QList>

#include <QObject>
#include <QString>


class APIResponse : public QObject
{
    Q_OBJECT
public:
    APIResponse();
    //void setReplyFromAPI(QNetworkReply *newReplyFromAPI);
    void getRooms(const QString &keyRoomValue);

private slots:
    void onResult(QNetworkReply* reply);

private:
    QNetworkAccessManager* networkManager;

    //QList<QString> listofRooms;
    //QString keyByUser;

};

#endif // APIRESPONSE_H
