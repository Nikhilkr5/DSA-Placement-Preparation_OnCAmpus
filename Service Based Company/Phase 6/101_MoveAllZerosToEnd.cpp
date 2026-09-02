#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int &x : arr){
        cin>>x;
    }

    int index =0;

    for(int x : arr){
        if(x != 0){
            arr[index++] = x;
        }
    }

    while(index < n)
        arr[index++] =0;
    
    for(int x : arr)   
        cout<<x<<" ";
    
    return 0;    
}

/*
TC: O(n)
SC: O(1)
*/
