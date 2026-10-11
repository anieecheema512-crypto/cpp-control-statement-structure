
#include <iostream>
using namespace std;

int main() {
    float marks, scholarship;

    cout << "Enter percentage: ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid percentage";
    }
    else if (marks >= 90) {
        scholarship = 100;
        cout << "Scholarship = " << scholarship << "%";
    }
    else if (marks >= 80) {
        scholarship = 50;
        cout << "Scholarship = " << scholarship << "%";
    }
    else if (marks >= 70) {
        scholarship = 25;
        cout << "Scholarship = " << scholarship << "%";
    }
    else {
        cout << "No scholarship";
    }

    return 0;
}
