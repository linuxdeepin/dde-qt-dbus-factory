#ifndef PEERINFOLIST_H
#define PEERINFOLIST_H

#include <QtCore/QObject>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QDBusArgument>
#include <QDBusMetaType>

class PeerInfo {

public:
    friend QDebug operator<<(QDebug arg, const PeerInfo &info);
    friend QDBusArgument &operator<<(QDBusArgument &arg, const PeerInfo &info);
    friend const QDBusArgument &operator>>(const QDBusArgument &arg, PeerInfo &info);

    static PeerInfo fromJson(const QJsonObject &infoObject);

    bool operator==(const PeerInfo &what);

public:
    QString m_name;
    QString m_p2pMac;
    QString m_interface;
    bool m_connected;
    QDBusObjectPath m_peerPath;
    QDBusObjectPath m_linkPath;
};

typedef QList<PeerInfo> PeerInfoList;

Q_DECLARE_METATYPE(PeerInfo)
Q_DECLARE_METATYPE(PeerInfoList)

void registerPeerInfoMetaType();
void registerPeerInfoListMetaType();

#endif // PEERINFOLIST_H
