#include <bits/stdc++.h>
using namespace std;

int main() {
    int hour;
    cin >> hour;

    if (hour < 12)
        cout << "Good Morning";
    else if (hour < 17)
        cout << "Good Afternoon";
    else if (hour < 21)
        cout << "Good Evening";
    else
        cout << "Good Night";

    return 0;
}

/*
TC: O(1)
SC: O(1)
*/