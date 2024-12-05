#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

class Manager : public Employee {
private:
    double bonus;

public:
    Manager(std::string id, std::string name, double salary, double bonus);
    double calculateSalary() const override;
    void display() const override;
};

#endif