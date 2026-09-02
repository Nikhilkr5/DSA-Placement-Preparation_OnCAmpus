a learning note comparing std::set vs std::unordered_set (hash set) in C++.


# 📘 C++ `set` vs `unordered_set` (Hash Set)

---

## 🔹 1. `std::set`
- Implemented as a **balanced binary search tree** (usually Red-Black Tree).
- Stores **unique, sorted** elements.
- Ordered traversal (elements come out in ascending order).
- Operations:
  - Insertion: **O(log n)**
  - Deletion: **O(log n)**
  - Search: **O(log n)**

```cpp
#include <set>
using namespace std;

set<int> s;
s.insert(10);
s.insert(5);
s.insert(20);

for (int x : s) cout << x << " ";  
// Output: 5 10 20  (sorted)



🔹 2. std::unordered_set

Implemented as a hash table.
Stores unique, unordered elements.
No guaranteed order when iterating.
Operations (average case):
Insertion: O(1)
Deletion: O(1)
Search: O(1)
Worst case (if many collisions): O(n)

#include <unordered_set>
using namespace std;

unordered_set<int> us;
us.insert(10);
us.insert(5);
us.insert(20);

for (int x : us) cout << x << " ";  
// Output: order is unpredictable


# 📘 C++ `set` vs `unordered_set` (Hash Set)

| Feature             | `std::set` (Tree Set)         | `std::unordered_set` (Hash Set) |
|---------------------|--------------------------------|----------------------------------|
| **Order**           | Elements stored in **sorted order** | Elements stored in **no particular order** |
| **Duplicates**      | ❌ Not allowed                | ❌ Not allowed                   |
| **Underlying DS**   | Balanced BST (Red-Black Tree) | Hash Table                       |
| **Insertion**       | O(log n)                      | O(1) average, O(n) worst         |
| **Search**          | O(log n)                      | O(1) average, O(n) worst         |
| **Deletion**        | O(log n)                      | O(1) average, O(n) worst         |
| **Iteration speed** | Slower (tree traversal)        | Faster (direct hash bucket access) |
| **Memory usage**    | Less (tree overhead)           | More (hash buckets)              |
| **Best Use Case**   | When you need **sorted data** or order-based traversal | When you need **fast lookups/inserts** and don’t care about order |


What is a Hash Set?
A Hash Set is a data structure that:
Stores unique elements only (no duplicates).
Uses a hashing function to decide where each element goes.
Provides fast average-time operations for insert, delete, and search.

🔹 How does it work?
Elements are placed into buckets based on their hash value.
Each element’s position is calculated using a hash function (like h(x) = x % N).
If two elements map to the same bucket (a collision), they are stored in a small list inside that bucket.
Lookup checks the bucket directly, instead of searching the whole collection.

🔹 In C++: std::unordered_set
Implemented as a hash table.
Stores only unique keys (like set, but unordered).
Provides O(1) average time for insert, delete, and search.
Worst-case time (if many collisions) = O(n).