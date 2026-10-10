
#include <iostream>
using namespace std;

int main() {
    int color;
    cout << "Enter 1 for Red, 2 for Yellow, 3 for Green: ";
    cin >> color;

    switch (color) {
        case 1:
            cout << "Stop";
            break;
        case 2:
            cout << "Wait";
            break;
        case 3:
            cout << "Go";
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}
