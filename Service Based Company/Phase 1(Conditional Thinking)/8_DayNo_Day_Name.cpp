#include <bits/stdc++.h>
using namespace std;

int main() {
    int day;
    cin >> day;

    string days[] = {
        "Sunday", "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday"
    };

    if (day >= 1 && day <= 7)
        cout << days[day - 1];
    else
        cout << "Invalid Day";

    return 0;
}

/*
TC: O(1)
SC: O(1)
*/


/*
Yes. It is an array — specifically, an array of strings in C++.

string days[] = {
    "Sunday", "Monday", "Tuesday", "Wednesday",
    "Thursday", "Friday", "Saturday"
};
What each part means
string → data type of each element
days → array name
[] → tells C++ this is an array
{...} → initializes the array with values

So conceptually:

days
 ↓
[ "Sunday", "Monday", "Tuesday", "Wednesday",
  "Thursday", "Friday", "Saturday" ]
   0          1          2           3
   4          5          6

You can access elements using an index:

cout << days[0];  // Sunday
cout << days[2];  // Tuesday
cout << days[6];  // Saturday
One important point

You didn't specify the size:

string days[];

But C++ automatically determines it from the initializer.

There are 7 elements, so C++ effectively treats it as:

string days[7] = {
    "Sunday", "Monday", "Tuesday", "Wednesday",
    "Thursday", "Friday", "Saturday"
};
*/