// Check if an amount can be evenly divided into 2000/500/100 notes.
// VISIBLE EXAMPLE
// Input: 2600
// Output: 1x2000 + 1x500 + 1x100

#include <bits/stdc++.h>
using namespace std;

int main() {
    int amount;
    cin >> amount;

    int n2000 = amount / 2000;
    amount %= 2000;

    int n500 = amount / 500;
    amount %= 500;

    int n100 = amount / 100;

    if(amount % 100 != 0){
        cout<<"Cannot be evenly divided";
    }

    cout << n2000 << "x2000 + "
         << n500 << "x500 + "
         << n100 << "x100";

    return 0;
}

/*
TC: O(1)
SC: O(1)
*/


//Pattern: Greedy / Denomination counting.
/*
int amount;
cin >> amount;

int a = amount / 2000;
amount %= 2000;

int b = amount / 500;
amount %= 500;

int c = amount / 100;

if (amount % 100 == 0)
    cout << a << "x2000 + " << b << "x500 + " << c << "x100";
else
    cout << "Cannot be evenly divided";

*/