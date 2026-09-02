// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int count = 0;
//     n = abs(n);

//     if(n==0){
//         count =1;
//     }
    
//     else{
//         while(n>0){
//             n =n/10;
//             count++;
//         }    

//     }
//     cout<< count << endl;

//     return 0;       
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n == 0){
        cout << 1 << endl;
        return 0;
    }

    n = abs(n);

    int count = 0;
    while(n > 0){
        n /= 10;
        count++;
    }

    cout << count << endl;
    return 0;
}
/*
⏱ Time Complexity
Each iteration removes one digit
If number has d digits, loop runs d times

👉 Time = O(d)
👉 Since d≈log10​(n) , we can also say: 👉 O(log n)
*/



//optimised version:
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n == 0){
        cout << 1;
        return 0;
    }

    n = abs(n);

    int count = floor(log10(n)) + 1;

    cout << count;
    return 0;
}
/*
⏱ Time Complexity
log10() is a built-in math function
Executes in constant time

👉 Time = O(1) 🚀
*/