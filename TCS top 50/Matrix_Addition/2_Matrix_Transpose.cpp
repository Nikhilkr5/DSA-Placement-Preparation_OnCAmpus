/*
Pattern:::   Transpose means:

rows ↔ columns

Example:
1 2 3
4 5 6

becomes:
1 4
2 5
3 6

Formula:
result[j][i] = matrix[i][j];
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int rows, cols;
    cin>>rows>>cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    for(int i=0;i<rows;i++){
        for(int j =0;j<cols;j++){
            cin>>matrix[i][j];
        }
    }

    for(int j=0;j<cols;j++){
        for(int i=0;i<rows;i++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

/*
Complexity

For an r × c matrix:

Time: O(r × c)
Extra Space: O(1)
*/