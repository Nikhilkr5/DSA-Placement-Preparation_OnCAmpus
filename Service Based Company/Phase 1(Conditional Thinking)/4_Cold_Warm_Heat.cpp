#include<bits/stdc++.h>
using namespace std;

int main()
{
    int temp;
    cin>> temp;

    //Replace these limits with the ranges specified by your source.
    int coldlimit =20;
    int warmlimit = 35;

    if(temp < coldlimit){
        cout<<"Cold";
    }
    else if(temp <= warmlimit){
        cout<<"Warm";
    }
    else{
        cout<<"Hot";
    }

    return 0;
}

/*
TC: O(1)
SC: O(1)
*/