#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        long long value = 1;

        for (int j = 0; j <= i; j++) {
            cout << value << " ";

            value = value * (i - j) / (j + 1);
        }

        cout << "\n";
    }

    return 0;
}


/*
TC: O(n²)
SC: O(1)
*/