//5. Reverse an Array Using Recursion

#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int>& arr, int left, int right) {
    if (left >= right)
        return;

    swap(arr[left], arr[right]);

    reverseArray(arr, left + 1, right - 1);
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int& x : arr)
        cin >> x;

    reverseArray(arr, 0, n - 1);

    for (int x : arr)
        cout << x << " ";

    return 0;
}

/*
T.C:O(n)
*/