/*
Print all pairs in an array whose sum equals a given number.
VISIBLE EXAMPLE
Input: [1,2,3,4], sum=5
Output: (1,4), (2,3)
*/

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, target;
//     cin >> n >> target;

//     vector<int> arr(n);

//     for (int &x : arr)
//         cin >> x;

//     unordered_set<int> seen;

//     for (int x : arr) {
//         int complement = target - x;

//         if (seen.count(complement)) {
//             cout << "(" << complement << ", " << x << ") ";
//         }

//         seen.insert(x);
//     }
//     return 0;
// }



/*
PAIR SUM → target - current
            HashMap of previous elements

SUBARRAY SUM → prefixSum - k
               HashMap of prefix sums
*/


/*
Print all pairs in an array whose sum equals a given number.
VISIBLE EXAMPLE
Input: [1,2,3,4], sum=5
Output: (1,4), (2,3)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n;

    vector<int> arr(n);

    for (int &x : arr)
        cin >> x;

    cin >> target;

    unordered_map<int, int> freq;

    for (int x : arr) {
        int complement = target - x;

        if (freq[complement] > 0) {
            for (int i = 0; i < freq[complement]; i++)
                cout << "(" << complement << ", " << x << ") ";
        }

        freq[x]++;
    }

    return 0;
}

/*
TC: O(n + p) average
SC: O(n)

p = number of pairs printed.
*/