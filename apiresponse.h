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
#include <QStringList>


class APIResponse : public QObject
{
    Q_OBJECT
public:
    APIResponse();
    //void setReplyFromAPI(QNetworkReply *newReplyFromAPI);
    //void getRooms(const QString &keyRoomValue);

    const QStringList &getListofRooms() const;

private slots:
    void onResult(QNetworkReply* reply);


private:
    QNetworkAccessManager* networkManager;
    QStringList listofRooms;

};

#endif // APIRESPONSE_H
