/*
=================== Sorting Algorithms Cheat Sheet ===================

1. When to use which sort in coding rounds / competitive programming:

Algorithm        | When to Use / Notes
--------------------------------------------------------------
Bubble Sort      | Rarely used, only for tiny arrays (educational)
Selection Sort   | Rarely used, O(N^2), minimum swaps but slow
Insertion Sort   | Good for small or nearly sorted arrays (N ≤ 1000)
Merge Sort       | Often used, O(N log N), stable, works for large arrays
Quick Sort       | Often used, O(N log N) average, usually faster than Merge Sort
Heap Sort        | Sometimes, in-place, O(N log N), not stable
Library Sort     | Preferred in contests (sort() in C++, Arrays.sort() in Java, sorted() in Python), highly optimized

2. Quick Guidelines:
- For small arrays (≤1000 elements) or nearly sorted → Insertion Sort
- For large arrays → Use built-in sort() or O(N log N) algorithms
- Need stable sort → Merge Sort or library sort
- Almost never implement Bubble or Selection Sort in contests

3. VS Code Quick Reference:
```cpp
// N ≤ 1000 -> Insertion Sort (O(N²)) is fine
// N > 1000 -> Use sort() or other O(N log N) algorithms
// Library sort is fastest and safest in contests

*/




//one line me baat :

// Sorting Cheat: N≤1000 -> Insertion Sort (O(N²)), N>1000 -> use sort()/Merge/Quick Sort, stable needed -> Merge/Library sort, avoid Bubble/Selection in contests
