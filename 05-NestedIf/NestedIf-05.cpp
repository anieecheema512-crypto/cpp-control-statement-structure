
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num >= 1 && num <= 100) {
        if (num % 5 == 0) {
            cout << "Number is between 1 and 100 and divisible by 5";
        }
    }

    return 0;
}
