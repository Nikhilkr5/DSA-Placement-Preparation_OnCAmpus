//Find the Majority Element that occurs more than N/2 times

//bute force approach:

// #include <bits/stdc++.h>
// using namespace std;

// int majorityElement(vector<int> v) {

//     //size of the given array:
//     int n = v.size();

//     for (int i = 0; i < n; i++) {
//         //selected element is v[i]
//         int cnt = 0;
//         for (int j = 0; j < n; j++) {
//             // counting the frequency of v[i]
//             if (v[j] == v[i]) {
//                 cnt++;
//             }
//         }

//         // check if frquency is greater than n/2:
//         if (cnt > (n / 2))
//             return v[i];
//     }

//     return -1;
// }

// int main()
// {
//     vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
//     int ans = majorityElement(arr);
//     cout << "The majority element is: " << ans << endl;
//     return 0;
// }

/*
Time Complexity: O(N2), where N = size of the given array. Reason: For every element of the array the inner loop runs for N times. And there are N elements in the array. So, the total time complexity is O(N2). Space Complexity: O(1) as we use no extra space.
*/

//Better appproach
//Using map:

// #include <bits/stdc++.h>
// using namespace std;

// int majorityElement(vector<int> v) {

//     //size of the given array:
//     int n = v.size();

//     //declaring a map:
//     map<int, int> mpp;

//     //storing the elements with its occurnce:
//     for (int i = 0; i < n; i++) {
//         mpp[v[i]]++;
//     }

//     //searching for the majority element:
//     for (auto it : mpp) {
//         if (it.second > (n / 2)) {
//             return it.first;
//         }
//     }

//     return -1;
// }

// int main()
// {
//     vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
//     int ans = majorityElement(arr);
//     cout << "The majority element is: " << ans << endl;
//     return 0;
// }
/*
Time Complexity:
Counting loop (for i=0…n-1)
Each operation mpp[v[i]]++ takes O(log k) time, where k = current number of distinct keys, because map is implemented as a balanced BST (Red-Black tree).
Worst case, k = n (all elements distinct).
So this loop = O(n log n).
Searching loop (for(auto it: mpp))
Iterates over all distinct keys k.
At most n.
So this loop = O(n).
But since O(n log n) dominates, total stays the same.
✅ Overall Time Complexity = O(n log n).
(If you used unordered_map<int,int>, the expected time would be O(n) instead of O(n log n).)

Space Complexity:
mpp stores at most n entries (if all elements are distinct).
So space = O(n) in worst case.
No other extra space used except a few variables.
✅ Overall Space Complexity = O(n).
*/
/*Time Complexity: O(N*logN) + O(N), where N = size of the given array.
Reason: We are using a map data structure. Insertion in the map takes logN time. And we are doing it for N elements. So, it results in the first term O(N*logN). The second O(N) is for checking which element occurs more than floor(N/2) times. If we use unordered_map instead, the first term will be O(N) for the best and average case and for the worst case, it will be O(N2).

Space Complexity: O(N) as we are using a map data structure.
*/


//or
/*
You can optimize it by replacing map<int,int> with unordered_map<int,int>.
Why?
map → implemented as a balanced BST → operations take O(log n)
unordered_map → implemented as a hash table → operations take O(1) on average
*/
/*
1. Using map<int,int>
Time Complexity: O(n log n)
Space Complexity: O(n)
Notes: Easy to implement, but slower because of log factor.
2. Using unordered_map<int,int>
Time Complexity: O(n) (average), O(n²) worst case if hash collisions are bad (but practically rare).
Space Complexity: O(n)
Notes: Faster in practice than map, good choice if you want clarity + efficiency.
*/

// #include <bits/stdc++.h>
// using namespace std;

// int majorityElement(vector<int> v) {
//     int n = v.size();

//     unordered_map<int,int> mpp;

//     // storing the elements with their occurrence:
//     for(int i=0; i<n; i++){
//         mpp[v[i]]++;        
//     }

//     // searching for the majority element:
//     for(auto it: mpp){
//         if(it.second > (n/2)){
//             return it.first;
//         }
//     }
//     return -1;
// }
/*
Counting loop: O(n) (average, since hashing gives O(1) per insert/update).

Searching loop: O(n) in worst case (all distinct).
✅ Total Time Complexity = O(n) (average).
✅ Space Complexity = O(n) (same as before).
*/
//OPTIMAL APPROACH
//Moores Voting algoritm:

#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>v){
    int n= v.size();
    int cnt =0; 
    int el;

    //applying the algorithm
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            el =v[i];
        }
        else if(el== v[i]) cnt++;
        else cnt--;
    }

    //checking if the stored element
    //is the majority element
//But if the question guarantees that the given array contains a majority element, then we can bet the Element will store the majority one.
    int cnt1 =0;
    for(int i=0;i<n;i++){
        if(v[i]==el) cnt1++;

    }
    if(cnt1>(n/2)) return el;
    return -1;

}

int main(){
    vector<int> arr ={2,2,1,1,1,2,2};
    int ans = majorityElement(arr);
    cout<<"The majority element is: "<<ans<<endl;
    return 0;
}

/*
Time Complexity: O(N) + O(N), where N = size of the given array.
Reason: The first O(N) is to calculate the count and find the expected majority element. The second one is to check if the expected element is the majority one or not.
Note: If the question states that the array must contain a majority element, in that case, we do not need the second check. Then the time complexity will boil down to O(N).
Space Complexity: O(1) as we are not using any extra space.
*/

