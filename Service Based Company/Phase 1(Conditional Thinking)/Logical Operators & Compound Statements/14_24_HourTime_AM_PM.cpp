#include <bits/stdc++.h>
using namespace std;

int main() {
    int hour, minute;
    cin >> hour >> minute;

    if (hour < 12)
        cout << "AM";
    else
        cout << "PM";

    return 0;
}

/*
TC: O(1)
SC: O(1)
*/