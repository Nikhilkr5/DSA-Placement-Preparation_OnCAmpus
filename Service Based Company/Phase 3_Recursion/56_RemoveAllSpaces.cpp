#include <bits/stdc++.h>
using namespace std;

void removeSpaces(string& s, int i) {
    if (i == s.size())
        return;

    if (s[i] != ' ')
        cout << s[i];

    removeSpaces(s, i + 1);
}

int main() {
    string s;
    getline(cin, s);

    removeSpaces(s, 0);

    return 0;
}

/*
TC: O(n)
SC: O(n)
*/