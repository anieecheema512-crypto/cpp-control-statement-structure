
#include <iostream>
using namespace std;

int main() {
    int choice, units;
    float bill;

    cout << "1. Domestic Connection" << endl;
    cout << "2. Commercial Connection" << endl;
    cout << "Enter connection type: ";
    cin >> choice;

    cout << "Enter units consumed: ";
    cin >> units;

    if (units < 0) {
        cout << "Invalid units";
        return 0;
    }

    switch (choice) {
        case 1:
            bill = units * 10.0;
            cout << "Domestic bill = Rs. " << bill;
            break;

        case 2:
            bill = units * 15.0;
            cout << "Commercial bill = Rs. " << bill;
            break;

        default:
            cout << "Invalid connection type";
    }

    return 0;
}
