//Solution 1
#include<bits/stdc++.h>
using namespace std;
#define N 3
void transpose(int matrix[][N]){
    int temp[N][N];

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            temp[i][j]= matrix[j][i];
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    //matrix initialisation:
    int matrix[3][3] ={{4,5,6},{7,8,9},{10,11,12}};

    transpose(matrix);

}

/*
Time complexity: O(n*m) for traversing
Space complexity: O(n*m) for new matrix
*/

//Solution 2
#include<bits/stdc++.h>
using namespace std;

void transpose(int matrix[][N]){
    int temp[N][N];

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
}

int main(){
    //matrix initialization

    int matrix[3][3] ={{4,5,6}, {7,8,9}, {10,11,12}};

    transpose(matrix);

    //printing matrix
}

/*
Time complexity: O(n*m) for traversing
Space complexity: O(1)
*/

/*
Important Note:
This works only for square matrices (N x N).
For rectangular matrices (n x m where n≠m), in-place transposition is not possible because rows and columns don’t match in size.
*/


//for the code which also supports the rectangular matrix:

// For a rectangular matrix (n × m, where n ≠ m), you cannot do in-place transpose in the same array because the memory layout changes.
// So the only safe way is to create a new matrix of size m × n and store the transpose there.

// Here’s the optimal general solution:

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>> &matrix) {
    int n = matrix.size();        // rows
    int m = matrix[0].size();     // cols

    // Transposed matrix will have size m x n
    vector<vector<int>> temp(m, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            temp[j][i] = matrix[i][j];
        }
    }

    return temp;
}

int main() {
    // Example: 2x3 matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6}
    };

    vector<vector<int>> ans = transpose(matrix);

    // Print the transposed matrix
    for (auto row : ans) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}