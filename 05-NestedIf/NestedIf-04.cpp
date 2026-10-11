
#include <iostream>
using namespace std;

int main() {
    int marks, attendance;

    cout << "Enter marks percentage: ";
    cin >> marks;

    cout << "Enter attendance percentage: ";
    cin >> attendance;

    if (marks >= 80) {
        if (attendance >= 75) {
            cout << "Eligible for scholarship";
        }
    }

    return 0;
}
