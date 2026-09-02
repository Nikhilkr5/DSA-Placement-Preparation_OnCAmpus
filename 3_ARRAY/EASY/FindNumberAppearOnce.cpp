//BRUTE FORCE 

// #include<bits/stdc++.h>
// using namespace std;

// int getSingleElement(vector<int> &arr){
//     int n= arr.size();
//     for(int i=0;i<n;i++){
//         int num =arr[i];
//         int cnt=0;

//         for(int j=0;j<n;j++){
//             if(arr[j]==num){
//                 cnt++;
//             }
//         }
//         if(cnt==1) return num;
//     }
//     return -1;

// }
// int main(){
//     vector<int>arr={4,1,2,1,2};
//     int ans = getSingleElement(arr);

//     cout<<"the number that appears once"<<ans<<endl;
//     return 0;
// }

/*

Complexity Analysis
Time Complexity: O(N2), where N = size of the given array.
Reason: For every element, we are performing a linear search to count its occurrence. The linear search takes O(N) time complexity. And there are N elements in the array. So, the total time complexity will be O(N2).
Space Complexity: O(1) as we are not using any extra space.*/


/*
//Better Approach

Using Hashing:
1. Array Hashing(not applicable if the array contains negatives or very large numbers)
2. Hashing using map data structure
*/

//Array hashing

// #include<bits/stdc++.h>
// using namespace std;

// int getSingleElement(vector<int> &arr){
//     //size of the array:
//     int n= arr.size();

//     //find the Maximum Element
//     int maxi =arr[0];
//     for(int i=0;i<n;i++){
//         maxi=max(maxi,arr[i]);

//     }

//     // Declare hash array of size maxi+1
//     // And hash the given array:
//     vector<int> hash(maxi+1,0);
//     for(int i=0;i<n;i++){
//         hash[arr[i]]++;
//     }

//     //Find the single element and return the answer:
//     for(int i=0;i<n;i++){
//         if(hash[arr[i]] == 1)
//             return arr[i];
//     }

    
//     //This line will never execute
//     //if the array contains a single element.
//     return -1;
    

// }

// int  main(){

//     vector<int> arr ={4,1,2,1,2};
//     int ans = getSingleElement(arr);
//     cout<<"The Single element is: "<<ans<<endl;
//     return 0;

// }

/*
Time Complexity: O(N)+O(N)+O(N), where N = size of the array
Reason: One O(N) is for finding the maximum, the second one is to hash the elements and the third one is to search the single element in the array.
Space Complexity: O(maxElement+1) where maxElement = the maximum element of the array.*/



//Hashing using the map data structure: 
//The intuition will be the same as the array hashing. The only difference here is we will use the map data structure for hashing instead of using another array for hashing.

// #include<bits/stdc++.h>
// using namespace std;

// int getSingleElement(vector<int> &arr){
//     //size of the array
//     int n= arr.size();

//     //Declare the HashMap
//     //and hash the given array
//     map<int,int> mpp;
//     for(int i=0;i<n;i++){
//         mpp[arr[i]++];

//     }

//     //Find the single element and return the answer:
//     for(auto it : mpp){
//         if(it.second ==1)
//             return it.first;
//     }

    
//     //This line will never execute
//     //if the array contains a single element.
//     return -1;

// }


// int main(){
//     vector<int> arr ={4,2,1,1,2};
//     int ans = getSingleElement(arr);
//     cout<<"The Single Element is: "<<ans<<endl;
//     return 0;
// }    
/*
Time Complexity: O(N*logM) + O(M), where M = size of the map i.e. M = (N/2)+1. N = size of the array.
Reason: We are inserting N elements in the map data structure and insertion takes logM time(where M = size of the map). So this results in the first term O(N*logM). The second term is to iterate the map and search the single element. In Java, HashMap generally takes O(1) time complexity for insertion and search. In that case, the time complexity will be O(N) + O(M).
Note: The time complexity will be changed depending on which map data structure we are using. If we use unordered_map in C++, the time complexity will be O(N) for the best and average case instead of O(N*logM). But in the worst case(which rarely happens), it will be nearly O(N2).
Space Complexity: O(M) as we are using a map data structure. Here M = size of the map i.e. M = (N/2)+1.
*/
/*
🔹 Step-by-Step Complexity Analysis
1. Building the map
for(int i=0; i<n; i++){
    mpp[arr[i]]++;
}


mpp is a balanced binary search tree (std::map in C++).

Each insertion or update in a map costs O(log n) time.

You do it n times → O(n log n) time.

Space: mpp stores at most n keys (all unique values).
👉 O(n) space

2. Traversing the map
for(auto it : mpp){
    if(it.second == 1)
        return it.first;
}


Traversal over all unique keys.

If there are k unique elements, this costs O(k).

Worst case: k = n.
👉 O(n)

3. Total

Time Complexity:
O(n log n) + O(n) = O(n log n)

Space Complexity:
O(n) (for storing counts in the map)

🔹 Alternatives

Using unordered_map

unordered_map<int,int> mpp;
for(int num : arr) mpp[num]++;


Average case: O(1) for insert → total O(n) time

Space: O(n)

Faster than map for large inputs.

Using XOR (best, but only works if every element appears twice except one)

int x = 0;
for(int num : arr) x ^= num;
return x;


Time: O(n)

Space: O(1)

Best solution, but only valid when the problem guarantees pairs.

✅ So your current map solution is correct, but its complexity is O(n log n) time and O(n) space.
⚡ If possible, prefer unordered_map (O(n) expected) or XOR trick (O(n), O(1) space).*/

//Unordered maap
/*
#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr) {
    int n = arr.size();

    // Declare unordered_map (hash table)
    unordered_map<int,int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;   // count frequency of each element
    }

    // Find the single element
    for(auto it : mpp){
        if(it.second == 1)
            return it.first;
    }

    return -1;  // if no single element is found
}

int main() {
    vector<int> arr = {4,1,2,1,2};
    int ans = getSingleElement(arr);
    cout << "The Single element is: " << ans << endl;
    return 0;
}



How it Works:
unordered_map<int,int> mpp; → Creates a hash table.
Loop through array and count frequencies:
{4,1,2,1,2} → mpp = { {4,1}, {1,2}, {2,2} }
Second loop finds which element appears once → returns 4.
🔹 Complexity Analysis:
Building the hash table:
Average O(1) per insertion → O(n) total.
Finding the single element:
At most n checks → O(n).
Total Time Complexity: O(n) (average case).
Space Complexity: O(n) (for the hash table).
⚡ This is faster than map (which is O(n log n)).
*/

//Optimal Approach
#include<bits/stdc++.h>
using namespace std;


int getSingleElement(vector<int> & arr){
    //size of the array:
    int n=arr.size();

    int xorr=0;

    for(int i=0;i<n;i++){
        xorr =xorr ^ arr[i];        
    }
    return xorr; 
}

int main(){
    vector<int> arr ={4,1,2,1,2};
    int ans = getSingleElement(arr);
    cout<<"The single elemnt is: "<<ans<<endl;
    return 0;    
}

/*
Time Complexity: O(N), where N = size of the array.
Reason: We are iterating the array only once.
Space Complexity: O(1) as we are not using any extra space.
*/


/*
🔹 Time Complexity:
The loop runs once for each element (n times).
Each XOR operation is O(1).
Therefore:
✅ Time Complexity = O(n)
🔹 Space Complexity:
You are only using one extra variable xorr.
No additional data structures are used.
✅ Space Complexity = O(1) (constant space)
✅ Final Answer:
Time Complexity: O(n)
Space Complexity: O(1)
*/


