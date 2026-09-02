#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int &x : arr)
        cin >> x;

    int largest = INT_MIN;
    int second = INT_MIN;

    for (int x : arr) {
        if (x > largest) {
            second = largest;
            largest = x;
        }
        else if (x > second && x != largest) {
            second = x;
        }
    }

    cout << second;

    return 0;
}