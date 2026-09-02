#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b);

    return 0;
}

/*
TC: O(log(min(a,b)))
SC: O(log(min(a,b)))
*/