#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        if (age >= 25)
            cout << "Eligible for voting and other age requirements";
        else
            cout << "Eligible for voting";
    }
    else
        cout << "Not eligible for voting";

    return 0;
}
