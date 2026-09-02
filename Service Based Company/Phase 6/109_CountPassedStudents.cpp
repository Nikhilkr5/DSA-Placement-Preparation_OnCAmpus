#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> marks(n);

    for (int &x : marks)
        cin >> x;

    int count = 0;

    for (int mark : marks) {
        if (mark >= 40)
            count++;
    }

    cout << count;

    return 0;
}

/*
TC: O(n)
SC: O(1)
*/