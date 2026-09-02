# 📘 Difference between `sizeof()` and `.size()`

---

## 🔹 1. `sizeof(s)` (for `set` or other STL containers)
- Returns the **memory size of the container object in bytes**.
- ❌ Not related to the number of elements.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s = {1, 2, 3};

    cout << "sizeof(s): " << sizeof(s) << endl;
}

Example Output:

sizeof(s): 48   // (implementation dependent, could be 56, 64, etc.)


🔹 2. .size() (for set, vector, etc.)

Returns the number of elements actually stored in the container.

✅ Correct way to count elements in STL containers.

set<int> s = {1, 2, 3};

cout << "s.size(): " << s.size() << endl;


👉 Output:

s.size(): 3

🔹 3. sizeof(arr) / sizeof(arr[0]) (for raw arrays)

Works only for raw arrays (int arr[]).

sizeof(arr) → total memory of array in bytes.

sizeof(arr[0]) → memory of a single element.

Division = number of elements in the array.

int arr[] = {10, 20, 30, 40, 50};
int n = sizeof(arr) / sizeof(arr[0]);

cout << "Number of elements in arr: " << n << endl;


👉 Output:

Number of elements in arr: 5



| Expression                   | Works For     | Meaning                               |
| ---------------------------- | ------------- | ------------------------------------- |
| `sizeof(s)`                  | `set` object  | Memory size of set object (bytes) ❌   |
| `s.size()`                   | `set`, vector | Number of elements in the container ✅ |
| `sizeof(arr)/sizeof(arr[0])` | raw array     | Number of elements in the array ✅     |
