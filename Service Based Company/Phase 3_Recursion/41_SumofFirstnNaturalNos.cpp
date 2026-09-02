#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n<=0) return;

    return n + sum(n-1);
}

int main(){
    int n;
    cin>>n;

    cout<<sum(n);
    return 0;
} 
/*
TC: O(n)
SC: O(n)
*/