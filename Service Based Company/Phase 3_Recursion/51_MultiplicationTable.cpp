#include<bits/stdc++.h>
using namespace std;


void table(int n, int i) {
    if (i > 10)
        return;
    
    cout<< n * i <<" ";
    table(n, i+1);    

    cout << n * i << " ";
    table(n, i + 1);
}

int main(){
    int n;
    cin>>n;

    table(n, 1);

    return 0;
}

/*
TC: O(1)
SC: O(1)
*/