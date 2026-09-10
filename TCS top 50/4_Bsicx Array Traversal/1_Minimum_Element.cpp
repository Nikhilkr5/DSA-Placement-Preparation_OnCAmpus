#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int mn = arr[0];

    for(int i=1;i<n;i++){
        if(arr[i] < mn)
            mn = arr[i];
    }

    cout<<mn;

    return 0;
}

/*
Complexity
Time: O(n)
Extra Space: O(1)
*/