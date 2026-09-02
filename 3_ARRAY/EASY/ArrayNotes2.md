# 📘 sizeof(arr)/sizeof(arr[0]) in C++

## 🔎 What does it mean?
In C++, when you declare a static array:
```cpp
int arr[] = {1, 2, 4, 6, 7, 5};

The compiler does not store the number of elements.
It only knows the total memory allocated.

So to find the number of elements:
int n = sizeof(arr) / sizeof(arr[0]);

Step-by-step Breakdown:

1) sizeof(arr)
Gives the total size in bytes.
Example: If 6 integers, each 4 bytes → 6 * 4 = 24.

2) sizeof(arr[0])
Size of one element in the array.
Example: First element (arr[0]) is an int → 4.

3) Division → Number of elements
n = sizeof(arr) / sizeof(arr[0]); // 24 / 4 = 6

Why use this trick?
Works for static arrays declared in the same scope.
Avoids hardcoding size (e.g., writing int n = 6;).

Limitations

When you pass an array to a function:

void func(int arr[]) { cout << sizeof(arr); }


Here, arr decays into a pointer.
sizeof(arr) will give the pointer size (4 or 8 bytes), not the full array size.

👉 That’s why we pass n separately to functions:

void func(int arr[], int n) { ... }

📝 Quick Recap

Inside main():

int arr[] = {1,2,3,4};
int n = sizeof(arr)/sizeof(arr[0]); // n = 4


Inside function (passed array):

void f(int arr[], int n) { ... } // must pass n


✅ Use this trick to quickly calculate the number of elements in an array when working in main() or same scope.
✅ In functions, always pass n explicitly.