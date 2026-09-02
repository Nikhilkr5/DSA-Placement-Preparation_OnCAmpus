📌 Difference

vector<int> v (pass by value)

A copy of the vector is created when you call the function.

Any modifications inside the function don’t affect the original vector.

Extra time + memory is used for copying (O(n)).

vector<int> &v (pass by reference)

No copy is made.

The function works directly on the original vector.

More efficient (O(1) overhead).

Changes inside the function do affect the original vector.

📌 Why does your code work without &?

Because inside the function, you never modify v in a way that needs to reflect back in main.
So, correctness is unaffected whether you pass by value or by reference.

But:

Without & → less efficient (makes a copy of the whole vector).

With & → more efficient (no copying).

✅ Best Practice

For large containers like vector, always prefer passing by reference if you don’t need a copy:

int majorityElement(const vector<int> &v)


(adding const ensures the function won’t accidentally modify v).

👉 Do you want me to rewrite your code with const & and highlight how it improves efficiency?