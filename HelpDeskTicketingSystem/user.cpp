#include "user.h"
#include <QCryptographicHash>

User::User(const QString &username, const QString &password)
    : username(username), passwordHash(hashPassword(password)) {}

QString User::getUsername() const {
    return username;
}

bool User::authenticate(const QString &password) const {
    return passwordHash == hashPassword(password);
}

QString User::hashPassword(const QString &password) const {
    return QString(QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256).toHex());
}
