#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 50) {
        if (marks >= 80)
            cout << "Excellent";
        else
            cout << "Pass";
    }
    else
        cout << "Fail";

    return 0;
}
