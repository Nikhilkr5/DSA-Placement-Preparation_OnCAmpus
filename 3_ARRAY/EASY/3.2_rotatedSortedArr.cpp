//Rotated sorted arrays allow one "drop" where a larger number
//is followed by a smaller number.


/*
1. What is a Rotated Sorted Array?
A rotated sorted array is an array that was originally sorted in non-decreasing order, then rotated (shifted) around some pivot.

Example:
Original sorted: [1, 2, 3, 4, 5]
Rotate by 2 → [3, 4, 5, 1, 2] ✅ (still rotated sorted)

The array may also have duplicates:
Original: [1, 2, 2, 3, 4]
Rotate by 3 → [2, 3, 4, 1, 2] ✅

🔹 2. How to Recognize It?
In a rotated sorted array:
You’ll find at most one “drop” where nums[i] > nums[i+1].
If there’s more than one drop, then it’s not a rotated sorted array.

Example checks:
[3,4,5,1,2] → drops: 5 > 1 → ✅ rotated sorted
[1,2,3] → no drops → ✅ sorted (rotation by 0)
[2,1,3,4] → drops: 2 > 1 and 4 > 2 (wrap) → ❌ not rotated sorted

🔹 3. C++ Code to Check
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int drops = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                drops++;
            }
            if (drops > 1) return false;
        }
        return true;
    }
};
*/