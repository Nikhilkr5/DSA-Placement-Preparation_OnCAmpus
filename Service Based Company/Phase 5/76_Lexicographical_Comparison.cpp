#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if (s1 < s2)
        cout << s1 << " comes first";
    else if (s2 < s1)
        cout << s2 << " comes first";
    else
        cout << "Equal";

    return 0;
}

/*
TC: O(n)
SC: O(1)
*/