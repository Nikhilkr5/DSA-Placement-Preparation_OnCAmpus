// Replace Vowels with *

#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch){
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch =='i'|| ch == 'o' || ch == 'u';
}

int main(){
    string s;
    getline(cin,s);

    for(char &ch : s){
        if(isVowel(ch))
            ch = '*';
    }

    cout<<s;
    return 0;

}
// TC: O(n)
// SC: O(1)