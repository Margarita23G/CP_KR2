#include "Product.h"
#include <iostream>
#include <iomanip>

Product::Product(std::string id, std::string name, double price, int quantity)
    : StoreEntity(id, name), price(price), quantity(quantity) {}

double Product::getPrice() const { return price; }
int Product::getQuantity() const { return quantity; }
void Product::setQuantity(int newQuantity) { quantity = newQuantity; }

void Product::display() const {
    std::cout << "Товар: " << name << " (ID: " << id << ")\n"
              << "Цена: " << std::fixed << std::setprecision(2) << price << " руб.\n"
              << "Количество: " << quantity << " шт.\n";
}