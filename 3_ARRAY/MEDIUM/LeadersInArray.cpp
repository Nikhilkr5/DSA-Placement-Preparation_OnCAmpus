// #include<bits/stdc++.h>
// using namespace std;
// vector<int> printLeadersBruteForce(int arr[],int n){
//     vector<int> ans;
//     for(int i=0;i<n;i++){
//         bool leader =true;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]>arr[i]){
//                 leader = false;
//                 break;
//             }
//         }
//         if(leader){
//             ans.push_back(arr[i]);
//         }
//     }
//     return ans;
// }
// int main(){
//     int n=6;
//     int arr[n] ={10,22,12,3,0,6};
//     vector<int> ans = printLeadersBruteForce(arr,n);
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


/*
Time Complexity:
Outer loop → O(n)
Inner loop → O(n) in worst case
Overall → O(n^2) (brute force)
*/

/*
Time Complexity Analysis:
Outer loop runs n times → O(n)
Inner loop:
In worst case (every element is leader), inner loop runs (n-1) + (n-2) + ... + 1 = n*(n-1)/2 → O(n^2)
Average case: slightly better because of the break, but still O(n^2) in worst case.
push_back complexity:
push_back in std::vector is amortized O(1).
Vector may reallocate memory when it exceeds capacity, which can take O(size) occasionally, but amortized over all insertions, it remains O(1) per insertion.
✅ Total Time Complexity:
Worst case: O(n^2)
With push_back included, it doesn’t increase asymptotic complexity because amortized O(1) is used.

Space Complexity Analysis:
ans vector stores all leaders:
Maximum possible leaders = n (if array is strictly decreasing).
So O(n) extra space.
Other variables: leader (bool), i, j → O(1)
✅ Total Space Complexity: O(n)
*/
/*
Time Complexity: O(N^2) { Since there are nested loops being used, at the worst case n^2 time would be consumed }.

Space Complexity: O(N) { There is no extra space being used in this approach. But, a O(N) of space for ans array will be used in the worst case }.
*/


//Optimal Solution:


#include<bits/stdc++.h>
using namespace std;
vector<int> printLeaders(int arr[],int n){
    vector<int> ans;

    int max= arr[n-1];
    ans.push_back(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        if(arr[i]>=max){                           //Use of >=:    Ensures that equal elements are also considered leaders.
            ans.push_back(arr[i]);
            max = arr[i];
        }
    }
    return ans;
}

int main(){
    int n=6;
    int arr[]={10,22,12,3,0,6};
    vector<int> ans =printLeaders(arr,n);
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}

/*
Time Complexity:
Single loop from right to left → O(n)
push_back → amortized O(1) per insertion
Total push_back calls ≤ n → O(n) overall
Printing in reverse → O(n)
✅ Overall Time Complexity: O(n)

Space Complexity:
Vector ans stores all leaders → maximum n elements → O(n)
Other variables (max, i) → O(1)
✅ Overall Space Complexity: O(n)
Note: If we were allowed to print leaders immediately while traversing, we could reduce extra space to O(1), but then the order would be reversed.
*/

/*
Time Complexity: O(N) { Since the array is traversed single time back to front, it will consume O(N) of time where N = size of the array }.
Space Complexity: O(N) { There is no extra space being used in this approach. But, a O(N) of space for ans array will be used in the worst case }.
*/


//or 
/*
vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int> ans;
    int maxi = INT_MIN;
    int n= a.size();
    //O(N)

    for(int  i=n-1;i>=0;i--){
        if(a[i]> maxi) {
            ans.push_back(a[i]);
        }
        //keep tracjk of right max
        maxi =max(maxi, a[i]);
    }
    //O(N log N)
    
    sort(ans.begin(), ans.end());
    return ans;
}
*/