#include <iostream>
using namespace std;

int main() {
    int a = 20, b = 78, c = 90;

    if (a >= b && a >= c)
        cout << a << " is the biggest number";
    else if (b >= a && b >= c)
        cout << b << " is the biggest number";
    else
        cout << c << " is the biggest number";

    return 0;
}
