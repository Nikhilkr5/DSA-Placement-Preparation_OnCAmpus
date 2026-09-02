/*
=================== Merge Sort: Base Case Explanation ===================

In Merge Sort, we use:

    if (low >= high) return;

Where:
- low  = starting index of the current subarray
- high = ending index of the current subarray

Key Points:

1. Base Case Purpose:
   - Stops recursion when the subarray has **0 or 1 element** (already sorted).
   - Prevents invalid recursion on empty subarrays.

2. Why low == high:
   - Subarray has 1 element → nothing to sort → return.

3. Why low > high:
   - Can happen during recursion for the “right half” of a single-element subarray.
   - Example:
        arr = [5, 2, 9, 1]
        mergeSort(arr, 0, 0)       // left half of single element
        mergeSort(arr, 1, 0)       // right half → low=1, high=0 → empty subarray
   - Size of subarray = high - low + 1 = 0 → empty → return.

4. Important:
   - This condition **does not depend on element values**.
   - Sorting happens later **during the merge step**, not in this base case.

✅ Takeaway:
- `low >= high` ensures recursion stops correctly for subarrays of size 0 or 1.
- Merge step handles actual sorting and maintains ascending order.
*/






/*
Merge sort revision oncept:

/*
=================== Merge Sort Notes ===================

1. Base Case:
   if (low >= high) return;
   - Stops recursion for subarrays of size 0 or 1.
   - low == high → 1 element, already sorted
   - low > high → empty subarray, nothing to sort

2. Merge Function:
   - Combines two sorted halves (arr[low..mid] and arr[mid+1..high]) into one sorted array.
   - Compare elements of left and right halves:
        if (arr[left] <= arr[right]) pick arr[left] else arr[right]
   - Add remaining elements from left or right if any.
   - Copy merged elements back to original array.

3. How ascending order is achieved:
   - During merge, the smaller element between left and right is always picked first.
   - Element values don’t matter in recursion; sorting occurs only in merge.

4. Complexity:
   - Time Complexity: O(N log N) for all cases
   - Space Complexity: O(N) due to temporary array
   - Stable sort (equal elements maintain relative order)
*/



