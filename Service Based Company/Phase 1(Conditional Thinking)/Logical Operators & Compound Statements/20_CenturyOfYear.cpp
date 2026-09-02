/*
Take a year and print its century.
VISIBLE EXAMPLE
Input: 1999
Output: 20th Century
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int year;
    cin>>year;

    int century = (year + 99)/100;

    cout<<century<<"th Century";

    return 0;
}



/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int year;
    cin >> year;

    int century = (year + 99) / 100;

    if (century % 100 >= 11 && century % 100 <= 13)
        cout << century << "th Century";
    else if (century % 10 == 1)
        cout << century << "st Century";
    else if (century % 10 == 2)
        cout << century << "nd Century";
    else if (century % 10 == 3)
        cout << century << "rd Century";
    else
        cout << century << "th Century";

    return 0;
}


*/