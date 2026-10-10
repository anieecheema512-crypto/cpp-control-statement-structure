
#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "1. Apple\n2. Mango\n3. Banana\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Apple";
            break;
        case 2:
            cout << "Mango";
            break;
        case 3:
            cout << "Banana";
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}
