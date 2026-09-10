//Logic ::::--> Keep everything except ' '

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    string ans = "";

    for(char ch : s){
        if(ch != ' ')
            ans+=ch;
    }

    cout<<ans;

    return 0;
}

/*
Complexity::
Time: O(n)
Space: O(n)
*/
