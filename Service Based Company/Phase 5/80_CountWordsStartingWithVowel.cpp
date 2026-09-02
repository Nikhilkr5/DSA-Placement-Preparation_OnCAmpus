#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch){
    ch = tolower(ch);
    return (ch =='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch =='u');
}
int main(){
    string s;
    getline(cin,s);

    stringstream ss(s);
    string word;
    int count =0;

    while(ss >> word){
        if(isVowel(word[0])){
            count++;
        }
    }
    cout<<count;

    return 0;
}

/*
TC: O(n)
SC: O(1)
*/

// stringstream lets us extract words one by one from a complete string.
// while (ss >> word) gets the next word until no words are left.
// word[0] gives the first character of the current word.
// isVowel(word[0]) checks whether the word starts with a vowel.
// If yes, increase the count.