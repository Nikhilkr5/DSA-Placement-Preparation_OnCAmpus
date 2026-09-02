#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    if(s.size() >= 2){
        cout<<s.substr(1, s.size() - 2);
    }

    return 0;
}


// String indexing starts from 0.
// substr(start, count) → starts at 'start' index and takes 'count' characters.
//
// Example: "HELLO"
// Index:    0 1 2 3 4
// s.substr(1, 3) → "ELL"
//
// Remove first & last:
// s.substr(1, s.length()-2)
//
// TC: O(n), SC: O(n)