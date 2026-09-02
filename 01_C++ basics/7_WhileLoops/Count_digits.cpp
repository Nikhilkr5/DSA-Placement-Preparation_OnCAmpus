//using for loop
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter a numer: ";
//     cin>>n;

//     //Handle ) as a special case
//     if(n==0){
//         cout<<"Number of digits: 1"<<endl;
//         return 0;
//     }

//     //Handle negative numbers
//     if(n < 0) n=-n;

//     int count =0;

//     //Count digits using for loop
//     for(;n>0;n=n/10){
        
//         count++;

//     }
//     cout<<"Number of digits: "<<count<<endl;
//     return 0;

// }

/*
Time Complexity: O(log₁₀(n)) → runs once per digit.

Space Complexity: O(1) → uses only a few variables.

Handles: Works fine for positive & negative numbers if we fix negatives with if(n<0) n=-n;.

Category: Optimal → simple, fast, and clean.
*/







//using for loop but not good for very big numbers

/*Problem in your code:

It doesn’t handle 0 or negative numbers correctly.

Uses an unnecessary big limit (i < 1000).

Could be simplified with a while loop.

*/
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int num = 10, digit = 1;
//     for (int i = 0; i < 1000; i++) {
//         if (n / num == 0) {
//             cout << digit;
//             return 0;
//         }
//         num = num * 10;
//         digit++;
//     }
//     return 0;
// }

/*
Time Complexity: Worst case O(1000) → constant time, but practically overkill.
For small n → works fine, but for very big n → inefficient.

Space Complexity: O(1)

Handles: Doesn't handle negatives or zero properly.

Category: Brute Force → unnecessary iterations; not elegant.
*/









//Here’s the corrected and complete version of your code that works for:

//positive numbers

//negative numbers

//zero
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     // Handle zero as a special case
//     if (n == 0) {
//         cout << "Number of digits: 1";
//         return 0;
//     }

//     // Handle negative numbers
//     if (n < 0) n = -n;

//     int num = 10, digit = 1;

//     // Loop until n / num becomes 0
//     while (n / num != 0) {
//         num = num * 10; // increase divisor by 10
//         digit++;        // count digit
//     }

//     cout << "Number of digits: " << digit;
//     return 0;
// }


/*
Time Complexity: O(log₁₀(n))

Space Complexity: O(1)

Handles: Works fine for zero & negatives if checks added.

Category: Better → but still slightly less clean than dividing n directly.
*/






//USING WHILE LOOP
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {  // special case for zero
        cout << 1;
        return 0;
    }

    if (n < 0) n = -n;  // make negative number positive

    int digit = 0;
    while (n > 0) {
        digit++;
        n = n / 10;
    }

    cout << digit;
    return 0;
}



/*
Time Complexity: O(log₁₀(n))

Space Complexity: O(1)

Handles: Works for all cases if zero & negatives are checked before loop.

Category: Optimal → shortest, most efficient solution.

*/





//the mathematical one-line solution using log10
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Handle zero as special case
    if (n == 0) {
        cout << 1;
        return 0;
    }

    // Handle negative numbers
    if (n < 0) n = -n;

    // Using log10 to find number of digits
    int digits = (int)log10(n) + 1;
    cout << digits;

    return 0;
}

*/

// Time Complexity: O(1) → direct formula

// Space Complexity: O(1)







