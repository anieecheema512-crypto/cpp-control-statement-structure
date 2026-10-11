
#include <iostream>
using namespace std;

int main() {
    int choice, num;

    cout << "1. Find Square\n";
    cout << "2. Find Cube\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter a number: ";
    cin >> num;

    switch (choice) {
        case 1:
            cout << "Square = " << num * num;
            break;

        case 2:
            cout << "Cube = " << num * num * num;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}
