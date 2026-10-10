
#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "1. Computer Science\n";
    cout << "2. Mathematics\n";
    cout << "3. Physics\n";
    cout << "4. English\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Computer Science";
            break;

        case 2:
            cout << "Mathematics";
            break;

        case 3:
            cout << "Physics";
            break;

        case 4:
            cout << "English";
            break;

        default:
            cout << "Invalid subject";
    }

    return 0;
}
