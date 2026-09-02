// #include<bits/stdc++.h>
// using namespace std;
// int maxSubarraySum(int arr[],int n){
//     int maxi= INT_MIN;

//     for(int i=0;i<n;i++){
//            for(int j=i;j<n;j++){
//                 int sum =0;
//                 for(int k=i;k<=j;k++){
//                 sum+=arr[k];

//                 }
//                 maxi = max(maxi,sum);               

//            }        
//     }
//     return maxi;
// }
// int main(){
//     int arr[] ={-2,1,-3,4,-1,2,1,-5,4};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     int maxSum = maxSubarraySum(arr,n);
//     cout<<"The maxm subarray sum is : "<<maxSum<<endl;
//     return 0;
// }

/*
Time Complexity: O(N3), where N = size of the array.
Reason: We are using three nested loops, each running approximately N times.
Space Complexity: O(1) as we are not using any extra space.
*/

//Better apprpoach

// #include<bits/stdc++.h>
// using namespace std;

// int maxSubarraySum(int arr[],int n){
//     int maxi = INT_MIN;

//     for(int i=0;i<n;i++){
//         int sum =0;
//         for(int j=i;j<n;j++){
//             sum+=arr[i];
//             maxi =max(maxi,sum);

//         }
//     }
//     return maxi;
// }

// int main(){
//     int arr[]={-2, 1, -3, 4, -1, 2, 1, -5, 4};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     int maxSum=maxSubarray(arr,n);
//     cout<<"The maximum subaaray sum is :"<<maxSum<<endl;
//     return 0;

// }

/*
Time Complexity: O(N2), where N = size of the array.
Reason: We are using two nested loops, each running approximately N times.
Space Complexity: O(1) as we are not using any extra space.
*/

//optimised approach : kadanes algorithm

// #include<bits/stdc++.h>
// using namespace std;

// long long maxSubarraySum(int arr[],int n){
//     long long maxi = LONG_MIN;
//     long long sum =0;

//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//         if(sum>maxi){
//             maxi=sum;
//         }
//         if(sum<0){
//             sum=0;
//         }

//     }
    
//     // To consider the sum of the empty subarray
//     // uncomment the following check:

//     //if (maxi < 0) maxi = 0;
//     return maxi;
// }


// int main(){
//     int arr[]={ -2, 1, -3, 4, -1, 2, 1, -5, 4};
//     int n  = sizeof(arr)/sizeof(arr[0]);
//     long long maxSum = maxSubarraySum(arr,n);
//     cout<<"The maximum subarray sum is: "<<maxSum<<endl;
//     return 0;
// }
/*
Time Complexity: O(N), where N = size of the array.
Reason: We are using a single loop running N times.

Space Complexity: O(1) as we are not using any extra space.
*/


//Print suaaray with maximaum subarray sum

#include<bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[],int n){
    long long maxi = LONG_MIN;
    long long sum =0;

    int start =0;
    int ansStart =-1,ansEnd=-1;
    for(int i=0;i<n;i++){
        if(sum == 0) start =i;

        sum+=arr[i];

        if(sum>maxi){
            maxi=sum;
            ansStart=start;
            ansEnd=i;

        }

        if(sum<0){
            sum=0;
        }
    }
    cout<<"The subarray is: [";
    for(int i=ansStart;i<=ansEnd;i++){
        cout<<arr[i]<<" ";
    }
    cout<<" ]";

    // To consider the sum of the empty subarray
    // uncomment the following check:

    //if (maxi < 0) maxi = 0;

    return maxi;// To consider the sum of the empty subarray
    // uncomment the following check:

    //if (maxi < 0) maxi = 0;

    return maxi;
}

int main(){
    int arr[]={-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n= sizeof(arr)/sizeof(arr[0]);
    long long maxSum= maxSubarraySum(arr,n);
    cout<<"The maximum subarray sum is: "<<maxSum<<endl;
    return 0;
}
