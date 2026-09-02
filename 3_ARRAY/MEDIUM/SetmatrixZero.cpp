// #include<bits/stdc++.h>
// using namespace std;


// void markRow(vector<vector<int>> &matrix,int n,int m,int i){
//     // set all non-zero elements as -1 in the row i:
//     for(int j=0;j<m;j++){
//         if(matrix[i][j]!=0){
//             matrix[i][j] = -1;            
//         }
//     }
// }

// void markCol(vector<vector<int>> & matrix, int n,int m, int j){
//     //set all non-zero elements as -1 in the col j
//     for(int i=0;i<n;i++){
//         if(matrix[i][j]!=0){
//             matrix[i][j]=-1;
//         }
//     }
// }
// vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix,int n, int m){
    
//     // Set -1 for rows and cols
//     // that contains 0. Don't mark any 0 as -1:
    
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(matrix[i][j]== 0){
//                 markRow(matrix,n,m,i);
//                 markCol(matrix,n,m,j);
//             }
//         }
//     }
    
//     // Finally, mark all -1 as 0:
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(matrix[i][j] == -1){
//                 matrix[i][j] = 0;
//             }
//         }
//     }
//     return matrix;

// }

// int main(){
//     vector<vector<int>> matrix ={{1,1,1}, {1,0,1},{1,1,1}};
//     int n= matrix.size();
//     int m = matrix[0].size();
//     vector<vector<int>> ans = zeroMatrix(matrix,n,m);

//     cout<<"The final matrix is: \n";
//     for(auto it: ans){
//         for(auto ele : it){
//             cout<< ele <<" ";
            
//         }
//         cout<<" \n";

//     }
//     return 0;

// }

/*
Time Complexity: O((N*M)*(N + M)) + O(N*M), where N = no. of rows in the matrix and M = no. of columns in the matrix.
Reason: Firstly, we are traversing the matrix to find the cells with the value 0. It takes O(N*M). Now, whenever we find any such cell we mark that row and column with -1. This process takes O(N+M). So, combining this the whole process, finding and marking, takes O((N*M)*(N + M)).
Another O(N*M) is taken to mark all the cells with -1 as 0 finally.

Space Complexity: O(1) as we are not using any extra space.
*/

/*
⏱ Time Complexity

Outer loop (first traversal): O(n * m)

For each cell, if it's 0, you call markRow and markCol.

markRow: runs O(m) (goes through all columns in row i).

markCol: runs O(n) (goes through all rows in column j).

❗ Worst case: if there are k zeros, you will do k * (n + m) extra work.

So total time = O(n∗m)+O(k∗(n+m))

If matrix has many 0s (worst case, almost all elements are 0): O(n∗m+n∗m∗(n+m))≈O(n∗m∗(n+m))

That’s quite inefficient.

💾 Space Complexity

You’re modifying the matrix in place → no extra 2D array.

Just a few variables (i, j etc.).

So auxiliary space = O(1).
*/

//Better Approach:

// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {

//     vector<int> row(n, 0); // row array
//     vector<int> col(m, 0); // col array


//     // int row[n] = {0}; // row array  //not valid standard C++.
//     // int col[m] = {0}; // col array  //not valid standard C++.

//     // Traverse the matrix:
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (matrix[i][j] == 0) {
//                 row[i] = 1;  // mark ith row
//                 col[j] = 1;  // mark jth col
//             }
//         }
//     }

//     // Update matrix
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (row[i] || col[j]) {
//                 matrix[i][j] = 0;
//             }
//         }
//     }

//     return matrix;
// }

// int main()
// {
//     vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
//     int n = matrix.size();
//     int m = matrix[0].size();

//     vector<vector<int>> ans = zeroMatrix(matrix, n, m);

//     cout << "The Final matrix is:\n";
//     for (auto it : ans) {
//         for (auto ele : it) {
//             cout << ele << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }
/*
Time Complexity: O(2*(N*M)), where N = no. of rows in the matrix and M = no. of columns in the matrix.
Reason: We are traversing the entire matrix 2 times and each traversal is taking O(N*M) time complexity.

Space Complexity: O(N) + O(M), where N = no. of rows in the matrix and M = no. of columns in the matrix.
Reason: O(N) is for using the row array and O(M) is for using the col array.
*/
/*
Time Complexity:
First traversal:
Loop over all elements once → O(n * m)
Second traversal:
Again loop over all elements once → O(n * m)
✅ Total time = O(n*m) + O(n*m) = O(n*m)

Space Complexity:
You store two arrays:
row[n] → requires O(n)
col[m] → requires O(m)
✅ Extra space = O(n + m)

Final Analysis:
Time Complexity: O(n * m)
Space Complexity: O(n + m)

*/

//Best approach

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n,int m){
    //int row[n]= {0} --> matrix[..][0]
    //int col[m] ={0} --> matrix[0][..]

    int col0 =1;
    // step 1: Traverse the matrix and
    // mark 1st row & col accordingly:

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;

                if(j!=0)
                    matrix[0][j]=0;
                else
                    col0=0;    
            }
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(matrix[i][j]!=0){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j] = 0;
                }
            }
        }
    }
    if(matrix[0][0]==0){
        for(int j=0;j<m;j++){
            matrix[0][j] = 0;

        }
    }
    if(col0==0){
        for(int i=0;i<n;i++){
            matrix[i][0]=0;
        }
    }
    return matrix;


}
/*
Time Complexity: O(2*(N*M)), where N = no. of rows in the matrix and M = no. of columns in the matrix.
Reason: In this approach, we are also traversing the entire matrix 2 times and each traversal is taking O(N*M) time complexity.

Space Complexity: O(1) as we are not using any extra space
*/

/*
🔹 Step-by-step Analysis:
1. First traversal (Step 1):
Visits every cell once → O(n × m)

2. Second traversal (Step 2):
Again visits almost all cells once → O(n × m)

3. Third traversal (Step 3):
At most O(n + m)

🔹 Total Time Complexity:
    O(n × m + n × m + (n + m)) ≈ O(n × m)


Space Complexity:
Uses only:
int col0 = 1; → O(1) extra variable

Modifies matrix in-place, no extra arrays
So, Space = O(1) (constant extra space, apart from input matrix).

✅ Final Answer:
Time Complexity: O(n × m)
Space Complexity: O(1)
*/