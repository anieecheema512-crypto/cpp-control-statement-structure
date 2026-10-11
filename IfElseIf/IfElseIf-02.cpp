
#include <iostream>
using namespace std;

int main() {
    int temp;

    cout << "Enter temperature: ";
    cin >> temp;

    if (temp >= 35) {
        cout << "Very hot";
    }
    else if (temp >= 20) {
        cout << "Moderate temperature";
    }
    else {
        cout << "Cold weather";
    }

    return 0;
}
