#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    int count =0;

    for(char ch:s){
        if(ch == ' ')
            count++;
    }

    count<<count;
    return 0;
}

/*
TC: O(n)
SC: O(1)
*/