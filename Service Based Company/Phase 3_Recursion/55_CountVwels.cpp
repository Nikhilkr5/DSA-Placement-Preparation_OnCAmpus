#include <bits/stdc++.h>
using namespace std;

int countVowels(string& s, int i) {
    if (i == s.size())
        return 0;

    char ch = tolower(s[i]);

    int count = (ch == 'a' || ch == 'e' || ch == 'i' ||
                 ch == 'o' || ch == 'u');

    return count + countVowels(s, i + 1);
}

int main() {
    string s;
    getline(cin, s);

    cout << countVowels(s, 0);

    return 0;
}