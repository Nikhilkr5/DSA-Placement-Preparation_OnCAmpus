// #include<iostream>
// using namespace std;
// void print2(int n){

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*i+1;j++){
//             cout<<"*";
//         }
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         cout<<endl;

//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*n-(2*i+1);j++){
//             cout<<"*";
//         }
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         cout<<endl;

//     }


// }

// int main(){
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         int n;
//         cin>>n;
//         print2(n);
//     }
// }




//Merged Version: (given by chatgpt):--

#include<iostream>
using namespace std;

void print2(int n) {
    int totalRows = 2 * n; // top + bottom

    for (int i = 0; i < totalRows; i++) {
        // Determine which half we are in
        int spaces, stars;
        if (i < n) {
            // Upper half
            spaces = n - i - 1;
            stars = 2 * i + 1;
        } else {
            // Lower half
            int down = i - n; // how far down from middle
            spaces = down;
            stars = 2 * n - (2 * down + 1);
        }

        // Left spaces
        for (int j = 0; j < spaces; j++) cout << " ";
        // Stars
        for (int j = 0; j < stars; j++) cout << "*";
        // Right spaces (optional for symmetry)
        for (int j = 0; j < spaces; j++) cout << " ";

        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        print2(n);
    }
}


//Another way:

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= 2 * n - 1; i++) {
        int stars = (i <= n) ? (2 * i - 1) : (2 * (2 * n - i) - 1);
        int spaces = (i <= n) ? (n - i) : (i - n);

        // print spaces
        for (int j = 0; j < spaces; j++) cout << " ";
        // print stars
        for (int j = 0; j < stars; j++) cout << "*";
        cout << endl;
    }
}

