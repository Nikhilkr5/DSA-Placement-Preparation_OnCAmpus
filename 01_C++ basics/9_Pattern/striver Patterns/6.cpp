// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int count =1;

//     for(int i=0;i<n;i++){
        
//         for(int j=0;j<=i;j++){

//             cout<<count<<" ";

//         }
//         cout<<endl;
//         count++;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i<<" ";

//         }
//         cout<<endl;
//     }
// }



#include<iostream>
using namespace std;

void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        print4(n);
    }
}


