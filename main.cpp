#include "Inventory.h"
#include "History.h"

#include <iostream>

using namespace std;

int main() {
    Inventory inventory;
    History history;
    
    std::string name = "Audifonos";

    int choice;

    do {
        cout << "1. Add product" << endl;
        cout << "2. Get product" << endl;
        cout << "3. Remove product" << endl;
        cout << "4. Show history" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter product name: ";
                cin >> name;
                inventory.addProduct(name, 10);
                history.addRecord("Added product: " + name);
                break;
            case 2:
                cout << "Enter product name: ";
                cin >> name;
                inventory.getProduct(name);
                history.addRecord("Got product: " + name);
                break;
            case 3:
                cout << "Enter product name: ";
                cin >> name;
                inventory.removeProduct(name);
                history.addRecord("Removed product: " + name);
                break;
            case 4:
                history.showHistory();
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 5);

    return 0;
}