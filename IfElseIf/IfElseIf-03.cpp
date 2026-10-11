
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        cout << "First number is greatest";
    }
    else if (b >= a && b >= c) {
        cout << "Second number is greatest";
    }
    else {
        cout << "Third number is greatest";
    }

    return 0;
}
