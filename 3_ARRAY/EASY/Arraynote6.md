# 📘 Arrays in Function Parameters — Copy or Pointer?

## 🔹 Are Arrays Passed as Copy or Pointer?
- When you write a function parameter like:
  ```cpp
  void fun(int arr[])
it decays into:


void fun(int* arr)
✅ That means the array is not copied.

Instead, the function gets a pointer to the first element of the original array.

🔹 Proof with sizeof

#include <bits/stdc++.h>
using namespace std;

void fun(int arr[]) {
    cout << "Inside function: sizeof(arr) = " << sizeof(arr) << endl;
}

int main() {
    int arr[10];
    cout << "In main: sizeof(arr) = " << sizeof(arr) << endl;
    fun(arr);
}
Output (on 64-bit system):

csharp
Copy code
In main: sizeof(arr) = 40     // 10 * 4 bytes (int = 4)
Inside function: sizeof(arr) = 8   // pointer size
👉 Inside the function, arr is just a pointer.

🔹 Consequences
Arrays lose size information when passed to a function → you must pass n separately.

Any change inside the function modifies the original array:


void fun(int arr[], int n) {
    arr[0] = 100;  // modifies original
}


🔹 Key Rule of Thumb
int arr[] → decays to pointer (int*) inside functions.

std::vector<T> or std::array<T,N> → normal behavior:

Copy if passed by value

Original modified only if passed by reference (&).

✅ Conclusion:
Arrays in function parameters are pointers to the original array, not copies.