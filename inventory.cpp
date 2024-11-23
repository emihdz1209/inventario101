#include "Inventory.h"

void Inventory::addProduct(string& name, int quantity){
    products[name] += quantity;
}

int Inventory::getProduct(string& name){
    auto id = products.find(name);
    if(id != products.end()){
        return id->second;
    }
    return -1;
}

bool Inventory::removeProduct(string& name){
    return products.erase(name) > 0;
}