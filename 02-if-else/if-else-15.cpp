
#include <iostream>
using namespace std;

int main() {
    int salary, experience;
    float bonus;

    cout << "Enter salary: ";
    cin >> salary;

    cout << "Enter years of experience: ";
    cin >> experience;

    if (experience >= 5) {
        bonus = salary * 0.10;
        cout << "Bonus = " << bonus;
    }
    else {
        bonus = salary * 0.05;
        cout << "Bonus = " << bonus;
    }

    return 0;
}
