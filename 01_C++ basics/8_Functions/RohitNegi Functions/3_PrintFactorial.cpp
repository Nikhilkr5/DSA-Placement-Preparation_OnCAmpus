// #include<bits/stdc++.h>
// using namespace std;

// long long factorial(int num);  // function declaration

// int main(){
//     int num;
//     cin >> num;
//     long long ans = factorial(num);
//     cout << ans;
//     return 0;
// }

// long long factorial(int num){
//     long long fact = 1;
//     for(int i = 1; i <= num; i++){
//         fact = fact * i;
//     }
//     return fact;
// }

/*
❌ 1. Function declared after main()

In C++, the compiler reads top → down.
When main() calls factorial(num), the compiler hasn't seen the function yet, so it throws an error.

✅ Fix:
Add a function prototype before main():

int factorial(int num);
❌ 2. Possible integer overflow

Your factorial result can get very large very fast.
int may overflow for values ≥ 13.

✅ Better:
Use long long instead of int.

*/






/*
✅ Edge Cases Covered
Negative input → invalid
0! = 1
Large input → overflow protection
Non-numeric input → handled safely
*/

#include <bits/stdc++.h>
using namespace std;

long long factorial(int num);

int main() {
    int num;

    // Handle non-numeric input
    if (!(cin >> num)) {
        cout << "Invalid input (not a number)";
        return 0;
    }

    // Handle negative numbers
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers";
        return 0;
    }

    // Prevent overflow (20! fits in long long, 21! doesn't)
    if (num > 20) {
        cout << "Number too large (will overflow)";
        return 0;
    }

    cout << factorial(num);
    return 0;
}

long long factorial(int num) {
    if (num == 0 || num == 1) return 1;

    long long fact = 1;
    for (int i = 2; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

/*
🔍 Why limit to 20?:
Because:

20! = 2,432,902,008,176,640,000 ✅ fits in long long
21! ❌ exceeds limit → overflow
*/