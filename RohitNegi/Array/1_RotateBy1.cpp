#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,3,4,6,9,23};

    int n = sizeof(arr)/sizeof(arr[0]);

    int num = arr[n-1];
    for(int i= n-1;i>0;i--){
        arr[i] = arr[i-1];

    }
    arr[0] = num;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}