#include "loginwindow.h"
#include "helpdeskoperator.h"
#include "ticketmanagementwindow.h"
#include <QMessageBox>

LoginWindow::LoginWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginWindow) {
    ui->setupUi(this);
    connect(ui->buttonLogin, &QPushButton::clicked, this, &LoginWindow::attemptLogin);
}

LoginWindow::~LoginWindow() {
    delete ui;
}

void LoginWindow::attemptLogin() {
    HelpDeskOperator user(ui->lineEditUsername->text(), ui->lineEditPassword->text());
    if (user.authenticate(ui->lineEditPassword->text())) {
        QMessageBox::information(this, "Login Successful", "Welcome " + user.getUsername());
        this->hide();
        TicketManagementWindow *ticketManagementWindow = new TicketManagementWindow(&user);
        ticketManagementWindow->show();
    } else {
        QMessageBox::warning(this, "Login Failed", "Invalid username or password");
    }
}
