/*
Core idea:
Find the smallest element and put it at the front.

Example:
5 2 8 1

Find minimum:
1

Put it at index 0:
1 2 8 5

Then find the minimum in the remaining portion.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i =0;i<n-1;i++){
        int minIndex = i;

        for(int j = i+1;j<n;j++){
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }


    for(int x: arr){
        cout<<x<<" ";
    }

    return 0;
}

/*
Selection = minimum → front

Complexity
Time: O(n²)
Space: O(1)
*/