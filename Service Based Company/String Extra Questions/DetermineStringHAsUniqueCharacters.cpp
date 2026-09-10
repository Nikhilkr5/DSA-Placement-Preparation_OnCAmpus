#include<bits/stdc++.h>
using namespace std;

bool isUnique(string s){
    for(int i=0;i<s.length();i++){
        for(int j=i+1;j<s.length();j++){
            if(s[i] == s[j])
                return false;
        }
    }
    return true;
}
int main(){
    string s;
    getline(cin,s);

    if(isUnique(s)){
        cout<<"true";
    }
    else{
        cout<<"False";
    }
    return 0;
}

/*
T.C: O(n²)
S.C:  O(1)
*/

/*
2️⃣ Better — Sorting — O(n log n)
*/


#include<bits/stdc++.h>
using namespace std;

bool isUnique(string s){
    sort(s.begin(),s.end());

    for(int i=0;i<s.length();i++){
        if(s[i] == s[i-1])
            return false;
    }
    return true;
}


int main(){
    string s;
    getline(cin,s);

    if(isUnique(s)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}


/*
T.C: O(n log n)
S.C:  O(1)
*/


// 3️⃣ Optimal — Boolean Array — O(n)

#include<bits/stdc++.h>
using namespace std;

bool isUnique(string s){
    bool seen[256] = {};


    for(char ch : s){
        unsigned char c = ch;

        if(seen[ch])
            return false;

        
        seen[c] = true;    
    }

}

int main(){
    string s;
    getline(cin,s);

    if(isUnique(s)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}

/*
T.C: O(n)
S.C:  O(1)
*/




//Alternative: Set → O(n log n), O(n)

#include<bits/stdc++.h>
using namespace std;

bool isUnique(string s){
    set<char>st;
    
    for(char ch: s){
        st.insert(ch);
    }
    return st.size() == s.size();
}


int main(){
    string s;
    getline(cin,s);

    if(isUnique(s)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}