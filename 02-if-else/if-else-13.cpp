
#include <iostream>
using namespace std;

int main() {
    int units;
    float bill;

    cout << "Enter electricity units: ";
    cin >> units;

    if (units <= 100) {
        bill = units * 10;
    }
    else {
        bill = 100 * 10 + (units - 100) * 15;
    }

    cout << "Total electricity bill = " << bill;

    return 0;
}
