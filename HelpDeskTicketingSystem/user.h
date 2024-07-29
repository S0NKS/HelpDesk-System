#ifndef USER_H
#define USER_H

#include <QString>

class User {
public:
    User(const QString &username, const QString &password);
    QString getUsername() const;
    bool authenticate(const QString &password) const;

private:
    QString username;
    QString passwordHash;
    QString hashPassword(const QString &password) const;
};

#endif // USER_H
