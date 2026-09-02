# 📘 Rotated Sorted Array — Notes

## 🔹 1. What is a Rotated Sorted Array?
- An array that was originally **sorted in non-decreasing order** and then **rotated** (shifted around a pivot).
- Example:

Original: [1, 2, 3, 4, 5]
Rotate by 2 → [3, 4, 5, 1, 2] ✅

- Duplicates are allowed:
Original: [1, 2, 2, 3, 4]
Rotate by 3 → [2, 3, 4, 1, 2] ✅


---

## 🔹 2. How to Recognize a Rotated Sorted Array?
- There can be **at most one "drop"** → a place where `nums[i] > nums[i+1]`.
- If more than one drop exists, the array is **not** rotated sorted.

✅ Examples:
- `[3,4,5,1,2]` → drop at `5 > 1` → rotated sorted  
- `[1,2,3]` → no drop → sorted (rotation by 0)  
- `[2,1,3,4]` → drops at `2 > 1` and `4 > 2 (wrap)` → not rotated sorted  

---

## 🔹 3. C++ Code to Check

```cpp
class Solution {
public:
  bool check(vector<int>& nums) {
      int n = nums.size();
      int drops = 0;

      for (int i = 0; i < n; i++) {
          if (nums[i] > nums[(i + 1) % n]) { // circular check
              drops++;
          }
          if (drops > 1) return false; // more than one drop → not rotated sorted
      }

      return true;
  }
};

🔹 4. Why [2,1,3,4] is NOT Rotated Sorted?

Array: [2,1,3,4]

Compare 2 > 1 → drop #1

Compare 1 < 3 → ok

Compare 3 < 4 → ok

Compare 4 > 2 (wrap) → drop #2

👉 Two drops → ❌ not rotated sorted.

🔹 5. Complexity

Time: O(n)

Space: O(1)

⚡ Rule of Thumb

0 drops → already sorted ✅

1 drop → rotated sorted ✅

>1 drops → not rotated sorted ❌