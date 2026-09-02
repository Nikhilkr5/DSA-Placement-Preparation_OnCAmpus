#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cin>>target;

    int count = 0;

    for(int i=0;i<n;i++){
        if(arr[i] == target)
            count++;
    }

    cout<<count;
    return 0;
}

/*
Complexity
Time: O(n)
Extra Space: O(1)
*/