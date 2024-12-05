#include "ElectronicProduct.h"
#include <iostream>

ElectronicProduct::ElectronicProduct(std::string id, std::string name, double price, int quantity,
                                   std::string warranty, int powerConsumption)
    : Product(id, name, price, quantity),
      warranty(warranty),
      powerConsumption(powerConsumption) {}

void ElectronicProduct::display() const {
    Product::display();
    std::cout << "Гарантия: " << warranty << "\n"
              << "Потребляемая мощность: " << powerConsumption << "Вт\n";
}