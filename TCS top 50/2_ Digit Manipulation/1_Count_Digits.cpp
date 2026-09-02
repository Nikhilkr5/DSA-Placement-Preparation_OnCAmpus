//Count Number of Digits

//Pattern:   Digit extraction + counter

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int count = 0;

    while(n!=0){
        count++;
        n/=10;
    }
    cout<<count;

    return 0;
}

/*
Complexity
Time: O(d)
Space: O(1)

d = number of digits.
*/