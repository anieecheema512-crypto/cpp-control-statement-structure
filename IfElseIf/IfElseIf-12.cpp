
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a) {
        cout << "Invalid triangle";
    }
    else if (a == b && b == c) {
        cout << "Equilateral triangle";
    }
    else if (a == b || b == c || a == c) {
        cout << "Isosceles triangle";
    }
    else {
        cout << "Scalene triangle";
    }1

    return 0;
}
