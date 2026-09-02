/*
Core idea:
Maintain a sorted left portion and insert the next element into its correct position.

Example:
5 | 2 8 1

Take 2:
2 5 | 8 1

Take 8:
2 5 8 | 1

Take 1:
1 2 5 8
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    for(int i =1;i<n;i++){
        int key = arr[i];
        int j = i -1;


        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }

    for(int x: arr){
        cout<<x<<" ";
    }

    return 0;
}