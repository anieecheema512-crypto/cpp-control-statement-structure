
#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 80) {
        cout << "Eligible for admission";
    }
    else {
        if (marks >= 50) {
            cout << "Eligible for second merit list";
        }
        else {
            cout << "Not eligible for admission";
        }
    }

    return 0;
}
