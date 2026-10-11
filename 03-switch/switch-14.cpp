
#include <iostream>
using namespace std;

int main() {
    int choice;
    float value;

    cout << "1. Kilometers to Meters" << endl;
    cout << "2. Meters to Centimeters" << endl;
    cout << "3. Kilograms to Grams" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    cout << "Enter value: ";
    cin >> value;

    switch (choice) {
        case 1:
            cout << "Meters = " << value * 1000;
            break;

        case 2:
            cout << "Centimeters = " << value * 100;
            break;

        case 3:
            cout << "Grams = " << value * 1000;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}
