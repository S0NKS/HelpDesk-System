#ifndef TICKET_H
#define TICKET_H

#include <QString>
#include <QDateTime>

class Ticket {
public:
    Ticket(const QString &creator, const QString &description);
    QString getTicketID() const;
    QString getCreator() const;
    QString getDescription() const;
    QString getStatus() const;
    void updateStatus(const QString &newStatus);

private:
    QString ticketID;
    QString creator;
    QString description;
    QString status;
    QDateTime creationTime;
    QString generateTicketID() const;
};

#endif // TICKET_H
