//Solution1 :Brute force Approach

// #include<bits/stdc++.h>
// using namespace std;

// void solve(int arr[],int n){
//     int temp[n];
//     for(int i=1;i<n;i++){
//         temp[i-1] = arr[i];
//     }
//     temp[n-1]= arr[0];
//     for(int i=0;i<n;i++){
//         cout<<temp[i]<<i++;
//     }
// }

// int main(){
//     int n=5;
//     int arr[] ={1,2,3,4,5};
//     solve(arr,n);
// }

/*
Time Complexity:
First loop (for(int i=1; i<n; i++)) → runs n-1 times → O(n).
Assign last element (temp[n-1] = arr[0]) → O(1).
Second loop (for(int i=0; i<n; i++)) → runs n times → O(n).
👉 Total = O(n) + O(1) + O(n) = O(n)

Space Complexity

You create an auxiliary array temp[n].
So extra space used = O(n).
No recursion or other data structures.

👉 Total = O(n)
*/


//Solution 2: Optimal Approach

#include<bits/stdc++.h>
using namespace std;

void solve(int arr[],int n){
    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n=5;
    int arr[]={1,2,3,4,5};
    solve(arr,n);
}
/*
Time Complexity:-
temp = arr[0]; → O(1)
for(int i=0;i<n-1;i++) → shifts n-1 elements → O(n)
arr[n-1] = temp; → O(1)
Printing loop → n iterations → O(n)
👉 Total = O(n) + O(n) = O(n)

Space Complexity:
Only one extra variable temp (constant memory).
👉 O(1) space
*/




/*
You’ve already learned rotation by k places (general case) and rotation by 1 place (special case). Let’s compare:

🔹 1. Rotation by 1 place only
Code is very simple (either left or right).
Example (left rotation by 1):

Time: O(n)
Space: O(1)

✅ Pros: Clean, minimal.
❌ Cons: Only works for 1 place. If interviewer changes to k places, you’ll need to rewrite.

🔹 2. Rotation by k places (general algorithm)
(You already know reversal algorithm or temp array method).
Works for any k, including k = 1.

Time: O(n)
Space: O(1) (for reversal method).

✅ Pros: Reusable for all cases (k=1, k=2, k=n-1, etc.).
❌ Cons: Slightly more lines of code, but not much.


🔥 Which should you consider?
For learning basics → study both. It teaches you array shifting logic for 1 place.
For interviews or contests → always use the general k-places algorithm.
Because:
If k=1 → it still works.
If k changes later → no need to change your code.
Shows interviewer that you know the scalable solution.

✅ My recommendation for you (since you’re preparing for placements):
👉 Keep the general k-rotation (reversal algorithm) as your standard solution.
👉 Know the 1-place shift method just for completeness, but you don’t need to prefer it.
*/