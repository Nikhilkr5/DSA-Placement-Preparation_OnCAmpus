//optimal approach


#include<iostream>
using namespace std;

bool palindrone(int n){
    int revNum =0;
    int dup = n;

    while(n>0){

        int ld =n%10;

        revNum = (revNum *10)+ld;

        n= n/10;
    }

    if(dup== revNum){
        return true;
    } else {
        return false;
    }



}

int main(){
    int number = 4554;

    if(palindrone(number)){
        cout<<number<<"  is a palindrone. "<<endl;

    } else{
        cout<<number<<" is not a palindrone "<<endl;
    }

    return 0;
}


/*
Complexity Analysis

Time Complexity: O(log10N + 1) where N is the input number. The time complexity is determined by the number of digits in the input integer N. In the worst case when N is a multiple of 10 the number of digits in N is log10 N + 1.

In the while loop we divide N by 10 until it becomes 0 which takes log10N iterations.
In each iteration of the while loop we perform constant time operations like modulus and division and pushing elements into the vector.
Space Complexity: O(1) as only a constant amount of additional memory for the reversed number regardless of size of the input number.


*/