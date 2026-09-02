#include <bits/stdc++.h>
using namespace std;

bool palindrome(string s, int left, int right) {
    if (left >= right)
        return true;

    if (s[left] != s[right])
        return false;

    return palindrome(s, left + 1, right - 1);
}

int main() {
    int n;
    cin >> n;

    string s = to_string(n);

    if (palindrome(s, 0, s.size() - 1))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}

/*
TC: O(log n)
SC: O(log n)
*/