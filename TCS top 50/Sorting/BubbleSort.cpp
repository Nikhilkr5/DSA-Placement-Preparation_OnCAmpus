/*
Core idea:
Largest element goes to the end after every pass.

Example:
5  2  8  1

Compare adjacent elements:
5 2 → swap → 2 5 8 1
5 8 → no swap
8 1 → swap → 2 5 1 8

Now 8 is fixed at the end.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}

/*
Remember
if(arr[j] > arr[j+1])
    swap(arr[j], arr[j+1]);

Bubble = largest → end

Complexity
Time: O(n²) average/worst
Space: O(1)
*/