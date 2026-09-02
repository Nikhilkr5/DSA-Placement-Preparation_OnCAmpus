#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;

    if(s1.size() != s2.size()){
        cout<<"No";
        return 0;
    }

    int freq[256] = {};

    for(char ch : s1){
        freq[(unsigned char)ch]++;
    }

    for(char ch : s2){
        freq[(unsigned char)ch]--;
    }

    for(int x: freq){
        if(x != 0){
            cout<<"No";
            return 0;
        }
    }

    cout<<"yes, Anagram";

    return 0;

}

/*
TC: O(n)
SC: O(1)
*/

