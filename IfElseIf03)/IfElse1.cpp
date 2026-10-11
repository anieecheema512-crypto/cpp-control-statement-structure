
#include <iostream>
using namespace std;

int main() {
    float amount;

    cout << "Enter shopping amount: ";
    cin >> amount;

    if (amount >= 10000) {
        cout << "20% discount";
    }
    else if (amount >= 5000) {
        cout << "10% discount";
    }
    else {
        cout << "No discount";
    }

    return 0;
}
