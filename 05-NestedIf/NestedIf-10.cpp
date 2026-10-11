#include <iostream>
using namespace std;

int main() {
    int age, purchase;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter purchase amount: ";
    cin >> purchase;

    if (age >= 18) {
        if (purchase >= 5000)
            cout << "Discount Available";
        else
            cout << "Purchase more to get discount";
    }
    else
        cout << "Not eligible for discount";

    return 0;
}
