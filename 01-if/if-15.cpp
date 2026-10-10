#include <iostream>
using namespace std;

int main() {
    int marks;
    float percentage;

    cout << "Enter total marks: ";
    cin >> marks;

    cout << "Enter percentage: ";
    cin >> percentage;

    if (marks >= 500 && percentage >= 60) {
        cout << "Eligible for admission";
    }

    return 0;
}
