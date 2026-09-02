// Check if a number is a perfect square (without using sqrt).
// VISIBLE EXAMPLE
// Input: 49
// Output: Yes (7 x 7)

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    bool found = false;

    if (n >= 0) {
        for (long long i = 0; i * i <= n; i++) {
            if (i * i == n) {
                found = true;
                break;
            }
        }
    }

    cout << (found ? "Yes" : "No");

    return 0;
}

/*
TC: O(√n)
SC: O(1)
*/