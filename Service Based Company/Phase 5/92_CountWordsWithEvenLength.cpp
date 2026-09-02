#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    int count =0;

    while(ss >> word){
        if(word.length()% 2 == 0){
            count++;
        }
    }
    cout<<count;

    return 0;

}

/*
TC: O(n)
SC: O(n)
*/

