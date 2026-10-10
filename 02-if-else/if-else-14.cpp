
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a < b && a < c) {
        cout << "First number is smallest";
    }
    else {
        if (b < c) {
            cout << "Second number is smallest";
        }
        else {
            cout << "Third number is smallest";
        }
    }

    return 0;
}
