#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int freq[256] = {};

    for (char ch : s)
        freq[(unsigned char)ch]++;

    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0)
            cout << char(i) << " = " << freq[i] << "\n";
    }

    return 0;
}

// TC: O(n)
// SC: O(1)

// char is automatically converted to its ASCII/integer value when used as an array index.
// unsigned char ensures the value stays in the safe range 0–255.
// Example: 'A' → 65 → freq[65]++.