//Brute forcs

#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[i])
        return false;
    }
  }

  return true;
}

int main() {

  int arr[] = {1, 2, 3, 4, 5}, n = 5;
  bool ans = isSorted(arr, n);
  if (ans) cout << "True" << endl;
  else cout << "False" << endl;
  return 0;
}
/*
Final Complexity Analysis:
Time Complexity:
Best case: O(1)
Worst case: O(n²)

Average case: O(n²)
Space Complexity: O(1)
*/

/*
Time Complexity:
Outer loop runs n times.
Inner loop runs (n - i - 1) times for each i.

Total comparisons in the worst case (when array is sorted):
    (n−1)+(n−2)+(n−3)+⋯+1=(n(n−1))/2​

That’s O(n²) in the worst case.
👉 In the best case (when the array is unsorted early, e.g., first pair fails), the function returns false immediately. That’s O(1).
So:
Best case: O(1)
Worst case: O(n²)
Average case: O(n²)
Space Complexity:
No extra data structures used.
Just a few variables → O(1) auxiliary space.
*/





//Optimal Approach:

#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n) {


  //or
  //for(int i=0;i<n-1;i++)
  //{
  //if(arr[i]>arr[i+1])
  //  return false;
  //}
  for (int i = 1; i < n; i++) {
    if (arr[i] < arr[i - 1])
      return false;
  }

  return true;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5}, n = 5;
  printf("%s", isSorted(arr, n) ? "True" : "False");

}
/*
Complexity Analysis:
Time Complexity:
Loop runs (n - 1) times.
Each iteration does a constant-time comparison.

Worst case: must check entire array → O(n).
Best case: if unsorted early (e.g., arr[0] > arr[1]), function returns immediately → O(1).
Average case: about halfway through array before finding an issue → still O(n).

👉 So:
Best case = O(1)
Worst case = O(n)
Average case = O(n)

Space Complexity:
No extra data structures → O(1).

✅ Final Result for Optimized Version:
Time Complexity:
Best case: O(1)
Worst case: O(n)
Average case: O(n)
Space Complexity: O(1)
*/
//So we improved from O(n²) → O(n) in the worst and average cases