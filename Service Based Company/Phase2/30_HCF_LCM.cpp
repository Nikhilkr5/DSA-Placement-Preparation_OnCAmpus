// HCF / GCD Using Loops

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a , b;

    cin>>a>>b;

    while(b != 0){
        int rem = a % b;
        a = b;
        b = rem;
    }
}

/*
The pattern to remember
For every iteration:
a, b → calculate a % b → a = b → b = remainder
So:
48, 18 → 18, 12 → 12, 6 → 6, 0
*/

/*
TC: O(log(min(a,b)))
SC: O(1)
*/