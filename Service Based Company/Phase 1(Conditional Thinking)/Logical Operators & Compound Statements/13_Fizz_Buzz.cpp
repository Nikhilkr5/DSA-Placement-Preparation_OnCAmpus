// Logical Operators & Compound Statements
//
// Print Fizz / Buzz / FizzBuzz for divisibility by 3, 5, or both.
// VISIBLE EXAMPLE
// Input: 15
// Output: FizzBuzz

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 3 == 0 && n % 5 == 0)
        cout << "FizzBuzz";
    else if (n % 3 == 0)
        cout << "Fizz";
    else if (n % 5 == 0)
        cout << "Buzz";
    else
        cout << n;

    return 0;
}

/*
TC: O(1)
SC: O(1)
*/