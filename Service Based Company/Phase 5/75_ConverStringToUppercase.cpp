//Convert ch toi Uppercase

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    for(char &ch: s){
        ch = toupper(ch);
    }

    cout<<s;

    return 0;
}

/*
TC: O(n)
SC: O(1)
*/