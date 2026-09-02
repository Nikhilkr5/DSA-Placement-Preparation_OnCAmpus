// Q36. Sum of Odd and Even Digits Separately
//Print the sum of odd digits and even digits separately.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int oddSum = 0;
    int evenSum = 0;

    while (n > 0) {
        int digit = n % 10;

        if (digit % 2 == 0)
            evenSum += digit;
        else
            oddSum += digit;

        n /= 10;
    }

    cout << "Odd sum = " << oddSum << "\n";
    cout << "Even sum = " << evenSum;

    return 0;
}

/*
TC: O(log n)
SC: O(1)
*/
