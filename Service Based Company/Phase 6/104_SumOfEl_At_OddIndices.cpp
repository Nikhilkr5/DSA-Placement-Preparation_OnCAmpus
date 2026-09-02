// Q104. Sum of Elements at Odd Indices

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int &x : arr)
        cin >> x;

    int sum = 0;

    for (int i = 1; i < n; i += 2)
        sum += arr[i];

    cout << sum;

    return 0;
}

/*
TC: O(n)
SC: O(1)
*/