
#include <iostream>
using namespace std;

int main() {
    int choice;
    float salary, bonus;

    cout << "1. Manager" << endl;
    cout << "2. Developer" << endl;
    cout << "3. Intern" << endl;
    cout << "Enter employee type: ";
    cin >> choice;

    cout << "Enter basic salary: ";
    cin >> salary;

    if (salary < 0) {
        cout << "Invalid salary";
        return 0;
    }

    switch (choice) {
        case 1:
            bonus = salary * 0.20;
            break;

        case 2:
            bonus = salary * 0.15;
            break;

        case 3:
            bonus = salary * 0.05;
            break;

        default:
            cout << "Invalid employee type";
            return 0;
    }

    cout << "Bonus = Rs. " << bonus << endl;
    cout << "Total salary = Rs. " << salary + bonus;

    return 0;
}
