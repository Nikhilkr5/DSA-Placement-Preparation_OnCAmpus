#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int &x : arr)
        cin >> x;

    int i = 0, j = n - 1;

    while (i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for (int x : arr)
        cout << x << " ";

    return 0;
}