// Q90. Capitalize First Letter of Each Word

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    bool newWord = true;

    for(char &ch: s){
        if(ch == ' '){
            newWord = true;
        }

        else if(newWord){
            ch =toupper(ch);
            newWord = false;
        }
    }
}

/*
TC: O(n)
SC: O(1)
*/