
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number (1-3): ";
    cin >> num;

    switch (num) {
        case 1:
            cout << "One";
            break;
        case 2:
            cout << "Two";
            break;
        case 3:
            cout << "Three";
            break;
        default:
            cout << "Invalid number";
    }

    return 0;
}
