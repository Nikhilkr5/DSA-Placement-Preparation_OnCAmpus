//Pass by value   -> no change in original, provides copy  and changes are done in copy without afftecting the original one


#include<bits/stdc++.h>
using namespace std;

void doSomething(string s){

    s[0] ='t';
    cout<<s<<endl;

}

int main(){
    string s;
    cin>>s;
    doSomething(s);
    cout<<s;
    return 0;


}
