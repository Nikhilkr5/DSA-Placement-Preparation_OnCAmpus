//Pattern::: 2D Array / Nested Traversal

/*
If:
A = 1 2
    3 4

B = 5 6
    7 8

Then:
A + B = 6  8
        10 12

The formula is simply:
C[i][j] = A[i][j] + B[i][j];
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int rows, cols;
    cin>> rows>> cols;


    vector<vector<int>> a(rows, vector<int>(cols));
    vector<vector<int>> b(rows, vector<int>(cols));

    for(int i =0;i< rows;i++){
        for(int j = 0;j<cols; j++){
            cin>> a[i][j];
        }
    }

    for(int i =0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>> b[i][j];
        }
    }

    for(int i=0;i<rows;i++){
        for(int j =0;j< cols;j++){
            cout<<a[i][j] + b[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

/*
Complexity:::::::
For an r × c matrix:

Time: O(r × c)
Extra Space: O(1) if we directly output the result

If we actually store the result matrix, it takes O(r × c) space.
*/