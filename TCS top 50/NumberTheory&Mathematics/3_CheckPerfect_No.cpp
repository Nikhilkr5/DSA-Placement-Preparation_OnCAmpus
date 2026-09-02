//A perfect number equals the sum of its proper divisors.
/*
Example:
6
Proper divisors:
1 + 2 + 3 = 6
Therefore:
6 → Perfect
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum = 0;

    for(int i=1;i<=n/2;i++){
        if(n % i == 0){
            sum += i;
        }
    }

    if(sum == n)
        cout<<"Perfect";
    else{
        cout<<"Not Perfect";
    }    
    return 0;
}

/*
Complexity
Time: O(n)
Space: O(1)
*/