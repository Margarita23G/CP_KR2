#include "StoreEntity.h"

StoreEntity::StoreEntity(std::string id, std::string name) : id(id), name(name) {}

std::string StoreEntity::getName() const { return name; }
std::string StoreEntity::getId() const { return id; }