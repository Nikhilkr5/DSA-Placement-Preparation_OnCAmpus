#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int original = n;
    int rev = 0;

    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    if (original == rev)
        cout << "Yes, Palindrome";
    else
        cout << "No";

    return 0;
}

/*
TC: O(log n)
SC: O(1)
*/