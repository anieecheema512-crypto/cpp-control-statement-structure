
#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "1. Circle\n";
    cout << "2. Square\n";
    cout << "3. Triangle\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You selected Circle";
            break;

        case 2:
            cout << "You selected Square";
            break;

        case 3:
            cout << "You selected Triangle";
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}
