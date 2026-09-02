// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             char c= 'a'+j;
//             cout<<c<<" ";
//         }
//         cout<<endl;
//     }
// }



#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        char c = 'a'; // start from 'a' for each row
        for(int j = 0; j <= i; j++){
            cout << c << " ";
            c++; // move to next letter
        }
        cout << endl;
    }
}
