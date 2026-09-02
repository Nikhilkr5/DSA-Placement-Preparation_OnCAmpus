//Pattern: String filtering
//Suppose: hello world
//Remove:  l
//Result:   heo word


#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; 
    getline(cin,s);

    char target;
    cin>>target;

    string ans = "";

    for(char ch : s){
        if(ch != target)
            ans += ch;            
    }

    cout<<ans;

    return 0;
}
/*
Complexity:::::::
Time: O(n)
Space: O(n) for result
*/