// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         // left numbers
//         for (int j = 1; j <= i; j++) {
//             cout << j;
//         }

//         // middle spaces -> depends on row number
//         int space = 2 * (n - i);
//         for (int j = 1; j <= space; j++) {
//             cout << " ";
//         }

//         // right numbers (reverse)
//         for (int j = i; j >= 1; j--) {
//             cout << j;
//         }

//         cout << endl;
//     }

//     return 0;
// }


#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // left numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // middle spaces -> depends on row number
        int space = 2 * (n - i);
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }

        // right numbers (reverse)
        for (int j = i; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}