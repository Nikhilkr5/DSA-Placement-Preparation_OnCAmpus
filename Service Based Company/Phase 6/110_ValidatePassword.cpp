#include <bits/stdc++.h>
using namespace std;

int main() {
    string password;
    cin >> password;

    bool upper = false;
    bool lower = false;
    bool digit = false;
    bool special = false;

    for (char ch : password) {
        if (isupper(ch))
            upper = true;
        else if (islower(ch))
            lower = true;
        else if (isdigit(ch))
            digit = true;
        else
            special = true;
    }

    if (upper && lower && digit && special)
        cout << "Valid Password";
    else
        cout << "Invalid Password";

    return 0;
}



/*
TC: O(n)
SC: O(1)
*/