
#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter marks out of 100: ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid marks";
    }
    else if (marks >= 80) {
        cout << "Grade A - Excellent";
    }
    else if (marks >= 70) {
        cout << "Grade B - Good";
    }
    else if (marks >= 50) {
        cout << "Grade C - Pass";
    }
    else {
        cout << "Fail";
    }

    return 0;
}
