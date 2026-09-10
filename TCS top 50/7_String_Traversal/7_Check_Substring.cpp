//Pattern:--  String search

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, sub;

    getline(cin, s);
    getline(cin, sub);

    if(s.find(sub) != string::npos)
        cout<<"Substring Found";
    else{
        cout<<"Substring Not Found";
    }    
    return 0;
}