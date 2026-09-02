//Brute force approach:
/*
Sorting ( even if it is not the expected solution here but it can be considered as one of the approaches). Since the array contains only 3 integers, 0, 1, and 2. Simply sorting the array would arrange the elements in increasing order.
*/



// #include<bits/stdc++.h>
// using namespace std;

// void sortArrray(vector<int>& arr, int n){
//     int cnt0 =0, cnt1 =1, cnt2 =0;

//     for(int i=0;i<n;i++){
//         if(arr[i]==0) cnt0++;
//         else if(arr[i]==1) cnt1++;
//         else cnt2++;

//     }

//     for(int i=0;i<cnt0;i++)  arr[i] =0;
//     for(int i=cnt0;i<cnt0+cnt1;i++) arr[i] =1;
//     for(int i=cnt0 +cnt1;i<n;i++)   arr[i] =2;


// }


// int main(){
//     int n =6;
//     vector<int> arr= {0,2,1,2,0,1};
//     cout<< "After sorting" << endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";

//     }
//     cout<< endl;
//     return 0;
// }
/*
Time Complexity: O(N) + O(N), where N = size of the array. First O(N) for counting the number of 0’s, 1’s, 2’s, and second O(N) for placing them correctly in the original array.
Space Complexity: O(1) as we are not using any extra space
*/


//Approach 2:
//Using Sutch National flag algorithm

#include<bits/stdc++.h>
using namespace std;

void sort(vector<int>& arr, int n){
    int low =0,mid =0, high=n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;

        }
        else if(arr[mid]== 1){
            mid++;
        
        }
        else{
            swap(arr[mid],arr[high]);
            high--;

        }
    }
}
int main(){
    int n=6;
    vector<int> arr ={0,2,1,2,0,1};
    sort(arr, n);
    cout<<"After sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

/*
ime Complexity: O(N), where N = size of the given array.
Reason: We are using a single loop that can run at most N times.
Space Complexity: O(1) as we are not using any extra space.
*/