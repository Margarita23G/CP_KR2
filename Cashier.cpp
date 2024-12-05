#include "Cashier.h"

#include <iomanip>
#include <iostream>

Cashier::Cashier(std::string id, std::string name, double salary)
    : Employee(id, name, salary, "Кассир"), dailyTotal(0) {}

void Cashier::processTransaction(double amount) {
    dailyTotal += amount;
}

double Cashier::getTotal() const {
    return dailyTotal;
}

void Cashier::display() const {
    Employee::display();
    std::cout << "Дневная выручка: " << std::fixed << std::setprecision(2) << dailyTotal << " руб.\n";
}