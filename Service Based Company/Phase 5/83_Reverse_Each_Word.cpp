//Q83. Reverse Each Word in a Sentence
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    int start = 0;

    for(int i=0;i<=s.size();i++)
    {
        if(i == s.size() || s[i] == ' '){
            reverse(s.begin()+ start, s.begin() + i);
            start = i+1;
        }
    }

    cout<<s;

    return 0;    
}

/*
TC: O(n)
SC: O(1)
*/