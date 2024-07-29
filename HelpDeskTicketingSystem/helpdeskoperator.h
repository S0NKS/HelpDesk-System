#ifndef HELPDESKOPERATOR_H
#define HELPDESKOPERATOR_H

#include "User.h"
#include "Ticket.h"
#include <vector>

class HelpDeskOperator : public User {
public:
    HelpDeskOperator(const QString &username, const QString &password);
    void createTicket(const QString &description);
    void updateTicketStatus(const QString &ticketID, const QString &newStatus);
    std::vector<Ticket> getTickets() const;
    QString getUsername() const;
    bool authenticate(const QString &password) const;

private:
    std::vector<Ticket> tickets;
};

#endif // HELPDESKOPERATOR_H
