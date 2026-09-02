//print fibonacci series nth element

// #include<iostream>
// using namespace std;

// int main(){
//     int  n;
//     cin>>n;
//     int first = 0;
//     int second = 1;
//     int current;

//     // if(n==1){
//     //     cout<<0;
//     //     return 0;
//     // }

//     // if(n ==2){
//     //     cout<<1;
//     //     return 0;
//     // }
//     if(n == 1 || n==2 ){
//         cout<<n-1;
//         return 0;
//     }

//     for(int i =3; i<=n; i++){
//         current = first + second;
//         first = second;
//         second =current;
//     }
//     cout<<current;
//     return 0;    
// }


//print fobonacci series:
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    // Edge case: invalid input
    if (n <= 0) {
        cout << "Invalid input";
        return 0;
    }

    long long first = 0, second = 1, next;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; i++)
    {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}

//cleaner version (minimal)
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0) return 0;

    long long a = 0, b = 1;

    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        long long next = a + b;
        a = b;
        b = next;
    }
}