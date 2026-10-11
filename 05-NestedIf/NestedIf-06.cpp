#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n > 0) {
        if (n % 2 == 0)
            cout << "Positive Even Number";
        else
            cout << "Positive Odd Number";
    }
    else
        cout << "Number is not positive";

    return 0;
}
