#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    bool seen[256] = {};
    string result;

    for (char ch : s){
        unsigned char c = ch;

        if(!seen[c]){
            seen[c] = true;
            result += ch;
        }
    }

    cout<<result;

    return 0;
}

// TC: O(n)
// SC: O(n)


// LEARNING:
// - Character has a numeric character-code value (e.g., 'a' = 97 in ASCII).
// - A char can be used as an array index; C++ uses its numeric value automatically.
// - So seen[ch] means seen[ASCII/value of ch] — this is NOT a string property.
// - seen[256] can track whether each possible character has appeared.
// - unsigned char is used for safe 0–255 indexing; it is not required for the core logic.


/*
set<char> seen;
string result;

for(char ch : s) {
    if(seen.find(ch) == seen.end()) {
        result += ch;
        seen.insert(ch);
    }
}

*/


/*
Time Complexity: O(n log n)
Loop runs n times → O(n)
set.find(ch) → O(log n)
set.insert(ch) → O(log n)
Therefore:

TC = O(n log n)

Space Complexity: O(n)
seen can store up to n distinct characters → O(n)
result can contain up to n characters → O(n)

So technically total auxiliary space:

SC = O(n)

Interview mein short answer:
TC: O(n log n)
SC: O(n
*/