// Print Something N Times

#include <bits/stdc++.h>
using namespace std;

void print(int n) {
    if (n == 0)
        return;

    cout << "Hello" << endl;
    print(n - 1);
}

int main() {
    int n;
    cin >> n;

    print(n);

    return 0;
}
/*
TC: O(n)
SC: O(n)
*/