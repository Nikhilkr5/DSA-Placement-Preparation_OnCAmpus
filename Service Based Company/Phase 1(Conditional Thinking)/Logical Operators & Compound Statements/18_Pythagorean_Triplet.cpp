#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    long long mx = max({a, b, c});

    if (a * a + b * b + c * c - mx * mx == mx * mx)
        cout << "Yes, Pythagorean Triplet";
    else
        cout << "No";

    return 0;
}

// TC: O(1)
// SC: O(1)

/*
Check if three numbers can form a Pythagorean triplet.
VISIBLE EXAMPLE
Input: 3, 4, 5
Output: Yes, Pythagorean Triplet

A Pythagorean triplet is a set of three positive integers (a, b, c) 
that fit the rule a² + b² = c², representing the side lengths of a 
right-angled triangle.
*/