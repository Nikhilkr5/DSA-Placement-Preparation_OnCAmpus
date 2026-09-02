//this question combines::: Prime checking + loop

// For every number from 2 to n, check whether it is prime and add it.

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if(n <= 1)
        return false;

    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0)
            return false;
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    int sum = 0;

    for(int i = 2; i <= n; i++) {
        if(isPrime(i))
            sum += i;
    }

    cout << sum;

    return 0;
}