#include "peerinfolist.h"

#include <QDebug>
#include <QJsonObject>

void registerPeerInfoListMetaType()
{
    registerPeerInfoMetaType();

    qRegisterMetaType<PeerInfoList>("PeerInfoList");
    qDBusRegisterMetaType<PeerInfoList>();
}

void registerPeerInfoMetaType()
{
    qRegisterMetaType<PeerInfo>("PeerInfo");
    qDBusRegisterMetaType<PeerInfo>();
}

QDBusArgument &operator<<(QDBusArgument &arg, const PeerInfo &info)
{
    arg.beginStructure();
    arg << info.m_name << info.m_p2pMac << info.m_interface << info.m_connected << info.m_peerPath << info.m_linkPath;
    arg.endStructure();

    return arg;
}

const QDBusArgument &operator>>(const QDBusArgument &arg, PeerInfo &info)
{
    arg.beginStructure();
    arg >> info.m_name >> info.m_p2pMac >> info.m_interface >> info.m_connected >> info.m_peerPath >> info.m_linkPath;
    arg.endStructure();

    return arg;
}

QDebug operator<<(QDebug arg, const PeerInfo &info)
{
    arg << "name = " << info.m_name << endl;
    arg << "p2pMac = " << info.m_p2pMac << endl;
    arg << "interface = " << info.m_interface << endl;
    arg << "connected = " << info.m_connected << endl;
    arg << "peerPath = " << info.m_peerPath.path() << endl;
    arg << "linkPath = " << info.m_linkPath.path() << endl;

    return arg;
}

PeerInfo PeerInfo::fromJson(const QJsonObject &infoObject)
{
    PeerInfo info;

    info.m_name = infoObject.value("Name").toString();
    info.m_p2pMac = infoObject.value("P2PMac").toString();
    info.m_interface = infoObject.value("Interface").toString();
    info.m_connected = infoObject.value("Connected").toBool();
    info.m_peerPath = QDBusObjectPath(infoObject.value("Path").toString());
    info.m_linkPath = QDBusObjectPath(infoObject.value("LinkPath").toString());

    return std::move(info);
}

bool PeerInfo::operator==(const PeerInfo &what)
{
    return what.m_peerPath == m_peerPath;
}
