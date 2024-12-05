cmake_minimum_required(VERSION 3.29)
project(store_cw)

set(CMAKE_CXX_STANDARD 20)

add_executable(store_cw main.cpp
        StoreEntity.cpp
        StoreEntity.h
        Product.cpp
        Product.h
        FoodProduct.cpp
        FoodProduct.h
        ElectronicProduct.cpp
        ElectronicProduct.h
        Employee.cpp
        Employee.h
        Manager.cpp
        Manager.h
        
        CashOperation.h
        Cashier.cpp
        Cashier.h
        Store.cpp
        Store.h)
