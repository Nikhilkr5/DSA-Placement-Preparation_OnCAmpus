//Brute force approach

// #include<bits/stdc++.h>
// using namespace std;

// vector<vector<int>> rotate(vector<vector<int>> &matrix){
//     int n= matrix.size();
//     vector<vector<int>> rotated(n, vector<int> (n,0));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             rotated[j][n-i-1] = matrix[i][j];
//         }
//     }
//     return rotated;
// }

// int main(){
//     vector<vector<int>> arr;
//     arr ={{1,2,3}, {4,5,6}, {7,8,9}};
//     vector<vector<int>> rotated = rotate(arr);

//     for(int i=0;i<rotated.size();i++){
//         for(int j=0;j<rotated[0].size();j++){
//             cout<<rotated[i][j]<<" ";
//         }
//         cout<<"\n";
//     } 
// }

/*
Time Complexity: O(N*N) to linearly iterate and put it into some other matrix.
Space Complexity: O(N*N) to copy it into some other matrix.*/

/*
🔹 Time Complexity:
You have two nested loops:
Outer loop: runs n times.
Inner loop: runs n times for each outer iteration.
So total operations = n × n = n².

Each operation inside the loop is just an assignment → constant time.

✅ Time Complexity = O(n²)

🔹 Space Complexity:
You created a new matrix rotated of size n × n.
That requires extra space proportional to the number of elements.
✅ Space Complexity = O(n²)
*/

//OPtimal Approach

//but before knowing optimal approach study transpose matrix

#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> & matrix){
    int n= matrix.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            swap(matrix[i][j], matrix[j][i]);

        }
    }
    /*
    ⚠️ Important Note:

    Normally, for in-place transpose, j should start from i to avoid double swapping:

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    Otherwise, each element gets swapped twice unnecessarily. This doesn’t change big-O, but is slightly inefficient in practice.    
    */

    //reversing each row of the matrix
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(), matrix[i].end());        
    }
}

int main(){
    vector<vector<int>> arr;
    arr ={{1,2,3},{4,5,6},{7,8,9}};
    rotate(arr);

    cout<<"The roatated image "<<endl;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<arr[i][j]<<" ";            
        }
        cout<<"\n";
    }
}


/*
Matrix Rotation (90° Clockwise) - Complexity Analysis

1. Transpose the matrix:
   for i = 0 to n-1:
       for j = i to n-1:
           swap(matrix[i][j], matrix[j][i])
   - Time: O(n^2)
   - Space: O(1) (in-place)

2. Reverse each row:
   for i = 0 to n-1:
       reverse(matrix[i].begin(), matrix[i].end())
   - Time: O(n^2)   // n rows × n elements
   - Space: O(1) (in-place)

3. Overall:
   - Time Complexity: O(n^2)
   - Space Complexity: O(1)

Notes:
- Works only for square matrix (n x n)
- For rectangular matrices, separate logic is needed
*/


// Perfect! For a rectangular matrix (n × m), you cannot do in-place rotation like a square matrix because the dimensions change after a 90° rotation.

// Original: n rows × m columns

// After 90° clockwise: m rows × n columns

// We need to create a new matrix to store the rotated version.

// Code for Rectangular Matrix Rotation
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> rotateRectangular(vector<vector<int>>& matrix) {
    int n = matrix.size();       // original rows
    int m = matrix[0].size();    // original cols

    // rotated matrix will have m rows and n cols
    vector<vector<int>> rotated(m, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            rotated[j][n - 1 - i] = matrix[i][j]; // 90° clockwise
        }
    }

    return rotated;
}

int main() {
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}};
    vector<vector<int>> rotated = rotateRectangular(arr);

    cout << "Rotated Matrix:\n";
    for (auto row : rotated) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << "\n";
    }
}

/*
Rectangular Matrix Rotation (90° Clockwise)

1. Create new rotated matrix:
   vector<vector<int>> rotated(m, vector<int>(n));
   - Time: O(m*n)  // initializing m rows with n elements
   - Space: O(m*n) // new matrix of size m x n

2. Fill rotated matrix:
   for i = 0 to n-1:
       for j = 0 to m-1:
           rotated[j][n-1-i] = matrix[i][j];
   - Time: O(m*n)
   - Space: O(1) extra (in-place within new matrix)

3. Overall Complexity:
   - Time: O(m*n)
   - Space: O(m*n)

Notes:
- Works for any rectangular (n x m) or square (n x n) matrix
- Cannot do in-place rotation if n != m
*/
