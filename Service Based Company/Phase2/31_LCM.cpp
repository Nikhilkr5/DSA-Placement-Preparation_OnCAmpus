#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    long long x = a, y = b;

    // Find GCD
    while (y != 0) {
        long long rem = x % y;
        x = y;
        y = rem;
    }

    long long gcd = x;

    // Find LCM
    long long lcm = abs((a / gcd) * b);

    cout << lcm;

    return 0;
}


/*
TC: O(log(min(a,b)))
SC: O(1)
*/