#include<bits/stdc++.h>
using namespace std;

int main(){
    int year;
    cin>>year;

    if(year % 400 == 0 || (year % 4 == 0 && year%100 != 0)){
        cout<<"leap year";        
    }
    else{
        cout<<"Not a Leap Year";
    }
    return 0;
}

/*
Complexity
Time: O(1)
Space: O(1)
*/