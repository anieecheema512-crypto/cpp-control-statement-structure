#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b) {
        if (a > 0)
            cout << "A is largest and positive";
        else
            cout << "A is largest but not positive";
    }
    else {
        if (b > 0)
            cout << "B is largest and positive";
        else
            cout << "B is largest but not positive";
    }

    return 0;
}
