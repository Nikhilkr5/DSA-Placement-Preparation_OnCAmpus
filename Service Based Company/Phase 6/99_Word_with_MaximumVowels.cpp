#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch){
    ch = tolower(ch);

    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';

}

int main(){
    string s;
    getline(cin,s);

    stringstream ss(s);
    string word, answer;

    int maxVowels = -1;

    while(ss >> word){
        int count =0;

        for(char ch : word){
            if(isVowel(ch))
                count++;
        }
        if(count > maxVowels){
            maxVowels = count;
            answer = word;
        }
    }

    cout<<answer;

    return 0;
}

/*
TC: O(n)
SC: O(n)
*/