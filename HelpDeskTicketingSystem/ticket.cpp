#include "ticket.h"
#include <QUuid>

Ticket::Ticket(const QString &creator, const QString &description)
    : creator(creator), description(description), status("Open"), creationTime(QDateTime::currentDateTime()) {
    ticketID = generateTicketID();
}

QString Ticket::getTicketID() const {
    return ticketID;
}

QString Ticket::getCreator() const {
    return creator;
}

QString Ticket::getDescription() const {
    return description;
}

QString Ticket::getStatus() const {
    return status;
}

void Ticket::updateStatus(const QString &newStatus) {
    status = newStatus;
}

QString Ticket::generateTicketID() const {
    return QUuid::createUuid().toString();
}
