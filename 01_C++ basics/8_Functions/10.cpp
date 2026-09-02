//pass by reference  ->passes the original and any changes will make the changes in the original

#include<bits/stdc++.h>
using namespace std;

void doSomething(string &s){
    
    s[0]='t';

    cout<<s<<endl;

}

int main(){
    string s;
    cin>>s;

    doSomething(s);

    cout<<s;
    
}
