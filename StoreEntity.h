#ifndef STORE_ENTITY_H
#define STORE_ENTITY_H

#include <string>

class StoreEntity {
protected:
    std::string id;
    std::string name;

public:
    StoreEntity(std::string id, std::string name);
    virtual ~StoreEntity() = default;

    virtual void display() const = 0;

    std::string getName() const;
    std::string getId() const;
};

#endif