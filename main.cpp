#include "Store.h"
#include "FoodProduct.h"
#include "ElectronicProduct.h"
#include "Manager.h"
#include "Cashier.h"


int main() {
    Store store;

    store.addProduct(new FoodProduct("F001", "Молоко", 89.99, 50, "2024-01-01", true));
    store.addProduct(new FoodProduct("F002", "Хлеб", 45.99, 30, "2023-12-25", false));

    store.addProduct(new ElectronicProduct("E001", "Смартфон", 29999.99, 10, "1 год", 10));
    store.addProduct(new ElectronicProduct("E002", "Ноутбук", 69999.99, 5, "2 года", 65));

    store.addEmployee(new Manager("M001", "Иванов Иван", 75000, 15000));
    store.addEmployee(new Cashier("C001", "Петрова Анна", 45000));

    store.displayAllProducts();
    store.displayAllEmployees();

    Cashier* cashier = new Cashier("C002", "Сидоров Петр", 45000);
    cashier->processTransaction(5999.50);
    cashier->processTransaction(2499.25);
    cashier->display();
    delete cashier;

    return 0;
}