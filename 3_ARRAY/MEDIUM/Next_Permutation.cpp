//Bettter Solution: Using in-built function
//C++ provides an in-built function called next_permutation() which directly returns the lexicographically next greater permutation of the input.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={1,3,2};
//     next_permutation(arr,arr+3);
//     cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
//     return 0;
// }


//Optimal Solution:
#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterPermutation(vector<int> &A){
    int n= A.size();
    int ind=-1;
    for(int i=n-2;i>=0;i--){                 //// ❌ when i = n-1, nums[i+1] is out of bounds so don't start from n-1
        if(A[i]<A[i+1]){
            ind=i;
            break;
        }
    }
    if(ind == -1){
        reverse(A.begin(),A.end());
        return A;
    }

    for(int i=n-1;i>ind;i--){
        if(A[i]>A[ind]){
            swap(A[i],A[ind]);
            break;
        }
    }
    reverse(A.begin()+ind+1,A.end());
    return A;

}
int main(){
    vector<int> A= {2,3,1,5,4,3,0,0};
    vector<int> ans = nextGreaterPermutation(A);

    cout<<"The next permutation is : [";
    for(auto it: ans){
        cout<<it<<" ";
    }
    cout<<"]";
}

/*
Time Complexity: O(3N), where N = size of the given array
Finding the break-point, finding the next greater element, and reversal at the end takes O(N) for each, where N is the number of elements in the input array. This sums up to 3*O(N) which is approximately O(3N).
Space Complexity: Since no extra storage is required. Thus, its space complexity is O(1).
*/
