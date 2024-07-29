#include "ticketmanagementwindow.h"
#include <QInputDialog>

TicketManagementWindow::TicketManagementWindow(HelpDeskOperator *operator, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TicketManagementWindow),
    helpDeskOperator(operator) {
    ui->setupUi(this);

    connect(ui->buttonCreateTicket, &QPushButton::clicked, this, &TicketManagementWindow::createTicket);
    connect(ui->buttonUpdateStatus, &QPushButton::clicked, this, &TicketManagementWindow::updateTicketStatus);

    for (const auto &ticket : helpDeskOperator->getTickets()) {
        ui->listWidgetTickets->addItem(ticket.getTicketID() + ": " + ticket.getDescription() + " (" + ticket.getStatus() + ")");
    }
}

TicketManagementWindow::~TicketManagementWindow() {
    delete ui;
}

void TicketManagementWindow::createTicket() {
    bool ok;
    QString description = QInputDialog::getText(this, "Create Ticket", "Description:", QLineEdit::Normal, "", &ok);
    if (ok && !description.isEmpty()) {
        helpDeskOperator->createTicket(description);
        ui->listWidgetTickets->addItem(helpDeskOperator->getTickets().back().getTicketID() + ": " + description + " (Open)");
    }
}

void TicketManagementWindow::updateTicketStatus() {
    QListWidgetItem *selectedItem = ui->listWidgetTickets->currentItem();
    if (selectedItem) {
        bool ok;
        QString newStatus = QInputDialog::getText(this, "Update Ticket Status", "New Status:", QLineEdit::Normal, "", &ok);
        if (ok && !newStatus.isEmpty()) {
            QString ticketID = selectedItem->text().split(":").first();
            helpDeskOperator->updateTicketStatus(ticketID, newStatus);
            selectedItem->setText(ticketID + ": " + selectedItem->text().split(": ").last().split(" (").first() + " (" + newStatus + ")");
        }
    }
}
