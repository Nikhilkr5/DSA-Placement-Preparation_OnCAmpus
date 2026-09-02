#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2 ;
    mergeSort(arr, low, mid);  // left half
    mergeSort(arr, mid + 1, high); // right half
    merge(arr, low, mid, high);  // merging sorted halves
}

int main() {

    vector<int> arr = {9, 4, 7, 6, 3, 1, 5}  ;
    int n = 7;

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    mergeSort(arr, 0, n - 1);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    return 0 ;
}





/*
Time complexity: O(nlogn) 

Reason: At each step, we divide the whole array, for that logn and we assume n steps are taken to get sorted array, so overall time complexity will be nlogn

Space complexity: O(n)  

Reason: We are using a temporary array to store elements in sorted order.

Auxiliary Space Complexity: O(n)

*/








/*
================ Merge Sort Notes =================

1. Base Case:
   if(low >= high) return;
   - Stops recursion for 1 or 0 elements.

2. Merge Logic:
   - Merge two sorted halves (arr[low..mid] & arr[mid+1..high])
   - Pick smaller element from left/right, store in temp
   - Copy temp back: arr[i] = temp[i-low]

3. Why & (pass by reference):
   - vector<int> &arr avoids copying
   - Modifies original array

4. Time Complexity:
   - Best / Average / Worst: O(N log N)
   - Recurrence: T(N) = 2*T(N/2) + O(N)

5. Space Complexity:
   - O(N) for temporary array
   - Stable sort (equal elements maintain relative order)

6. Notes:
   - Use vector for dynamic temporary storage
   - Works for arrays of any size
*/

