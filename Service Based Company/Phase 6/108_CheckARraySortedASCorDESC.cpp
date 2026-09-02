#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int &x : arr)
        cin >> x;

    bool ascending = true;
    bool descending = true;

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1])
            ascending = false;

        if (arr[i] > arr[i - 1])
            descending = false;
    }

    cout << (ascending || descending ? "Sorted" : "Not Sorted");

    return 0;
}

/*
TC: O(n)
SC: O(1)
*/