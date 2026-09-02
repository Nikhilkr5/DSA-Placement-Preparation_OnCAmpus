#include<iostream>
#include<cmath>
using namespace std;

int CountDigit(int n){
    int cnt = (int)(log10(n)+1);

    return cnt;
}

int main(){
    int n= 987654;
    cout<<"n: "<<n<<endl;

    int digits =CountDigit(n);

    cout<<"The no  digits in the n"<<digits<<endl;


}



/*
Time Complexity: O(1)as simple arithmetic operations in constant time are computed on integers.

Space Complexity : O(1)as only a constant amount of additional memory for the count variable regardless of size of the input number.
*/