#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin>>s1>>s2;

    if(s1.size() == s2.size() && (s1 + s1).find(s2)!= string::npos)
        cout<<"Yes";
    else
        cout<<"No";        
        
    return 0;    
}

/*
TC: O(n²) worst case
SC: O(n)
*/