#ifndef CASHIER_H
#define CASHIER_H

#include "Employee.h"
#include "CashOperation.h"

class Cashier : public Employee, public CashOperation {
private:
    double dailyTotal;

public:
    Cashier(std::string id, std::string name, double salary);
    void processTransaction(double amount) override;
    double getTotal() const override;
    void display() const override;
};

#endif