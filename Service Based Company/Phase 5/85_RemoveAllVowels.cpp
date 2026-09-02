#include<bits/stdc++.h>
using namespace std;


bool isVowel(char ch){
    ch = tolower(ch);

    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main(){
    string s;
    getline(cin,s);

    string result;

    for(char ch:s){
        if(!isVowel(ch)){
            result += ch;
        }
    }

    cout<<result;

    return 0;
}