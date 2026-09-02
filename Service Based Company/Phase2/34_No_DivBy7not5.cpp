// . Count Numbers 1–500 Divisible by 7 but Not 5
#include <bits/stdc++.h>
using namespace std;

int main() {
    int count = 0;

    for (int i = 1; i <= 500; i++) {
        if (i % 7 == 0 && i % 5 != 0)
            count++;
    }

    cout << count;

    return 0;
}

/*
TC: O(1)
SC: O(1)
*/