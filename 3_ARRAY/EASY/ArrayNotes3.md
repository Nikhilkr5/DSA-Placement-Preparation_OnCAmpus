/*
    📘 C++ Arrays vs Vectors – Quick Notes
    --------------------------------------

    🔹 1. Raw Arrays (int arr[])
       - Fixed size (cannot add/remove elements).
       - Size must be known at compile time or when declared.
       - Example:
            int arr[] = {1, 2, 3, 4, 5};  // size = 5
            arr[2] = 10;   // ✅ modify element
            arr[5] = 6;    // ❌ invalid (out of bounds)

    🔹 2. Dynamic Arrays (new int[n])
       - Size decided at runtime, but still fixed after allocation.
       - Cannot resize directly.
       - Example:
            int n = 5;
            int* arr = new int[n];
            arr[0] = 1; arr[1] = 2;
            
        // To "resize", you must:
        // 1. Allocate a new array
        // 2. Copy old elements
        // 3. Delete old array
            delete[] arr;

    🔹 3. std::vector<int>
       - Resizable dynamic array (preferred in modern C++).
       - Provides built-in functions to add/remove elements.
       - Example:
            #include <vector>
            using namespace std;

            vector<int> arr = {1, 2, 3, 4, 5};

            arr.push_back(6);        // ✅ add element at end
            arr.pop_back();          // ✅ remove last element
            arr.insert(arr.begin()+2, 10); // ✅ insert at index 2
            arr.erase(arr.begin()+3);      // ✅ remove element at index 3

    🔹 Complexity:
       - Raw array: O(1) access, but fixed size.
       - Vector: O(1) access, resizing is amortized O(1).

    ✅ Rule of Thumb:
       - Use std::vector instead of raw arrays for dynamic data.
       - Use raw arrays only in low-level performance-critical code.

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Example: Using vector instead of raw array
    vector<int> arr = {1, 2, 3, 4, 5};

    cout << "Original vector: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    arr.push_back(6);   // Add element
    arr.erase(arr.begin()+2); // Remove 3rd element

    cout << "Modified vector: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
