#include "Store.h"
#include <iostream>

Store::Store() : productCount(0), employeeCount(0) {}

Store::~Store() {
    for (int i = 0; i < productCount; i++) {
        delete products[i];
    }
    for (int i = 0; i < employeeCount; i++) {
        delete employees[i];
    }
}

void Store::addProduct(Product* product) {
    if (productCount < MAX_PRODUCTS) {
        products[productCount++] = product;
    }
}

void Store::addEmployee(Employee* employee) {
    if (employeeCount < MAX_EMPLOYEES) {
        employees[employeeCount++] = employee;
    }
}

void Store::displayAllProducts() const {
    std::cout << "\n=== Все товары ===\n";
    for (int i = 0; i < productCount; i++) {
        products[i]->display();
        std::cout << "-------------------\n";
    }
}

void Store::displayAllEmployees() const {
    std::cout << "\n=== Все сотрудники ===\n";
    for (int i = 0; i < employeeCount; i++) {
        employees[i]->display();
        std::cout << "-------------------\n";
    }
}