#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int vowels = 0, consonants = 0;

    for (char ch : s) {
        ch = tolower(ch);

        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels = " << vowels << "\n";
    cout << "Consonants = " << consonants;

    return 0;
}