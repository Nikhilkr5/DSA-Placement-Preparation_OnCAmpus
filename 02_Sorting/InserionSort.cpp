#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp= arr[j-1];
            arr[j-1] = arr[j];
            arr[j]=temp;
            j--;
        }
    }

    cout<<"After Using insertin sort: "<<"\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    int arr[] = {13,4624,52,20,9};
    int n= sizeof(arr)/ sizeof(arr[0]);
    cout<<"Before using insertion sort: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    insertion_sort(arr, n);
    return 0;

}


/*
Notes

Outer loop: picks each element to insert.

Inner loop: shifts elements in the sorted portion until the current element reaches the right position.

Time Complexity:

Best case (already sorted): O(N)

Worst case (reverse sorted): O(N²)

Space Complexity: O(1) → in-place sorting
*/


/*
Time complexity: O(N2), (where N = size of the array), for the worst, and average cases.
Reason: If we carefully observe, we can notice that the outer loop, say i, is running from 0 to n-1 i.e. n times, and for each i, the inner loop j runs from i to 1 i.e. i times. For, i = 1, the inner loop runs 1 time, for i = 2, the inner loop runs 2 times, and so on. So, the total steps will be approximately the following: 1 + 2 + 3 +......+ (n-2) + (n-1). The summation is approximately the sum of the first n natural numbers i.e. (n*(n+1))/2. The precise time complexity will be O(n2/2 + n/2). Previously, we have learned that we can ignore the lower values as well as the constant coefficients. So, the time complexity is O(n2). Here the value of n is N i.e. the size of the array.

Space Complexity: O(1)
*/


/*
Note:

/*
=================== Sorting Algorithms Comparison ===================

Algorithm        | Best Case Time | Average Case Time | Worst Case Time | Space Complexity | Stability | Notes
---------------------------------------------------------------------------------------------------------------
Bubble Sort      | O(N)           | O(N^2)           | O(N^2)          | O(1)             | Stable    | Can be optimized to stop early if no swaps in a pass
Selection Sort   | O(N^2)         | O(N^2)           | O(N^2)          | O(1)             | Not stable| Always performs n*(n-1)/2 comparisons; minimum swaps
Insertion Sort   | O(N)           | O(N^2)           | O(N^2)          | O(1)             | Stable    | Efficient for nearly sorted arrays; shifts instead of swapping repeatedly

Key Points:
1. Bubble Sort is slightly better than Selection Sort for nearly sorted arrays.
2. Selection Sort performs minimum swaps but is not stable.
3. Insertion Sort is best for small or nearly sorted arrays.
4. All three are in-place sorting algorithms (O(1) space).
*/







