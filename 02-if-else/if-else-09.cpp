
#include <iostream>
using namespace std;

int main() {
    float amount;

    cout << "Enter shopping amount: ";
    cin >> amount;

    if (amount >= 5000) {
        cout << "You get a 10% discount";
        cout << "\nDiscount = " << amount * 0.10;
    }
    else {
        cout << "No discount available";
    }

    return 0;
}
