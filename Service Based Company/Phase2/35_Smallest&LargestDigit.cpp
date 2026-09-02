/*
Find the smallest and largest digit in a number.
VISIBLE EXAMPLE
Input: 5327
Output: Smallest=2, Largest=7
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int smallest = 9;
    int largest = 0;

    while (n > 0) {
        int digit = n % 10;

        smallest = min(smallest, digit);
        largest = max(largest, digit);

        n /= 10;
    }

    cout << "Smallest = " << smallest << "\n";
    cout << "Largest = " << largest;

    return 0;
}

/*
TC: O(log n)
SC: O(1)
*/