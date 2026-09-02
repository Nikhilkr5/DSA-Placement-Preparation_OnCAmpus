// Take a single digit (0-9) and print its word form.
// VISIBLE EXAMPLE
// Input: 7
// Output: Seven

#include <bits/stdc++.h>
using namespace std;

int main() {
    int digit;
    cin >> digit;

    string words[] = {
        "Zero", "One", "Two", "Three", "Four",
        "Five", "Six", "Seven", "Eight", "Nine"
    };

    if (digit >= 0 && digit <= 9)
        cout << words[digit];
    else
        cout << "Invalid Digit";

    return 0;
}

/*
TC: O(1)
SC: O(1)
*/