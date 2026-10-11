
#include <iostream>
using namespace std;

int main() {
    int choice, quantity;
    int price = 0;

    cout << "----- Restaurant Menu -----" << endl;
    cout << "1. Burger - Rs. 500" << endl;
    cout << "2. Pizza - Rs. 1200" << endl;
    cout << "3. Sandwich - Rs. 300" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter quantity: ";
    cin >> quantity;

    switch (choice) {
        case 1:
            price = 500;
            break;

        case 2:
            price = 1200;
            break;

        case 3:
            price = 300;
            break;

        default:
            cout << "Invalid choice";
            return 0;
    }

    cout << "Total bill = Rs. " << price * quantity;

    return 0;
}
