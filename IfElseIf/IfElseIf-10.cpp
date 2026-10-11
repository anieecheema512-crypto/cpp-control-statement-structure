
#include <iostream>
using namespace std;

int main() {
    int experience;
    float salary, bonus;

    cout << "Enter salary: ";
    cin >> salary;

    cout << "Enter years of experience: ";
    cin >> experience;

    if (salary < 0 || experience < 0) {
        cout << "Invalid input";
    }
    else if (experience >= 10) {
        bonus = salary * 0.20;
        cout << "Bonus = Rs. " << bonus;
    }
    else if (experience >= 5) {
        bonus = salary * 0.10;
        cout << "Bonus = Rs. " << bonus;
    }
    else {
        bonus = salary * 0.05;
        cout << "Bonus = Rs. " << bonus;
    }

    return 0;
}
