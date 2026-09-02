//Brute force

// #include<bits/stdc++.h>
// using namespace std;

// int sortArr(vector<int>& arr){
//     sort(arr.begin(),arr.end());
//     return arr[arr.size()-1]; 
// }

// int main(){
//     vector<int> arr1 ={2,5,1,3,0};
//     vector<int> arr2 ={8,10,5,7,9};

//     cout<<"The Largest elememnt in the array is: "<<sortArr(arr1)<<endl;
//     cout<<"The Largest element in the array is: "<<sortArr(arr2);

//     return 0;
// }





/*
Time Complexity:

Sorting with std::sort
Uses Introsort (QuickSort + HeapSort + InsertionSort).
Average & Worst Case: O(n log n)
Accessing last element
Index access in vector is constant time: O(1)
✅ Overall Time Complexity: O(n log n)
*/


/*
Space Complexity:

std::sort
Works in-place (no extra array).
Uses recursion stack space: O(log n)
Accessing element
Constant space: O(1)

✅ Overall Space Complexity: O(log n)
*/

/*
Key Takeaways:
Sorting is not needed when only the largest element is required.
Use a single traversal for maximum → O(n) time, O(1) space.
Always think: Do I need the whole array sorted, or just one value?
*/

/*
Time Complexity: O(NlogN)
The dominant operation in your sortArr function is the std::sort() function.
sort(arr.begin(), arr.end()): This line sorts the entire vector. The standard implementation for std::sort in C++ is Introsort 
(a hybrid of Quicksort, Heapsort, and Insertion Sort). Its average and worst-case time complexity is O(NlogN), where N is the number of elements in the vector.
return arr[arr.size()-1]: Accessing an element in a vector by its index is a constant time operation, O(1).

Since the sorting step is much slower than the access step, it determines the overall time complexity of the function. Therefore, the total time complexity is O(NlogN).

Space Complexity: O(logN)
The space complexity analysis considers the extra space used by the algorithm, not including the input array itself.
Pass by Reference (vector<int>& arr): You are passing the vector by reference. This is very efficient because it avoids creating 
a new copy of the vector. The function works directly on the original arr1 and arr2 from main().
std::sort() Space: The Introsort algorithm used by std::sort is not fully in-place. It requires a small amount of extra 
space for its recursion stack. The maximum depth of this stack is proportional to 
logN.

Therefore, the auxiliary space complexity is O(logN).

*/

//Better Approach 💡
//While your code works correctly, it's inefficient for just finding the largest element. Sorting the entire array (O(NlogN))
// is overkill when a simple linear scan can achieve the same result in O(N) time and O(1) space.

//below we will be learning two approaces ; both have same time and space complex
//after learning i will tell which to consider

//Recursive Approach:

//Using a max variable and looping


// #include<bits/stdc++.h>
// using namespace std;
// int findLargestElement(int arr[], int n){
//     int maxm =arr[0];
//     for(int i=1;i<n;i++){
//         if(maxm<arr[i]){
//             maxm = arr[i];
//         }
//     }
//     return max;
// }

// int main(){
//     int arr1[] ={2,5,1,3,0};
//     int n=5;
//     int maxm = findLargestElement(arr1,n);
//     cout<<"The largest Element i the array is: "<<maxm<<endl;

//     int arr2[]={8,10,5,7,9};
//     n=5;
//     maxm= findLargestElement(arr2,n);
//     cout<<"The largest element in the array is: "<<maxm<<endl;
//     return 0;
// }



/*
Complexity Analysis:
Time Complexity: O(N)
Space Complexity: O(1)
*/

/*
1️⃣ Time Complexity:
The function traverses the array once of size n.
Each element is compared once with max.

Time Complexity=O(n)

For both arr1 and arr2, the complexity is O(n) for each call.
Best, Worst, Average Case:
All are O(n) because every element must be checked to ensure we find the maximum.

2️⃣ Space Complexity:

Variables used: max (single integer) → O(1) auxiliary space.
No extra arrays or recursion are used.
✅ Auxiliary Space: O(1)
The input array itself is already stored in memory. If you count total space, including input: O(n).
*/




//STL approach max_element:

#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int>& arr){
    return *max_element(arr.begin(),arr.end());
}

int main(){
    vector<int> arr1 ={2,5,1,3,0};
    vector<int> arr2 = {8,10,5,7,9};

    cout<<"The Largest element is: "<<findMax(arr1)<<endl;
    cout<<"The Largest element is: "<<findMax(arr2)<<endl;

    return 0;
}
/*

std::max_element returns an iterator, not the actual value.

So if you return it directly as int, you will get the memory address interpreted as int, which is incorrect.
*/

//time comp:O(N)
//space comp: O(1) 




/*
Both methods are linear time and constant space.

std::max_element is more modern C++ style, cleaner, and easier to maintain.
*/


/*
For this specific task, both methods have the same high-performance efficiency. They both scan through the list once.
However, the STL approach (std::max_element with std::vector) is superior in every other aspect:
Safety: It prevents common errors related to manual size tracking.
Clarity: It clearly communicates its purpose without needing you to analyze a loop's logic.
Maintainability: Less code means fewer places for bugs to hide. 

The first example (the manual loop) is excellent for learning how algorithms work. But for writing robust, modern, and professional C++ code, you should almost always prefer using the standard library's well-tested and efficient algorithms.
*/