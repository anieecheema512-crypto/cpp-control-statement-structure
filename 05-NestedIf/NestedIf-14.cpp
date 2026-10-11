#include <iostream>
using namespace std;

int main() {
    int balance, amount;

    cout << "Enter balance: ";
    cin >> balance;
    cout << "Enter withdrawal amount: ";
    cin >> amount;

    if (amount > 0) {
        if (amount <= balance) {
            if (amount % 500 == 0)
                cout << "Withdrawal Successful";
            else
                cout << "Enter amount in multiples of 500";
        }
        else
            cout << "Insufficient Balance";
    }
    else
        cout << "Invalid Amount";

    return 0;
}
