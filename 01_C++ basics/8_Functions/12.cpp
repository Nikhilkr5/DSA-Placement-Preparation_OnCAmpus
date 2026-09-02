
// #include<bits/stdc++.h>
// using namespace std; 

// int main(){
//     int arr[5];
//     for(int i=0;i<=4;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<=4;i++){
//         cout<<arr[i];
//     }
//     cout<<endl;
// }





//arrays always go with refernce
#include<bits/stdc++.h>
using namespace std;


void doSomething(int arr[],int n){
    arr[0]+=100;
    cout<<"Value inside function : "<<arr[0]<<endl;
}

int main(){
    int n=5;
    int arr[5];

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    doSomething(arr,n);
    cout<<"value inside int main: "<<arr[0]<<endl;
    return 0;
}
