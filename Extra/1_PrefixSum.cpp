// #include<bits/stdc++.h>
// using namespace std;

// //Solution class
// class Solution {
// public:    
//     //Function to compute prefix sum array
//     vector<int> computePrefixSum(vector<int>& nums){
//         vector<int> prefix(nums.size(), 0);

//         //Set first element
//         prefix[0] = nums[0];

//         //Compute prefix sum iteratively
//         for(int i=1;i<nums.size();i++){
//             prefix[i] = prefix[i-1] + nums[i];
//         }

//         //return prefix sum
//         return prefix;
//     }
// };

// int main(){
//     //Input array
//     vector<int> nums = {1,2,3,4,5};

//     //Create Solution object
//     Solution sol;

//     vector<int> result = sol.computePrefixSum(nums);

//     //Print result
//     for(int val: result)
//         cout<<val<<" ";
    
//     return 0;    
// }



//if you only want leftmost sum only excluding current index element
#include<bits/stdc++.h>
using namespace std;

//Solution class
class Solution {
public:    
    //Function to compute prefix sum array
    vector<int> computePrefixSum(vector<int>& nums){

        vector<int> prefix(nums.size(), 0);

    

        //Compute prefix sum iteratively
        for(int i=1;i<nums.size();i++){
            prefix[i] = prefix[i-1] + nums[i-1];
        }

        //return prefix sum
        return prefix;
    }
};

int main(){
    //Input array
    vector<int> nums = {1,2,3,4,5};

    //Create Solution object
    Solution sol;

    vector<int> result = sol.computePrefixSum(nums);

    //Print result
    for(int val: result)
        cout<<val<<" ";
    
    return 0;    
}


