#ifndef PRODUCT_H
#define PRODUCT_H

#include "StoreEntity.h"

class Product : public StoreEntity {
protected:
    double price;
    int quantity;

public:
    Product(std::string id, std::string name, double price, int quantity);

    virtual double getPrice() const;
    virtual int getQuantity() const;
    void setQuantity(int newQuantity);
    void display() const override;
};

#endif