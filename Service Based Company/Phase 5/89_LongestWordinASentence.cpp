#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word, longest;

    while(ss >> word){
        if(word.length() > longest.length()){
            longest = word;
        }
    }
    cout<<longest;

    return 0;
}

/*
TC: O(n)
SC: O(n)
*/