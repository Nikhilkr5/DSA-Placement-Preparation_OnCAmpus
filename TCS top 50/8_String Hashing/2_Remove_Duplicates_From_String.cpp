#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    unordered_set<char> seen;
    string ans = "";

    for(char ch: s){
        if(seen.count(ch) == 0){
            ans += ch;
            seen.insert(ch);
        }
    }
    cout<<ans;
    return 0;
}