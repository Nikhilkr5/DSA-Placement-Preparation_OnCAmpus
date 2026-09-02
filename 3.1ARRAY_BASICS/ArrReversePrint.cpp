// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5]={1,2,3,4,5};
     
//     for(int i=4;i>=0;i--){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    reverse(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}