//Remove Duplicates in-place from Sorted Array

//Solution 1: Brute Force

//Intuition: We have to think of a data structure that does not store duplicate elements. 
//So can we use a Hash set? Yes! We can. As we know HashSet only stores unique elements.

/*
Approach: 
Declare a HashSet.
Run a for loop from starting to the end.
Put every element of the array in the set.
Store size of the set in a variable K.
Now put all elements of the set in the array from the starting of the array.
Return K.
*/
/*
you are using std::set, not a hash set.
🔹 Difference in your context
std::set
Implemented as a balanced binary search tree (Red-Black Tree).
Keeps elements sorted automatically.
Operations: insert, erase, find take O(log n) time.
std::unordered_set (hash set)
Implemented as a hash table.
Stores elements in no particular order.
Operations: insert, erase, find take O(1) average time (but O(n) in worst case if too many collisions).
*/

//dimaag ka keeda ka question:
//Yes 👍 you can rearrange elements in an int arr[] (raw array) in C++.

#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(int arr[],int n){
    set<int>set;
    for(int i=0;i<n;i++){
        set.insert(arr[i]);
    }
    //int k=sizeof(s);
/*
s is a std::set<int>.
sizeof(s) gives you the size in bytes of the set object in memory, not the number of elements in it.
That’s why this will not work correctly.
*/

    int k=set.size();
    int j=0;
    // for(int x:s){
    //     arr[j]=x;
    //     j++;
    // }
    for(int x:set)
        arr[j++]=x;
    return k;
}


int main(){
    int arr[] ={1,1,2,2,2,2,3,3};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k= removeDuplicates(arr,n);
    cout<<"The array after removing duplicate elements is :" <<endl;
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
}

/*
Step-by-Step Complexity
Step 1: Insert all elements into set

std::set is implemented as a balanced BST (Red-Black Tree).
Each s.insert(arr[i]) costs O(log m), where m = current size of the set.
Since you do this n times:
O(n log n) (worst and average case for std::set, because it’s a balanced BST).

Step 2: Copy back into array
Loop runs once for each unique element k = s.size().
Copy is O(k).
But k ≤ n, so O(n) in worst case.

Total Time Complexity
O(n log n) + O(n) = O(n log n)


✅ Dominant term is O(n log n).
🔹 Space Complexity

set<int> s stores up to n unique elements → O(n) extra space.
The array arr[] is given (not extra).
A few integer variables (k, j) → O(1).
Total Space Complexity:O(n)
*/

/*
Time Complexity: O(n log n)
Space Complexity: O(n)*/

/*
ChatGPT said:
Great question 👍 let’s carefully see why it becomes O(n log n) in your code.
🔹 Key fact about std::set
std::set in C++ is implemented as a balanced binary search tree (red-black tree).
When you insert an element, the tree has to:
Find the correct position (search cost = O(log m), where m is the current size).
Maintain balance of the tree (also O(log m)).
So each insert = O(log m).
🔹 In your code
for (int i = 0; i < n; i++) {
    set.insert(arr[i]);
}

You call insert n times.
Each insert costs at most O(log n) (since the tree can grow up to size n).
So total:
n * O(log n) = O(n log n)
*/




//Solution 2: Two pointers

/*
Intuition: We can think of using two pointers ‘i’ and ‘j’, we move ‘j’ till we
don't get a number arr[j] which is different from arr[i]. As we got a unique 
number we will increase the i pointer and update its value by arr[j]. 
*/


#include<bits/stdc++.h>

using namespace std;
int removeDuplicates(int arr[], int n)
{
  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}
int main() {
  int arr[] = {1,1,2,2,2,3,3};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = removeDuplicates(arr, n);
  cout << "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }
}

//Time Complexity: O(N)
//Space Complexity: O(1)

/*
🔹 Time Complexity:
The for loop runs from j = 1 to j = n-1.
That’s n-1 iterations → O(n).
Inside the loop, only constant time operations (if check,
 increment, assignment).
✅ Total Time Complexity = O(n)

🔹 Space Complexity:-
Uses only two integer variables (i and j).
No extra data structure is created.
The array is modified in-place.
✅ Total Space Complexity = O(1)
*/