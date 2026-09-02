#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;

    vector<int> b(m);

    for(int i = 0; i < m; i++)
        cin >> b[i];

    vector<int> result;

    for(int x : a)
        result.push_back(x);

    for(int x : b)
        result.push_back(x);

    for(int x : result)
        cout << x << " ";

    return 0;
}