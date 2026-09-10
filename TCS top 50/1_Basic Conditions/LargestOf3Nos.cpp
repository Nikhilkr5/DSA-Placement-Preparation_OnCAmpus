#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int largest = a;

    if(b > largest){
        largest=b;
    }

    if(c > largest){
        largest = c;
    }

    cout<<"The largest among 3 is "<<largest;

    return 0;
}

/*
Complexity
Time: O(1)
Space: O(1)
*/