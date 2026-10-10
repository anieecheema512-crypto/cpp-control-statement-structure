#include <iostream>
using namespace std;

int main() {
    float amount, discount;

    cout << "Enter shopping amount: ";
    cin >> amount;

    if (amount >= 5000) {
        discount = amount * 0.10;
        cout << "Discount = " << discount;
    }

    return 0;
}
