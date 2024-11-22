#include "inventory.h"
#include "inventory.cpp"
#include <iostream>
using namespace std;

int main(){
    Inventory inv;
    string name = "apple";
    inv.addProduct(name, 10);
    cout << "Product: " << name << " Quantity: " << inv.getProduct(name) << endl;
    inv.addProduct(name, 5);
    cout << "Product: " << name << " Quantity: " << inv.getProduct(name) << endl;
    inv.removeProduct(name);
    cout << "Product: " << name << " Quantity: " << inv.getProduct(name) << endl;
    return 0;
}