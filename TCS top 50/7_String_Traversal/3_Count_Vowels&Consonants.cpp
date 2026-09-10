#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int vowels = 0;
    int consonants = 0;

    for(char ch : s) {
        ch = tolower(ch);

        if(ch >= 'a' && ch <= 'z') {
            if(ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u') {
                vowels++;
            }
            else {
                consonants++;
            }
        }
    }

    cout << "Vowels: " << vowels << "\n";
    cout << "Consonants: " << consonants;

    return 0;
}

/*
Why check a-z?
Because spaces, digits and punctuation should not be counted as consonants.

Complexity::::
Time: O(n)
Space: O(1)
*/