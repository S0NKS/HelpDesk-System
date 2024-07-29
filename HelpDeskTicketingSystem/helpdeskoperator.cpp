#include "helpdeskoperator.h"

HelpDeskOperator::HelpDeskOperator(const QString &username, const QString &password)
    : User(username, password) {}

void HelpDeskOperator::createTicket(const QString &description) {
    Ticket ticket(getUsername(), description);
    tickets.push_back(ticket);
}

void HelpDeskOperator::updateTicketStatus(const QString &ticketID, const QString &newStatus) {
    for (auto &ticket : tickets) {
        if (ticket.getTicketID() == ticketID) {
            ticket.updateStatus(newStatus);
            break;
        }
    }
}

std::vector<Ticket> HelpDeskOperator::getTickets() const {
    return tickets;
}

QString HelpDeskOperator::getUsername() const {
    return User::getUsername();
}

bool HelpDeskOperator::authenticate(const QString &password) const {
    return User::authenticate(password);
}
