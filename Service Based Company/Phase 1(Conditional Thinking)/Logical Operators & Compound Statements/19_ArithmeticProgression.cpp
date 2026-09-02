// An arithmetic progression (AP) is a sequence of numbers where the difference between any two consecutive terms is always constant.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;

    if (b - a == c - b)
        cout << "Yes, AP with d = " << b - a;
    else
        cout << "No, not an AP";

    return 0;
}

// TC: O(1)
// SC: O(1)

