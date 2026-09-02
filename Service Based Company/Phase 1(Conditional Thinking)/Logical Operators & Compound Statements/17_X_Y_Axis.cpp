// Check if a point lies on the X-axis, Y-axis, or origin.
// VISIBLE EXAMPLE
// Input: (0, 5)
// Output: Point lies on Y-axis

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin>>x>>y;

    if(x== 0 && y == 0){
        cout<<"Origin";
    }
    else if (x == 0)
        cout << "Y-axis";
    else if (y == 0)
        cout << "X-axis";
    else
        cout << "Neither";

    return 0;
}

// TC: O(1)
// SC: O(1)