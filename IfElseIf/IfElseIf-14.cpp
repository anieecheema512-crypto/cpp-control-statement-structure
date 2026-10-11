
#include <iostream>
using namespace std;

int main() {
    float weight, charge;

    cout << "Enter parcel weight in kg: ";
    cin >> weight;

    if (weight <= 0) {
        cout << "Invalid weight";
    }
    else if (weight <= 2) {
        charge = 200;
        cout << "Shipping charges = Rs. " << charge;
    }
    else if (weight <= 5) {
        charge = 400;
        cout << "Shipping charges = Rs. " << charge;
    }
    else if (weight <= 10) {
        charge = 700;
        cout << "Shipping charges = Rs. " << charge;
    }
    else {
        charge = 1000;
        cout << "Shipping charges = Rs. " << charge;
    }

    return 0;
}
