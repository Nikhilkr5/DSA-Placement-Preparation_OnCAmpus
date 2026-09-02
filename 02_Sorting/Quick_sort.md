# QuickSort - DSA Notes

## 1️⃣ Concept
- QuickSort is a **divide and conquer** sorting algorithm.
- Steps:
  1. Pick a **pivot**.
  2. Partition array: elements ≤ pivot left, > pivot right.
  3. Recursively sort left and right subarrays.

---

## 2️⃣ Partition Schemes
### Hoare Partition (used in code)
- Pivot = first element.
- Two pointers `i` (left) & `j` (right).
- Move `i` right until arr[i] > pivot.
- Move `j` left until arr[j] ≤ pivot.
- Swap arr[i] & arr[j] if i < j.
- Swap pivot with arr[j] at end.
- Returns **pivot index**.

### Lomuto Partition
- Pivot = last element.
- Pointer `i` tracks smaller elements.
- Swap smaller elements with `i`.
- Swap pivot with `i` at the end.
- Simpler but slower than Hoare.

---

## 3️⃣ Time Complexity
| Case           | Work per level | Levels       | Total Time |
|----------------|----------------|--------------|------------|
| Best Case      | O(n)           | log n        | O(n log n) |
| Average Case   | O(n)           | ~log n       | O(n log n) |
| Worst Case     | O(n)           | n            | O(n²)      |

**Reason:**  
- Best/Average → balanced splits → recursion tree height ≈ log n  
- Worst → unbalanced splits → recursion tree height = n  

---

## 4️⃣ Space Complexity
- In-place → extra array **O(1)**
- Recursion stack:
  - Best/Average → O(log n)
  - Worst → O(n)

---

## 5️⃣ Dry Run Example
Array: `[4, 6, 2, 5, 7, 9, 1, 3]`  
Pivot = 4

**Partition Steps:**
1. i moves right to first > 4 → arr[1]=6  
2. j moves left to first ≤ 4 → arr[7]=3  
3. Swap → `[4,3,2,5,7,9,1,6]`  
4. Repeat until i ≥ j  
5. Swap pivot with arr[j] → `[1,3,2,4,7,9,5,6]`  

**Pivot final index:** 3  
- Left: `[1,3,2]`  
- Right: `[7,9,5,6]`  

---

## 6️⃣ Recursion Tree Height
- **Best:** log n → balanced splits  
- **Average:** ~log n → almost balanced  
- **Worst:** n → highly unbalanced  

---

## 7️⃣ Key Tips
- Pivot choice affects performance:
  - First element → risk of worst case on sorted array
  - Random pivot → safer, avoids worst-case
- Small arrays → use Insertion Sort for efficiency
- Understand **Hoare vs Lomuto** partition differences
- Practice dry runs for clarity

---

## 8️⃣ References
- [GeeksforGeeks - QuickSort](https://www.geeksforgeeks.org/quick-sort/)
- [Striver A2Z DSA Sheet](https://takeuforward.org/data-structure/strivers-a2z-dsa-sheet/)



# QuickSort - Time & Space Complexity

## 1️⃣ Time Complexity

### Partitioning Work
- Partition scans **all elements once** → O(n) per partition.

### Number of Levels (Recursion Tree)
- Depends on **pivot choice**:

| Case           | Pivot Split                    | Height of Tree | Total Work (Time Complexity) |
|----------------|--------------------------------|----------------|-----------------------------|
| Best Case      | Perfectly balanced halves      | log n          | O(n log n)                  |
| Average Case   | Random / roughly balanced      | ~log n         | O(n log n)                  |
| Worst Case     | Always smallest/largest pivot  | n              | O(n²)                       |

### Explanation:
1. **Best/Average:** Each level does O(n) work (partitioning) × number of levels (log n) → **O(n log n)**  
2. **Worst:** Each level does O(n) work × n levels (highly unbalanced) → **O(n²)**  

---

## 2️⃣ Space Complexity

| Component                   | Best / Average | Worst Case       |
|------------------------------|----------------|----------------|
| Extra array / In-place       | O(1)           | O(1)           |
| Recursion stack              | O(log n)       | O(n)           |
| **Total Space**              | O(log n)       | O(n)           |

### Explanation:
- QuickSort is **in-place** → only recursion uses extra memory.
- Best case: balanced recursion → stack height = log n  
- Worst case: unbalanced recursion → stack height = n  

---

## 3️⃣ Summary Formulas
- **Time Complexity:**  

T(n) = T(k) + T(n-k-1) + O(n)


- `k` = pivot position  
- O(n) = partition work
- Best / Average: k ≈ n/2 → T(n) = 2T(n/2) + n → O(n log n)  
- Worst: k = 0 or n-1 → T(n) = T(n-1) + n → O(n²)

- **Space Complexity:** O(log n) for recursion (best/average), O(n) worst.

---

## 4️⃣ Quick Memory Tricks
1. **“Balanced pivot → log n levels → n log n”**  
2. **“Pivot always min/max → n levels → n²”**  
3. **“In-place → O(1) array + recursion stack”**  
4. Always remember: **partitioning is O(n)**, recursion depth decides total complexity.

