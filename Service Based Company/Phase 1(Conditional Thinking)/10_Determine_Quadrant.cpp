//L3 Math & Number Logic::
/*
Take (x, y) coordinates and determine the quadrant.
VISIBLE EXAMPLE
Input: (-3, 4)
Output: Quadrant II
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if (x == 0 && y == 0)
        cout << "Origin";
    else if (x == 0)
        cout << "Y-axis";
    else if (y == 0)
        cout << "X-axis";
    else if (x > 0 && y > 0)
        cout << "Quadrant I";
    else if (x < 0 && y > 0)
        cout << "Quadrant II";
    else if (x < 0 && y < 0)
        cout << "Quadrant III";
    else
        cout << "Quadrant IV";

    return 0;
}
/*
TC: O(1)
SC: O(1)
*/