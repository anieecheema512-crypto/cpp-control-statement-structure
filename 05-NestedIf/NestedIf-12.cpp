#include <iostream>
using namespace std;

int main() {
    int username, password;

    cout << "Enter username ID: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (username == 1234) {
        if (password == 5678) {
            if (username > 0)
                cout << "Login Successful";
            else
                cout << "Invalid Username";
        }
        else
            cout << "Incorrect Password";
    }
    else
        cout << "User Not Found";

    return 0;
}
