//Pattern:: Repeated multiplication

#include<bits/stdc++.h>
using namespace std;

int main(){
    int base, exp;
    cin>>base>>exp;

    long long result = 1;

    for(int i=0;i<exp;i++){
        result *= base;
    }
    cout<<result;

}

/*
Complexity
Time: O(exp)
Space: O(1)
*/