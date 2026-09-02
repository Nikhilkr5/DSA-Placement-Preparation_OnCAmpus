//Anagram → Frequency Counting
/*
Question::::

Given two strings, check whether they are anagrams.

Example:

Input:
listen
silent


Output:
Anagram

Another:

hello
world

Output:  Not Anagram
*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;

    if(s.length() != t.length()){
        cout<<"Not Anagram";
        return 0;
    }

    int freq[26] = {0};

    //Count characters of first string
    for(char ch: s){
        freq[ch-'a']++;
    }

    //Remove characters of second string
    for(char ch:t){
        freq[ch - 'a']--;
    }

    //Check whether all frequencies became 0
    for(int i =0;i<26;i++){
        if(freq[i] != 0){
            cout<<"Not Anagram";
            return 0;
        }
    }

    cout<<"Anagram";

    return 0;

}