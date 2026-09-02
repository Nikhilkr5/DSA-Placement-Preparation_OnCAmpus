// #include<bits/stdc++.h>
// using namespace std;

// void bubble_sort(int arr[],int n){
//     for(int i=n-1;i>=0;i--){
//         for(int j=0;j<=i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 // int temp=arr[j+1];
//                 // arr[j+1] =arr[j];
//                 // arr[j]=temp;
//                 swap(arr[j],arr[j+1]);

//             }
//         }
//     }
//     cout<<"After using bubble sort:  "<<"\n";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";

//     }
//     cout<<"\n";



// }


// int main(){

//     int arr[]= {13,46,34,2,20,9};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     cout<<"Before using Bubble sort: "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     bubble_sort(arr,n);
//     return 0;

// }
/*

*/







//Optimised Approach(Reducing time complexity for the best case)
/*
The best case occurs if the given array is already sorted. We can reduce the time complexity to O(N) by just adding a small check inside the loops. 

We will check in the first iteration if any swap is taking place. If the array is already sorted no swap will occur and we will break out from the loops. 
Thus the iteration of the outer loop will be just 1. And our overall time complexity will be O(N).
*/


#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i=n-1;i>=0;i--){
        int didSwap =0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp= arr[j+1];
                arr[j+1]=arr[j];
                arr[j]= temp;
                didSwap =1;



                //swap(arr[j],arr[j+1]);
            }
        }
        if(didSwap ==0){
            break;
        }
    }
}




int main(){
    int arr[]= {13, 46, 24,52,20,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Before using Bubble sort: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;

    bubble_sort(arr,n);
    return 0;


}

/*
Time Complexity: O(N2) for the worst and average cases and O(N) for the best case. Here, N = size of the array.

Space Complexity: O(1)

*/


/*
Alternative of didSwap:
                    bool swapped

   Since didSwap is just a flag, the more idiomatic and clear way in C++ is:

bool swapped = false;

// inside inner loop:
swapped = true;

// after inner loop:
if (!swapped) break;                 



Makes your code more readable: it clearly expresses that it is a true/false condition, not a number.

Functionally, it behaves exactly the same as int didSwap.

*/

/*
Conclusion:--
int didSwap → works fine
bool swapped → slightly better style and readability
*/
