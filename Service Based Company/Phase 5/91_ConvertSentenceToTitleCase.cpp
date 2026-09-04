/*
Convert the sentence to title case.
VISIBLE EXAMPLE
Input: "HELLO WORLD"
Output: "Hello World"
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    bool newWord = true;

    for(char &ch : s){
        if(ch == ' '){
            newWord = true;
        }
        else if(newWord){
            ch = toupper(ch);
            newWord = false;
        }

        else{
            ch = tolower(ch);
        }
    }
    cout<<s;
    return 0;
}