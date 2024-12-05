#include "Manager.h"

#include <iomanip>
#include <iostream>

Manager::Manager(std::string id, std::string name, double salary, double bonus)
    : Employee(id, name, salary, "Менеджер"), bonus(bonus) {}

double Manager::calculateSalary() const {
    return salary + bonus;
}

void Manager::display() const {
    Employee::display();
    std::cout << "Премия: " << std::fixed << std::setprecision(2) << bonus << " руб.\n"
              << "Итоговая зарплата: " << calculateSalary() << " руб.\n";
}