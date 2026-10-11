
#include <iostream>
using namespace std;

int main() {
    int units;
    float bill;

    cout << "Enter water units consumed: ";
    cin >> units;

    if (units < 0) {
        cout << "Invalid units";
    }
    else if (units <= 50) {
        bill = units * 5;
        cout << "Water bill = Rs. " << bill;
    }
    else if (units <= 100) {
        bill = 50 * 5 + (units - 50) * 8;
        cout << "Water bill = Rs. " << bill;
    }
    else {
        bill = 50 * 5 + 50 * 8 + (units - 100) * 12;
        cout << "Water bill = Rs. " << bill;
    }

    return 0;
}
