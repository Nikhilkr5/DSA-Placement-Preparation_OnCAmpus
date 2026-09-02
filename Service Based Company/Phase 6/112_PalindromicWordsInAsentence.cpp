// Q112. Palindromic Words in a Sentence

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string word) {
    int left = 0;
    int right = word.length() - 1;

    while (left < right) {
        if (word[left] != word[right])
            return false;

        left++;
        right--;
    }

    return true;
}

int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;

    while (ss >> word) {
        if (isPalindrome(word))
            cout << word << " ";
    }

    return 0;
}

/*
TC: O(n)
SC: O(n)
*/