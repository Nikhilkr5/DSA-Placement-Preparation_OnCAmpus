//Count Maximum Consecutive One's in the array

#include<bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int> &arr){
    int MaxCount =0 , CurrentCount =0;

    for(int num: arr){
        if(num ==1){
            CurrentCount++;
            MaxCount= max(MaxCount,CurrentCount);
        }
        else {
            CurrentCount =0;
        }    
        
    }
    return MaxCount;

}

int main(){
    vector<int>arr ={1,1,0,1,1,1,0,1};
    cout<<"Maximum consecutive 1's "<< findMaxConsecutiveOnes(arr)<<endl;
    return 0;
}


//another way to write on coding platforms: but npot necssary
// #include <bits/stdc++.h>

// using namespace std;
// class Solution {
//   public:
//     int findMaxConsecutiveOnes(vector < int > & nums) {
//       int cnt = 0;
//       int maxi = 0;
//       for (int i = 0; i < nums.size(); i++) {
//         if (nums[i] == 1) {
//           cnt++;
//         } else {
//           cnt = 0;
//         }

//         maxi = max(maxi, cnt);
//       }
//       return maxi;
//     }
// };

// int main() {
//   vector < int > nums = { 1, 1, 0, 1, 1, 1 };
//   Solution obj;
//   int ans = obj.findMaxConsecutiveOnes(nums);
//   cout << "The maximum  consecutive 1's are " << ans;
//   return 0;
// }

