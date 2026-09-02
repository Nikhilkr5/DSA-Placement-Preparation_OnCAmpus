//Brute force Approach:

//it can be written in ywo ways:
//1.pass by vaue 2. pass by reference

/*
1.pass by value:
vector<int> moveZeros(int n, vector<int> a) {  // a is a copy of arr
    // do all modifications on this local copy
    ...
    return a;   // must return modified vector back
}

a is a copy of arr from main.
Any modifications happen only on this local copy.
If you don’t return a, the original arr in main will remain unchanged.
That’s why the return type is vector<int>.
example:
vector<int> arr = {1,0,2};
vector<int> ans = moveZeros(arr.size(), arr); 
// arr is unchanged, ans has the result
*/

// #include<bits/stdc++.h>
// using namespace std;


// vector<int> moveZeros(int n, vector<int> a){
//     vector<int> temp;

//     for(int i=0;i<n;i++){
//         if(a[i]!=0)
//             temp.push_back(a[i]);

//     }
//     int nz= temp.size();

//     for(int i=0;i<nz;i++){
//         a[i]= temp[i];
//     }
//     for(int i=nz;i<n;i++){
//         a[i] = 0;

//     }
//     return a;
// }

// int main(){
//     vector<int> arr ={7,0,2,3,2,0,0,0,4,5,1};
//     int n=10;
//     vector<int> ans = moveZeros(n,arr);
//     for(auto &it : ans){
//         cout<<it<<" ";
//     }
//     cout<<'\n';
//     return 0;
// }


//2.pass by reference
/*
void moveZeros(int n, vector<int>& a) { // a is the same arr from main
    // modifications happen directly on arr
    ...
}
a is just an alias to the original arr.
No copy is made → faster & memory-efficient.
Any modification inside function changes arr itself.
No need to return anything (void).
Example:
vector<int> arr = {1,0,2};
moveZeros(arr.size(), arr); 
// arr itself is updated

*/

// #include<bits/stdc++.h>
// using namespace std;

// void moveZeros(int n,vector<int>& a){   //pass by reference
//     //temporary array:
//     vector<int> temp;

//     //copy non-zero elements
//     for(int i=0;i<n;i++){
//         if(a[i] != 0)
//             temp.push_back(a[i]);
//     }

//     //number of non zero elements
//     int nz = temp.size();

//     //copy elements fromtemp
//     for(int i=0;i<nz;i++){
//         a[i] = temp[i];

//     }

//     //fill rest with 0
//     for(int i=nz;i<n;i++){
//         a[i]=0;
//     }
// }

// int main(){
//     vector<int> arr={1,0,2,3,2,0,0,0,4,5,1};
//     int n=arr.size();

//     moveZeros(n,arr); //no return needed

//     for(auto &it:arr){
//         cout<<it<<" ";
//     }
//     cout<<'\n';
//     return 0;
// }

/*
Time Complexity: O(N) + O(X) + O(N-X) ~ O(2*N), where N = total no. of elements,
X = no. of non-zero elements, and N-X = total no. of zeros.
Reason: O(N) for copying non-zero elements from the original to the temporary array. O(X) for again copying it back from the temporary to the original array. O(N-X) for filling zeros in the original array. So, the total time complexity will be O(2*N).
Space Complexity: O(N), as we are using a temporary array to solve this problem and the maximum size of the array can be N in the worst case.
Reason: The temporary array stores the non-zero elements. In the worst case, all the given array elements will be non-zero.
*/
/*
1. Pass by Value
vector<int> moveZeros(int n, vector<int> a) { ... }

Here a is a copy of the original arr.
Copying a vector of size n takes O(n) time and O(n) extra space.

🔎 Complexity:
Copy cost: O(n) time + O(n) space (for the copy).
Loop operations: You still iterate over n elements → O(n).
Total Time Complexity: O(n) + O(n) = O(n) (copy dominates but still linear).
Total Space Complexity: O(n) (due to vector copy + temp vector).

2. Pass by Reference
void moveZeros(int n, vector<int>& a) { ... }
Here a is just an alias to the original arr.
No copy is made → only a reference (O(1)) is passed.

🔎 Complexity:
Copy cost: None → O(1).
Loop operations: Same iteration over n elements → O(n).
Total Time Complexity: O(n)
Total Space Complexity: O(n) (only the temp vector, no extra copy).
*/



//optimal Approach
//Using 2 Pointers

// #include<bits/stdc++.h>
// using namespace std;

// void moveZeros(int n,vector<int>& arr){
//     int j=-1;    //asuming no zero yet
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             j=i;     //store index of first zero
//             break;  // stop searching
//         }            
//     }

//     if(j==-1) return;


//     for(int i=j+1;i<n;i++){
//         if(arr[i]!=0){
//             swap(arr[i],arr[j]);
//             j++;
//         }
//     }
// }

// int main(){
//     vector<int>arr={1,2,0,3,2,0,0,4,5,1};
//     int n=10;

//     moveZeros(n,arr);
//     for(auto &it: arr){
//         cout<<it<<" ";

//     }
//     cout<<'\n ';
//     return 0;
// }
/*
⏱ Time Complexity

First loop → finds the first zero.
In the worst case (if the first zero is at the end or not present), it scans the entire array.
Cost: O(N)

Second loop → scans from j+1 to n-1.
Again, in the worst case, this is the entire array (if first zero is at index 0).
Cost: O(N)
👉 Total Time = O(N) + O(N) = O(2N) = O(N)
📦 Space Complexity
No extra data structures are used (just i, j, and swaps).
Space = O(1)
*/


//or 
#include <bits/stdc++.h>
using namespace std;

void moveZeros(int n, vector<int>& arr) {
    int j = 0; // position for next non-zero element

    // Step 1: Move all non-zeros to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }

    // Step 2: Fill remaining positions with zeros
    while (j < n) {
        arr[j] = 0;
        j++;
    }
}

int main() {
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = arr.size();

    moveZeros(n, arr);

    cout << "Array after moving zeros:\n";
    for (auto &it : arr) {
        cout << it << " ";
    }
    cout << '\n';

    return 0;
}
