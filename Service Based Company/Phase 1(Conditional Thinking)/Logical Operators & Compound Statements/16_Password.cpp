// Validate a password: length >= 8 and at least one digit.
// VISIBLE EXAMPLE
// Input: "abc12345"
// Output: Valid Password

#include <bits/stdc++.h>
using namespace std;

int main() {
    string password;
    cin >> password;

    bool hasDigit = false;

    for (char ch : password) {
        if (isdigit(ch)) {
            hasDigit = true;
            break;
        }
    }

    if (password.length() >= 8 && hasDigit)
        cout << "Valid Password";
    else
        cout << "Invalid Password";

    return 0;
}


/*
TC: O(n)
SC: O(1)
*/