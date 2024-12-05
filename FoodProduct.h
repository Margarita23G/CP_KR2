#ifndef FOOD_PRODUCT_H
#define FOOD_PRODUCT_H

#include "Product.h"

class FoodProduct : public Product {
private:
    std::string expiryDate;
    bool requiresRefrigeration;

public:
    FoodProduct(std::string id, std::string name, double price, int quantity,
                std::string expiryDate, bool requiresRefrigeration);
    void display() const override;
};

#endif