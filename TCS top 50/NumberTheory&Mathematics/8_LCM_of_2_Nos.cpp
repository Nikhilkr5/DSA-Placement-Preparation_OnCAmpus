/*
Pattern:  LCM using GCD
Never calculate LCM by blindly searching multiples.

Use:
LCM = (a × b) / GCD
*/


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
Complexity
Time: O(log min(a,b))
Space: O(1)
*/