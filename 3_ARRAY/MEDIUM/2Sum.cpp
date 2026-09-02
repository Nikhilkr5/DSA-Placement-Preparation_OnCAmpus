//Brute forece approach
//There are two variants.
//1. returen YES/NO     2. return indices
// #include<bits/stdc++.h>
// using namespace std;

// string twoSum(int n, vector<int> &arr, int target){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j] == target) return "YES";
//         }
//     }
//     return "NO";
// }

// int main(){
//     int n=5;
//     vector<int> arr ={2,6,5,8,11};
//     int target =14;
//     string ans = twoSum(n,arr,target);
//     cout<<"This is the answer for variant 1: "<<ans <<endl;
//     return 0;
// }

/*
Time Complexity: O(N2), where N = size of the array.
Reason: There are two loops(i.e. nested) each running for approximately N times.

Space Complexity: O(1) as we are not using any extra space.
*/

//code variant 2:

// #include<bits/stdc++.h>
// using namespace std;

// vector<int> twoSum(int n, vector<int> &arr, int target){
//     vector<int> ans;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i] +arr[j] == target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return { -1 , -1 };
// }

// int main(){
//     int n=5;
//     vector<int> arr ={2,6,5,8,11};
//     int target =14;
//     vector<int> ans =twoSum(n, arr,target);
//     cout<<"This is the answer for variant 2: ["<<ans[0]<<" , " <<ans[1]<<"]"<<endl;
//     return 0;
// }

/*
Time Complexity: O(N2), where N = size of the array.
Reason: There are two loops(i.e. nested) each running for approximately N times.

Space Complexity: O(1) as we are not using any extra space.
*/




///Better Approach (uing Hashing)

// #include<bits/stdc++.h>
// using namespace std;

// string twoSum(int n, vector<int> &arr, int target){
//     unordered_map<int, int> mpp;
//     for(int i=0;i<n;i++){
//         int num= arr[i];
//         int moreNeeded = target - num;
//         if(mpp.find(moreNeeded)!= mpp.end()){
//             return "YES";
//         }
//         mpp[num]=i;

//     }
//     return "NO";
// }

// int main(){
//     int n=5;
//     vector<int> arr ={2,6,5,8,11};
//     int target = 14;
//     string ans = twoSum(n,arr,target);
//     cout<<"This is the ansewer for variant 1: "<<ans<<endl;
//     return 0;
// }

/*
Time Complexity: O(N), where N = size of the array.
Reason: The loop runs N times in the worst case and searching in a hashmap takes O(1) generally. So the time complexity is O(N).
Note: In the worst case(which rarely happens), the unordered_map takes O(N) to find an element. In that case, the time complexity will be O(N2). If we use map instead of unordered_map, the time complexity will be O(N* logN) as the map data structure takes logN time to find an element.
Space Complexity: O(N) as we use the map data structure.
Note: We have optimized this problem enough. But if in the interview, we are not allowed to use the map data structure, then we should move on to the following approach i.e. two pointer approach. This approach will have the same time complexity as the better approach.
*/


/*
You are using a hash map (unordered_map) to store elements you have seen, and for each number you check if its complement (target - num) already exists in the map.

🔹 Time Complexity:
You loop through the array once (for(int i=0; i<n; i++)) → O(n) iterations.
For each element:
mpp.find(moreNeeded) → O(1) average case (hash lookup).
mpp[num] = i; → O(1) average case (insertion).
👉 Overall: O(n) time complexity.
(Worst case with hash collisions, unordered_map operations can degrade to O(n), but in practice it’s usually O(1).)
🔹 Space Complexity:
You store each array element in unordered_map.
In the worst case, all n elements are inserted.
👉 Space complexity: O(n).
*/


//code ariant 2:

// #include<bits/stdc++.h>
// using namespace std;

// vector<int> twoSum(int n, vector<int> &arr, int target){
//     unordered_map<int,int> mpp;
//     for(int i=0;i<n;i++){
//         int num =arr[i];
//         int moreNeeded = target -num;
//         if(mpp.find(moreNeeded) != mpp.end()){
//             return {mpp[moreNeeded],i};
            
//         }
//         mpp[num] =i;

//     }
//     return {-1,-1};
// } 

// int main(){
//     int n=5;
//     vector<int> arr ={2,6,5,8,11};
//     int target =14;
//     vector<int> ans = twoSum(n, arr, target);
//     cout<<"This is the naswer for variant 2: ["<<ans[0]<<" , "<<ans[1]<<" ]"<<endl;
//     return 0;
// }

/*
Time Complexity: O(N), where N = size of the array.
Reason: The loop runs N times in the worst case and searching in a hashmap takes O(1) generally. So the time complexity is O(N).
Note: In the worst case(which rarely happens), the unordered_map takes O(N) to find an element. In that case, the time complexity will be O(N2). If we use map instead of unordered_map, the time complexity will be O(N* logN) as the map data structure takes logN time to find an element.
Space Complexity: O(N) as we use the map data structure.
Note: We have optimized this problem enough. But if in the interview, we are not allowed to use the map data structure, then we should move on to the following approach i.e. two pointer approach. This approach will have the same time complexity as the better approach.
*/

/*
🔹 Time Complexity:
You loop over the array once → O(n) iterations.
For each iteration:
mpp.find(moreNeeded) → O(1) on average (hash lookup).
mpp[num] = i → O(1) on average (hash insert).
No nested loops, no extra scans.
👉 Average Case: O(n)
👉 Worst Case (if hash collisions are bad): O(n²)
(but with a good hash function and random inputs, collisions are rare, so we consider O(n)).
🔹 Space Complexity
The unordered_map stores each number and its index.
In the worst case, all n elements get stored.
👉 O(n) extra space.
🔹 Final Analysis
Time Complexity:
Average Case → O(n)
Worst Case → O(n²) (rare in practice)
Space Complexity: O(n)
*/

//Optimized Approach(using two-pointer): 
//Note: For variant 2, we can store the elements of the array along with its index in a new array. Then the rest of the code will be similar. And while returning, we need to return the stored indices instead of returning “YES”. But for this variant, the recommended approach is approach 2 i.e. hashing approach.
// #include<bits/stdc++.h>
// using namespace std;

// string twoSum(int n , vector<int> & arr, int target){
//     sort(arr.begin(), arr.end());
//     int left =0, right = n-1;
//     while(left < right ){
//         int sum = arr[left]+ arr[right];
//         if(sum == target){
//             return "YES";

//         }
//         else if(sum < target) left++;
//         else right--;

//     }
//     return "NO";

// }

// int main(){
//     int n=5;
//     vector<int> arr ={2,6,5,8,11};
//     int target =14;
//     string ans = twoSum(n,arr,target);
//     cout<<"This is the answer for variant 1: "<<ans<<endl;
//     return 0;

// }



/*
Time Complexity:
Sorting step → sort(arr.begin(), arr.end())
Takes O(n log n) time.
Two-pointer traversal → while (left < right)
In the worst case, each pointer moves across the array once.
Takes O(n) time.
👉 Total time = O(n log n + n) = O(n log n)
Space Complexity:
Sorting is done in-place (since std::sort works in-place).
Two pointers and a few variables → O(1) extra space.
👉 Total space = O(1)
✅ Final Answer:
Time Complexity: O(n log n)
Space Complexity: O(1)
*/












//to return indices

// #include<bits/stdc++.h>
// using namespace std;

// vector<int> twoSum(int n, vector<int> &arr, int target){
//     //Step 1: Store (value , index) pairs
//     //vector<pair<int, int>> nums;
//     // for(int i=0;i<n;i++){
//     //     nums.push_back({arr[i],i});
//     // }
//     vector<pair<int,int>> nums(n);
//     for(int i = 0; i < n; i++) {
//         nums[i] = {arr[i], i};
//     }

//     /*
//     If you still want to use push_back (cleaner code), just reserve memory once:

//     vector<pair<int,int>> nums;
//     nums.reserve(n);   // reserve space for n elements
//     for(int i = 0; i < n; i++) {
//         nums.push_back({arr[i], i});
//     }
//     */

//     //Step 2: sort based on values (not indices)
//     sort(nums.begin(), nums.end());

//     //Step 3: Two pointer search
//     int left =0, right =n-1;
//     while(left< right){
//         int sum =nums[left].first+ nums[right].first;

//         if(sum == target){
//             return {nums[left].second, nums[right].second};    //original

//         }
//         else if(sum<target) left++;
//         else right--;
//     }
//     return {-1,-1}; // not found
// }

// int main(){
//     int n=5;
//     vector<int> arr={2,6,5,8,11};
//     int target =14;
    
//     vector<int> ans= twoSum(n, arr, target);

//     if(ans[0]== -1)
//         cout<<"No pair fund!"<<endl;
//     else
//         cout<<"This is the answer for variant 1: [" <<ans[0]<<" , "<<ans[1]<<"]"<<endl;
    
//         return 0;

// }




//more optimmised approach exists using binary search