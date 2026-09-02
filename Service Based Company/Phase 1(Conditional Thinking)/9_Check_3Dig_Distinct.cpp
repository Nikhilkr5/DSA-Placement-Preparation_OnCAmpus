#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = n / 100;
    int b = (n / 10) % 10;
    int c = n % 10;

    if (a != b && b != c && a != c)
        cout << "Yes, all distinct";
    else
        cout << "No, digits are not distinct";

    return 0;
}

/*
TC: O(1)
SC: O(1)
*/