
#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        if (age <= 100) {
            cout << "Eligible to vote";
        }
    }

    return 0;
}
