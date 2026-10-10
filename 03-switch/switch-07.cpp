
#include <iostream>
using namespace std;

int main() {
    int grade;

    cout << "Enter grade number (1-4): ";
    cin >> grade;

    switch (grade) {
        case 1:
            cout << "A Grade";
            break;

        case 2:
            cout << "B Grade";
            break;

        case 3:
            cout << "C Grade";
            break;

        case 4:
            cout << "Fail";
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}
