#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "StoreEntity.h"

class Employee : public StoreEntity {
protected:
    double salary;
    std::string position;

public:
    Employee(std::string id, std::string name, double salary, std::string position);
    virtual double calculateSalary() const;
    void display() const override;
};

#endif