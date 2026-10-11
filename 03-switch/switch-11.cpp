
#include <iostream>
using namespace std;

int main() {
    int choice, amount;
    int balance = 10000;

    cout << "1. Check Balance" << endl;
    cout << "2. Withdraw Money" << endl;
    cout << "3. Deposit Money" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Balance = Rs. " << balance;
            break;

        case 2:
            cout << "Enter withdrawal amount: ";
            cin >> amount;

            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Remaining balance = Rs. " << balance;
            }
            else {
                cout << "Invalid amount or insufficient balance";
            }
            break;

        case 3:
            cout << "Enter deposit amount: ";
            cin >> amount;

            if (amount > 0) {
                balance += amount;
                cout << "Updated balance = Rs. " << balance;
            }
            else {
                cout << "Invalid deposit amount";
            }
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}
