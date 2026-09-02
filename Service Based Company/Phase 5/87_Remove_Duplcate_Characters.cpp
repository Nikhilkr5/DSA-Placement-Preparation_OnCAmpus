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