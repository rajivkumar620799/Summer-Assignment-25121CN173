#include <iostream>
#include <string>
using namespace std;

// Menu-driven inventory management system using an array of item structures.
struct Item {
    int id;
    string name;
    int quantity;
    double price;
};

int main() {
    Item items[100];
    int count = 0;
    int choice;

    cout << "=== Inventory Management System ===" << endl;

    while (true) {
        cout << "\n1. Add Item" << endl;
        cout << "2. Display Items" << endl;
        cout << "3. Update Quantity" << endl;
        cout << "4. Total Inventory Value" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";

        if (!(cin >> choice)) break;

        if (choice == 1) {
            if (count >= 100) { cout << "Inventory is full." << endl; continue; }
            cout << "Enter item ID: ";
            cin >> items[count].id;
            cin.ignore();
            cout << "Enter item name: ";
            getline(cin, items[count].name);
            cout << "Enter quantity: ";
            cin >> items[count].quantity;
            cout << "Enter price per unit: ";
            cin >> items[count].price;
            count++;
            cout << "Item added successfully." << endl;
        } else if (choice == 2) {
            if (count == 0) { cout << "No items in inventory." << endl; continue; }
            cout << "\nID\tName\t\tQty\tPrice" << endl;
            for (int i = 0; i < count; i++) {
                cout << items[i].id << "\t" << items[i].name << "\t\t"
                     << items[i].quantity << "\t" << items[i].price << endl;
            }
        } else if (choice == 3) {
            int id; bool found = false;
            cout << "Enter item ID to update: ";
            cin >> id;
            for (int i = 0; i < count; i++) {
                if (items[i].id == id) {
                    cout << "Enter new quantity: ";
                    cin >> items[i].quantity;
                    cout << "Quantity updated." << endl;
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Item not found." << endl;
        } else if (choice == 4) {
            double total = 0;
            for (int i = 0; i < count; i++) {
                total += items[i].quantity * items[i].price;
            }
            cout << "Total inventory value = " << total << endl;
        } else if (choice == 5) {
            cout << "Exiting inventory system. Goodbye!" << endl;
            break;
        } else {
            cout << "Invalid choice." << endl;
        }
    }

    return 0;
}
