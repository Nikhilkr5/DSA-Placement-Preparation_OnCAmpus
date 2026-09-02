// Q103. Rotate Array One Position Right

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int &x : arr)
        cin >> x;

    int last = arr[n - 1];

    for (int i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];

    arr[0] = last;

    for (int x : arr)
        cout << x << " ";

    return 0;
}

/*
TC: O(n)
SC: O(1)
*/