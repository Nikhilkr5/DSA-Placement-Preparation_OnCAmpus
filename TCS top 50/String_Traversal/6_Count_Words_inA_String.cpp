// //Pattern:   Word boundary / space
// For a normal sentence where words are separated by spaces, we can count transitions from:

// space → non-space

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    int words = 0;

    for(int i = 0; i<s.length(); i++){
        if(s[i] != ' ' && (i==0 || s[i-1]==' '))
            words++;
    }
    cout<<words;

    return 0;
}

/*
Why this works
For:
I love C++
^   ^    ^
We count the first character of every word.
Complexity::::::
Time: O(n)
Space: O(1)
*/