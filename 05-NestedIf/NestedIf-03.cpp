
#include <iostream>
using namespace std;

int main() {
    int math, english;

    cout << "Enter Math marks: ";
    cin >> math;

    cout << "Enter English marks: ";
    cin >> english;

    if (math >= 40) {
        if (english >= 40) {
            cout << "Passed both subjects";
        }
    }

    return 0;
}
