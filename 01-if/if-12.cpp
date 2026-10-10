#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num >= 10 && num <= 99 && num % 2 == 0) {
        cout << "Number is a two-digit even number";
    }

    return 0;
}
