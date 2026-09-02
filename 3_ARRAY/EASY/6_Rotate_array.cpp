//Rotate array by k elements
//brute force approach: -
//for Rotating the elements to right

// #include<iostream>
// using namespace std;

// void Rotatetoright(int arr[], int n; int k)
// {
//     if(n==0)
//         return;

//     k= k%n;

//     int temp[k];
//     for(int i=n-k;i<n;i++){
//         temp[i-n+k] =arr[i];
//     }

//     for(int i=n-k-1;i>=0;i--){
//         arr[i+k]=arr[i];
//     }

//     for(int i=0;i<n;i++){
//         arr[i]=temp[i];
//     }   
// }

// int main(){
//     int n=7;
//     int arr[] ={1,2,3,4,5,6,7};
//     int k=2;
//     Rotatetoright(arr,n,k);
//     cout<<"After Rotating the elements to right "<< endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";

//     }
//     return 0;

// }
/*
Time Complexity: 
        k = k % n; → constant time → O(1)
  - Copy last k elements -> O(k)≈ O(n)
  - Shift remaining (n-k) elements -> O(n-k)
  - Copy temp back :  Runs k times-> O(k)

  O(k) + O(n-k) + O(k) = O(n + k) 
Since k ≤ n (because of k = k % n),
👉 Time Complexity = O(n)
 

Space Complexity: O(k) 
  - Extra temp array of size k


 temp[k] array is created.
Needs extra space proportional to k.
So O(k) space.
No other extra space used (everything is in-place shifts).
👉 Space Complexity = O(k)
In worst case (k = n-1), space = O(n).


*/


//for Rotating Elements to left

// #include<bits/stdc++.h>
// using namespace std;

// void Rotatetoleft(int arr[],int n,int k){
//     if(n==0) return;
//     k=k%n;
//     if (k == 0) return; // no rotation needed
//     int temp[k];

//     for(int i=0;i<k;i++){
//         temp[i]=arr[i];
//     }

//     for(int i=k;i<n;i++){
//         arr[i-k]=arr[i];    
//     }
//     /* or can writelike this both same
//     for (int i = 0; i < n - k; i++)
//     {
//         arr[i] = arr[i + k];
//     }
//     */



//     for (int i = 0; i < k; i++) {
//         arr[n - k + i] = temp[i];
//     }

//     /* or can be written like this alsobut uppper one is clear
//     for (int i = n - k; i < n; i++)
//     {
//         arr[i] = temp[i - n + k];
//     }
//     */


// }

// int main(){
//     int n=7;
//     int arr[] ={1,2,3,4,5,6,7};
//     int k=2;
//     Rotatetoleft(arr,n,k);
//     cout<<"After Rotating the elements to left "<< endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

/*

// Time Complexity: 
Edge cases:
if(n==0) return;
k=k%n;
if (k == 0) return;

Constant time → O(1)


//   - Copy first k elements -> O(k)
//   - Shift remaining (n-k) elements -> O(n-k)
//   - Copy temp back -> O(k)

O(k) + O(n-k) + O(k) = O(n + k)
Since k ≤ n (because of k % n),
👉 Time Complexity = O(n)
//   
//
// Space Complexity: O(k) 
//   - Extra temp array of size k

Uses a temporary array temp[k].
So extra space = O(k).
In worst case (k = n-1), that’s O(n).
*/




//Approach 2: Using ” Reversal Algorithm “


//For Rotating Elements to right

#include<bits/stdc++.h>
using namespace std;
void Reverse(int arr[],int start,int end){
    //Reverse(start,end);
    /*
    You tried to wrap the STL Reverse() inside
     your own Reverse function, but the parameters are mismatched.
Problem:
void Reverse(int arr[],int start,int end){
    Reverse(start,end);
}

std::Reverse from <algorithm> expects iterators, not integers.
Here, you’re passing start and end as integers (indexes).
That’s why it won’t work as expected.
    */
    
    while(start<end){
        int temp =arr[start];
        arr[start]= arr[end];
        arr[end]=temp;
        start++;
        end--;

    }



}

void Rotateeltoright(int arr[],int n,int k){


    if(n==0) return;   // Edge case: empty array
    k=k%n;                  // Handle k > n
    if(k==0) return;        // No rotation needed

    // Reverse first n-k elements
  Reverse(arr, 0, n - k - 1);
  // Reverse last k elements
  Reverse(arr, n - k, n - 1);
  // Reverse whole array
  Reverse(arr, 0, n - 1);


    
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;
    Rotateeltoright(arr,n,k);

    cout<<"The rotated array:  "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;   
    return 0;

}



/*
to Reverse the array part
Option 1: Use manual swap logic (like earlier):
void Reverse(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

✅ Option 2: Use STL Reverse directly:

You don’t even need a custom Reverse function — just call:

Reverse(arr, arr + (n-k));       // Reverse first n-k elements
Reverse(arr + (n-k), arr + n);   // Reverse last k elements
Reverse(arr, arr + n);           // Reverse the whole array

*/
/*
🔎 Time Complexity:
In Rotateeletoright:
Reverse(arr, 0, n - k - 1) → Reverses n-k elements → O(n-k) 
Reverse(arr, n - k, n - 1) → Reverses k elements → O(k)
Reverse(arr, 0, n - 1) → Reverses n elements → O(n)

So total = O(n-k) + O(k) + O(n) = O(2n) ≈ O(n)
👉 Time Complexity = O(n)

💾 Space Complexity:
Only uses a few temporary variables (temp, start, end) in the Reverse function.
No extra arrays or data structures.
👉 Space Complexity = O(1)
*/

/*
In your code, you wrote your own Reverse function. But in C++, the STL already has Reverse in <algorithm>.

Case 1: Using your own Reverse
Reverse(arr, 0, n-k-1);
This works because you defined a function that swaps elements manually.
Here, Reverse expects indices (start, end) and uses them to swap values.

Case 2: Using STL Reverse
If you don’t create your own function, then you must use std::Reverse, but it needs iterators, not indices.
So you must write:

Reverse(arr, arr + (n - k));        // Reverse first n-k elements
Reverse(arr + (n - k), arr + n);    // Reverse last k elements
Reverse(arr, arr + n);              // Reverse whole array
the last parameter in reverse is exclusive.



❌ Wrong way
Reverse(arr, 0, n-k-1);  // ❌ Won’t compile
Because STL Reverse expects two iterators, not three parameters with indices.
✅ Conclusion:
If you use your custom Reverse → pass indices.
If you use STL Reverse → pass iterators like arr and arr+n.
*/




// OR




#include<iostream>
using namespace std;

void Reverse(int arr[],int start,int end){
    // while(start<=end)   //does one extra self-swap of iddle element (harmless but redundant).
    // {
    while(start<end) {      //avoids that last unnecessary operation.
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        // start++;
        // end--;


        swap(arr[start],arr[end]);
        start++;
        end--;
    }



}
void Rotateeltoleft(int arr[],int n,int k){
    Reverse(arr,0,k-1);
    Reverse(arr,k,n-1);
    Reverse(arr,0,n-1);
}


int main(){
    int arr[] ={1,2,3,4,5,6,7};
    int n=7;
    int k=2;
    Rotateeltoleft(arr,n,k);
    cout<<"After Rotating the k elementd to left ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;

}

/*
Time Complexity:
Each Reverse runs in O(m) where m is the number of elements being reversed.
First reverse: k elements → O(k)
Second reverse: n-k elements → O(n-k)
Third reverse: n elements → O(n)

👉 Total = O(k + (n-k) + n) = O(2n) = O(n)

Space Complexity:
Uses only a constant number of variables (start, end, swaps).
👉 O(1) extra space.
*/

/*
👍 You’ve actually shown three different implementations of reversing inside rotation:
Using std::reverse (STL)
Using custom Reverse with while (start <= end)
Using custom Reverse with while (start < end) (optimized)
Let’s analyze time and space complexity for each:

1. Using std::reverse:
Time Complexity:
Each call to std::reverse runs in O(m), where m is the number of elements in that segment.
→ O(k) + O(n-k) + O(n) = O(2n) = O(n)

Space Complexity:
std::reverse is implemented with swaps, no extra arrays.
→ O(1)


2. Custom Reverse with while (start < end)       //using swap 
Time Complexity:
Still O(n). But avoids that redundant self-swap.
→ Strictly fewer operations than case 2.
→ O(n)

Space Complexity:
Same as above: O(1)

3. reversing using the manual temp variable swap instead of swap().
Time Complexity:

Each swap takes O(1).
For a segment of length m, you need about m/2 swaps.
Since in rotation we reverse 3 times (O(k) + O(n-k) + O(n)), the total is still O(n).

💾 Space Complexity:

Uses one extra variable (temp).
Constant space → O(1).

*/



/*
kaam ki baatein: which reversing way to use in this?
Options you have:

1.Manual swap with temp:
✅ Pros: Works everywhere, no extra headers, very explicit.
❌ Cons: Slightly longer and repetitive.

2.Using swap():
✅ Pros: Shorter, cleaner, easy to read.
✅ Widely used in competitive programming and interviews.
❌ Requires <algorithm> (but you’re usually including it anyway).

3.Using STL reverse():
✅ Pros: Super concise, no need to write your own Reverse() function.
✅ Most idiomatic in C++.
❌ Slightly less "educational" if you’re practicing basics (since it hides the logic).

🔥 Which one should you use?:

If you’re learning / practicing DSA:
Use manual swap (temp or swap()) → helps you understand array manipulation better.
If you’re writing production/clean C++ code:
Use STL reverse() → more readable, less error-prone, standard practice.

✅ My recommendation:
Practice with manual swap() for interview prep.
Use STL reverse() in real projects or contests for clean code.
*/


//using stl reverse :
//for  left roatation:

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotateLeft(vector<int> & arr, int k){
    int n=arr.size();
    if(n==0) return;

    k=k%n;  //handle k>n
    if(k == 0) return;

    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());

}

int main(){
    vector<int> arr ={1,2,3,4,5,9,10};
    int k=3;

    rotateLeft(arr,k);

    cout<<"Left rotation by "<<k<<" ";
    for(int x: arr) cout<<x<<" ";
    cout<<endl;
}



//right rotation:

#include<bits/stdc++.h>
using namespace std;

void rotateRight(vector <int> arr, int k){
    int n=arr.size();
    if(n==0) return;

    k=k%n;
    if(k==0) return;

    reverse(arr.end()-k,arr.end());
    reverse(arr.begin(),arr.end()-k);
    reverse(arr.begin(),arr.end());



    
}
int main(){
    vector<int> arr ={1,2,3,4,5,9,10};
    int k=3;

    rotateRight(arr,k);

    cout<<"right roatation by: "<<k<<" ";
    for(int x:arr) cout<<x<<" ";
    cout<<endl;
}



//For raw arrays, reverse() works with pointers (arr + start, arr + end). Remember STL reverse(first, last) uses [first, last).
/*
#include <iostream>
#include <algorithm>
using namespace std;

void rotateLeft(int arr[], int n, int k) {
    if (n == 0) return;
    k = k % n;
    if (k == 0) return;

    reverse(arr, arr + k);       // Step 1: reverse first k elements
    reverse(arr + k, arr + n);   // Step 2: reverse remaining n-k elements
    reverse(arr, arr + n);       // Step 3: reverse whole array
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    rotateLeft(arr, n, k);

    cout << "Left rotation by " << k << ": ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}




//for right rotation:
#include <iostream>
#include <algorithm>
using namespace std;

void rotateRight(int arr[], int n, int k) {
    if (n == 0) return;
    k = k % n;
    if (k == 0) return;

    reverse(arr + (n - k), arr + n); // Step 1: reverse last k elements
    reverse(arr, arr + (n - k));     // Step 2: reverse first n-k elements
    reverse(arr, arr + n);           // Step 3: reverse whole array
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    rotateRight(arr, n, k);

    cout << "Right rotation by " << k << ": ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}


*/



