#ifndef TICKETMANAGEMENTWINDOW_H
#define TICKETMANAGEMENTWINDOW_H

#include <QWidget>
#include "helpdeskoperator.h"

namespace Ui {
class TicketManagementWindow;
}

class TicketManagementWindow : public QWidget {
    Q_OBJECT

public:
    explicit TicketManagementWindow(HelpDeskOperator *operator, QWidget *parent = nullptr);
    ~TicketManagementWindow();

private slots:
    void createTicket();
    void updateTicketStatus();

private:
    Ui::TicketManagementWindow *ui;
    HelpDeskOperator *helpDeskOperator;
};

#endif // TICKETMANAGEMENTWINDOW_H
