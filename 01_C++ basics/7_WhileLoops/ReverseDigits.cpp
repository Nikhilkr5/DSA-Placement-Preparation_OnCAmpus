#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;              // use bigger type to avoid overflow
    cin >> n;

    bool isNegative = (n < 0); // check if n is negative
    if (isNegative) n = -n;    // make it positive

    long long rev = 0;
    while (n > 0) {
        int digit = n % 10;        // take last digit
        rev = rev * 10 + digit;    // append digit to reversed number
        n = n / 10;                // remove last digit
    }

    if (isNegative) rev = -rev;    // add minus sign back

    cout << rev;
    return 0;
}
