#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    unordered_set<int> seen;

    for(int x: arr){
        if(seen.count(x))
            cout<<x<<" ";
        else
            seen.insert(x);
    }
}

/*
Complexity

Average:

Time: O(n)
Space: O(n)
*/