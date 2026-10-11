#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 0 && marks <= 100) {
        if (marks >= 50) {
            if (marks >= 80)
                cout << "Grade A";
            else
                cout << "Grade B";
        }
        else {
            cout << "Fail";
        }
    }
    else {
        cout << "Invalid marks";
    }

    return 0;
}
