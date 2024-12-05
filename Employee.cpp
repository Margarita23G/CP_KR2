#include "Employee.h"
#include <iostream>
#include <iomanip>

Employee::Employee(std::string id, std::string name, double salary, std::string position)
    : StoreEntity(id, name), salary(salary), position(position) {}

double Employee::calculateSalary() const { return salary; }

void Employee::display() const {
    std::cout << "Сотрудник: " << name << " (ID: " << id << ")\n"
              << "Должность: " << position << "\n"
              << "Зарплата: " << std::fixed << std::setprecision(2) << salary << " руб.\n";
}