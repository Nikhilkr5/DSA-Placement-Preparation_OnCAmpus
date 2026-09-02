#include <bits/stdc++.h>
using namespace std;

void printStars(int n) {
    if (n == 0)
        return;

    cout << "*";
    printStars(n - 1);
}

void triangle(int n) {
    if (n == 0)
        return;

    printStars(n);
    cout << "\n";

    triangle(n - 1);
}

int main() {
    int n;
    cin >> n;

    triangle(n);

    return 0;
}

/*
TC: O(n²)
SC: O(n)
*/