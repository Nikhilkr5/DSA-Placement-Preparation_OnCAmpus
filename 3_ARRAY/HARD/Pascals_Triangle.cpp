//Approach1
#include<bits/stdc++.h>
using namespace std;

//Class Containing Pascal's Triangle logic
vector<vector<int>> generate(int numRows){
    vector<vector<int>> ans;

    for(int i=0;i<numRows;i++){
        vector<int> row(i+1,1);     //every row starts and ends with 1
        for(int j=1;j<i;j++){
            row[j] = ans[i-1][j] + ans[i-1][j];
        }
        ans.push_back(row);
    }
    return ans;
}


int main(){
    int n= 5; 
    vector<vector<int>>result = generate(n);

    for(auto &row: result){
        for(auto &val: row) cout<< val<<" ";
        cout<<endl;
    }
    return 0;
}

/*
🧠 Step-by-step analysis
### 1️⃣ Outer loop

Runs numRows times (from 0 to numRows - 1).

2️⃣ Inner loop

Runs:

0 times when i = 0 or 1

1 time when i = 2

2 times when i = 3

...

(i - 1) times when i = numRows - 1

So total number of inner loop executions: 0+0+1+2+3+…+(numRows−2)


That’s the sum of the first (numRows - 1) integers:  =[(numRows−1)(numRows−2)]/2​   

	​


This simplifies to O(numRows²)

3️⃣ Operations inside the loop

Each operation inside the loop is O(1) (simple addition and assignment).

So the overall time complexity is:  O(numRows2)​

🔹 Space Complexity

Let’s analyze memory used.

We store all rows of Pascal’s Triangle in ans.

Row 0 → 1 element

Row 1 → 2 elements

Row 2 → 3 elements

...

Row (n-1) → n elements

Total elements stored:

1+2+3+...+numRows=[numRows(numRows+1)]/2​

That’s also O(numRows²).

Extra temporary space

row vector → at most numRows elements → O(numRows) temporary.

No recursion or additional large data structures.

So total space = space for storing triangle + small temp vector
→ still O(numRows²) overall.
*/
/*
Complexity Analysis
Time Complexity: O(N^2), we generate all the elements in first N rows sequentially one by one.
Space Complexity: O(N^2), additional space used for storing the entire pascal triangle.
*/
