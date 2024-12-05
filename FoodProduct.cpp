#include "FoodProduct.h"
#include <iostream>

FoodProduct::FoodProduct(std::string id, std::string name, double price, int quantity,
                        std::string expiryDate, bool requiresRefrigeration)
    : Product(id, name, price, quantity),
      expiryDate(expiryDate),
      requiresRefrigeration(requiresRefrigeration) {}

void FoodProduct::display() const {
    Product::display();
    std::cout << "Срок годности: " << expiryDate << "\n"
              << "Требует охлаждения: " << (requiresRefrigeration ? "Да" : "Нет") << "\n";
}