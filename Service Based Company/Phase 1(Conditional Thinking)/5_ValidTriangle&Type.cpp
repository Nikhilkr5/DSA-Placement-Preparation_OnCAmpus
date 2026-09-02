#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b <= c || a + c <= b || b + c <= a)
        cout << "Invalid Triangle";
    else if (a == b && b == c)
        cout << "Valid Triangle - Equilateral";
    else if (a == b || b == c || a == c)
        cout << "Valid Triangle - Isosceles";
    else
        cout << "Valid Triangle - Scalene";

    return 0;
}
/*
TC: O(1)
SC: O(1)
*/