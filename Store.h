#ifndef STORE_H
#define STORE_H

#include "Product.h"
#include "Employee.h"

class Store {
private:
    static const int MAX_PRODUCTS = 100;
    static const int MAX_EMPLOYEES = 50;

    Product* products[MAX_PRODUCTS];
    Employee* employees[MAX_EMPLOYEES];
    int productCount;
    int employeeCount;

public:
    Store();
    ~Store();
    void addProduct(Product* product);
    void addEmployee(Employee* employee);
    void displayAllProducts() const;
    void displayAllEmployees() const;
};

#endif