When we talk about time complexity, which case to consider depends on context:

1. Worst Case

Usually the default complexity we report.

Because it gives an upper bound on runtime → guarantees performance won’t be worse than this.

Example: Your isSorted → O(n²) worst case.

Most textbooks, interviews, and competitive programming problems expect worst-case complexity unless explicitly stated otherwise.

2. Best Case

Considered when we want to highlight early exit behavior.
Example: If the array is unsorted right at the start, your code returns in O(1).
But best case is less useful since it doesn’t reflect typical performance.

3. Average Case

Considered when input is random and we want an expectation.

Harder to compute formally (needs probability distribution assumptions).
In practice, many times average ≈ worst case, unless early exits happen often.

For your code: average ≈ O(n²).
✅ Conclusion for your function isSorted:

Report worst-case: O(n²), space O(1).

You can mention best-case O(1) as an optimization note.