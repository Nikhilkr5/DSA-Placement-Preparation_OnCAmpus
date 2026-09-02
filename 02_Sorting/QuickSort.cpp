//lomuuto code
/*
Since the problem requires using the last element as the pivot, the simplest and most direct way to solve it is to use the standard Lomuto partition scheme. This scheme is designed specifically for this scenario.
*/


//coder army:

// #include<iostream>
// using namespace std;

// int partition(int arr[],int low, int high){
//     int pos=low;
//     for(int i=low;i<=high;i++){
//         if(arr[i]<=arr[high]){
//             swap(arr[i],arr[pos]);
//             pos++;

//         }
//     }
//     return pos-1;      
    
// }

// void quicksort(int arr[], int low, int high){
//     if(low>=high) return;
//     int pivot = partition(arr,low,high);
//     quicksort(arr,low,pivot-1);
//     quicksort(arr,pivot+1,high);

// }
// int main(){

//     int arr[] ={10,9,4,1,5,6,3,2,11,9};
//     quicksort(arr,0,9);
//     for(int i=0;i<10;i++){
//         cout<<arr[i]<<" ";
//     }
// }

/*
Even though your quicksort() function is void (so it doesn’t return anything), it still sorts the array because of the way arrays work in C++.

Let me break it down simply:

1. Arrays in C++ are passed by reference (sort of)

When you write:

void quicksort(int arr[], int low, int high)


arr is not copied when you call the function. Instead, a pointer to the original array is passed.
So any change inside the function directly affects the original array in main().

That’s why, even though quicksort() doesn’t return anything, the original array is modified.
*/



//lpomuto partition
//code with mik
// Both will give correct output, but Code 2 (Code with MIK) is
// ✅ clearer
// ✅ fewer swaps
// ✅ standard Lomuto style
//So Code 2 is the better one to use in practice.


#include<bits/stdc++.h>
using namespace std;
int partition(int arr[], int low, int high){

    int pivot = arr[high];
    int Pi=low;

    for(int i=low;i< high;i++){
        if(arr[i]<=pivot){
            swap(arr[i],arr[Pi]);
            Pi++;


        }
    }
    swap(arr[Pi],arr[high]);
    return Pi;
}
void quicksort(int arr[],int low, int high){
    if(low>=high) return;

    int Pi = partition(arr,low,high);
    quicksort(arr,low,Pi-1);
    quicksort(arr,Pi+1,high);
}
int main(){
    int arr[]= {10,9,8,7,6,5,4,3,2,1};
    quicksort(arr,0,9);
    for(int i=0;i<=9;i++){
        cout<<arr[i]<<" ";

    }

}