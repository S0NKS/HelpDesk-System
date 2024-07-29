/********************************************************************************
** Form generated from reading UI file 'ticketmanagementwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKETMANAGEMENTWINDOW_H
#define UI_TICKETMANAGEMENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ticketmanagementwindow
{
public:

    void setupUi(QWidget *ticketmanagementwindow)
    {
        if (ticketmanagementwindow->objectName().isEmpty())
            ticketmanagementwindow->setObjectName("ticketmanagementwindow");
        ticketmanagementwindow->resize(400, 300);

        retranslateUi(ticketmanagementwindow);

        QMetaObject::connectSlotsByName(ticketmanagementwindow);
    } // setupUi

    void retranslateUi(QWidget *ticketmanagementwindow)
    {
        ticketmanagementwindow->setWindowTitle(QCoreApplication::translate("ticketmanagementwindow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ticketmanagementwindow: public Ui_ticketmanagementwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKETMANAGEMENTWINDOW_H
