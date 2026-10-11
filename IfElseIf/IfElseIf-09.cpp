
#include <iostream>
using namespace std;

int main() {
    int hours, charge;

    cout << "Enter parking hours: ";
    cin >> hours;

    if (hours <= 0) {
        cout << "Invalid parking hours";
    }
    else if (hours <= 2) {
        charge = 100;
        cout << "Parking charge = Rs. " << charge;
    }
    else if (hours <= 5) {
        charge = 200;
        cout << "Parking charge = Rs. " << charge;
    }
    else {
        charge = 500;
        cout << "Parking charge = Rs. " << charge;
    }

    return 0;
}
