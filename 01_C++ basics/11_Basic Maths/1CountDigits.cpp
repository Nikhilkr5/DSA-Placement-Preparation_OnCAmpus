//brute force approach

#include<iostream>
#include<vector>
using namespace std;

int CountDigits(int N){
    

    int cnt = 0;

    while(N>0){

        
        cnt++;

        N=N/10;

    }
    return cnt;
}


int main(){
    int N = 56788990;
    cout<<"Number: "<<N<<endl;

    int Counts= CountDigits(N);

    cout<<"The number of digits: "<<Counts<<endl;

    return 0;



    
}


/*
Time Complexity: O(log10N + 1) where N is the input number. The time complexity is determined by the number of digits in the input integer N. In the worst case when N is a multiple of 10 the number of digits in N is log10N + 1.

In the while loop we divide N by 10 until it becomes 0 which takes log10N iterations.
In each iteration of the while loop we perform constant time operations like division and increment the counter.
Space Complexity : O(1) as only a constant amount of additional memory for the counter regardless of size of the input number.*/