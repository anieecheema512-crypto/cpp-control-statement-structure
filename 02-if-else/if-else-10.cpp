
#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase letter";
    }
    else {
        cout << "Not an uppercase letter";
    }

    return 0;
}
