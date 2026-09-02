#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    if (sum % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";

    return 0;
}
/*
TC: O(log n)
SC: O(1)
*/