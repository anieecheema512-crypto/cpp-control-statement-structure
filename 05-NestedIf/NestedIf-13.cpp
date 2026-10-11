#include <iostream>
using namespace std;

int main() {
    int units;
    cout << "Enter electricity units: ";
    cin >> units;

    if (units >= 0) {
        if (units <= 100)
            cout << "Bill = " << units * 10;
        else {
            if (units <= 300)
                cout << "Bill = " << 100 * 10 + (units - 100) * 15;
            else
                cout << "Bill = " << 100 * 10 + 200 * 15 + (units - 300) * 20;
        }
    }
    else
        cout << "Invalid Units";

    return 0;
}
