#ifndef ELECTRONIC_PRODUCT_H
#define ELECTRONIC_PRODUCT_H

#include "Product.h"

class ElectronicProduct : public Product {
private:
    std::string warranty;
    int powerConsumption;

public:
    ElectronicProduct(std::string id, std::string name, double price, int quantity,
                      std::string warranty, int powerConsumption);
    void display() const override;
};

#endif