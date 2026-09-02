#include <bits/stdc++.h>
using namespace std;

void printName(string name, int n) {
    if (n == 0)
        return;

    cout << name << endl;
    printName(name, n - 1);
}

int main() {
    string name;
    int n;

    cin >> name >> n;

    printName(name, n);

    return 0;
}

/*
TC: O(n)
SC: O(n)
*/

//by backtracking:
/*
#include<iostream>
using namespace std;

void func(int i, int n){
    if(i<1) return;
    func(i-1,n);
    cout<<"Nikhil"<<endl;  
}

int main(){
    int n=4;
    
    func(n,n);
    return 0;
}

*/