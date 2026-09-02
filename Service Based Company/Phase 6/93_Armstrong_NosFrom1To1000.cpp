//Q93. Armstrong Numbers from 1 to 1000


#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int n){
    int original =n;
    int digits = to_string(n).length();
    int sum =0;

    while(n > 0){
        int digit = n % 10;

        int power = 1;
        for(int i = 0 ;i<digits;i++){
            power *= digit;
        }

        sum += power;
        n/=10;
    }
    return sum == original;
}
int main(){
    for(int i =1;i<=1000;i++){
        if(isArmstrong(i))
            cout<<i<<" ";
    }
}

/*
TC: O(1000 × d²)
SC: O(1)
*/