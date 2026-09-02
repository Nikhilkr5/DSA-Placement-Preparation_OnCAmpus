//Pattern::: String → words → reverse word order
//Example::: "I love coding"
//Output::: "coding love I"

//Use stringstream to extract words.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    stringstream ss(s);
    vector<string> words;

    string word;

    while(ss >> word)
        words.push_back(word);
    
    reverse(words.begin(), words.end());

    for(int i = 0;i<words.size();i++){
        if(i > 0){;
            cout<<" ";
        }

        cout<<words[i];
    }

    return 0;
}