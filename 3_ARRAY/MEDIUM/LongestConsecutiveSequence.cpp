// #include<bits/stdc++.h>
// using namespace std;

// bool linearSearch(vector<int>&a, int num){
//     int n= a.size();
//     for(int i=0;i<n;i++){
//         if(a[i]==num){
//             return true;
//         }
//         return false;
//     }

// }

// int longestSuccessiveElments(vector<int>&a){
//     int n= a.size();
//     int longest =1;
//     for(int i=0;i<n;i++){
//         int x= a[i];
//         int cnt =1;

//         while(linearSearch(a,x+1)== true){
//             x+=1;
//             cnt+=1;
            
//         }
//         longest = max(longest,cnt);
//     }
//     return longest;    

// }
// int main(){
//     vector<int> a = {100,200,1,2,3,4};
//     int ans = longestSuccessiveElments(a);
//     cout<<"The longest consecutive sequence is: "<<ans<<"\n";
//     return 0;
// }


/*
Complexity Analysis

Time Complexity: O(N2), N = size of the given array.
Reason: We are using nested loops each running for approximately N times.
Space Complexity: O(1), as we are not using any extra space to solve this problem.
*/


//Better Approach

// #include<bits/stdc++.h>
// using namespace std;

// int longestSuccessiveElements(vector<int>&a){
//     int n = a.size();
//     if(n == 0) return 0;

//     //sort the array
//     sort(a.begin(),a.end());
//     int lastSmaller =INT_MIN;
//     int cnt =0;
//     int longest =1;

//     //find longest sequence:
//     for(int i=0;i<n;i++){
//         if(a[i]-1 == lastSmaller){
//             cnt+=1;
//             lastSmaller = a[i];
//         }
//         else if(a[i] != lastSmaller){
//             cnt =1;
//             lastSmaller = a[i];
//         }
//         longest = max(longest, cnt);
//     }
//     return longest;

// }

// int main(){
//     vector<int> a ={100,200,1,2,3,4};
//     int ans = longestSuccessiveElements(a);
//     cout<<"The longest consecutive sequence is: "<<ans<<"\n";
//     return 0;
    
// }


/*
Time Complexity: O(NlogN) + O(N), N = size of the given array.
Reason: O(NlogN) for sorting the array. To find the longest sequence, we are using a loop that results in O(N).

Space Complexity: O(1), as we are not using any extra space to solve this problem.
*/

//Optimal Approach

#include<bits/stdc++.h>
using namespace std;

int longestSuccessiveElements(vector<int>&a){
    int n= a.size();
    if(n==0) return 0;

    int longest = 1;
    unordered_set<int> st;
    //put all the array elements into the set
    for(int i=0;i<n;i++){
        st.insert(a[i]);

    }
    for(auto it : st){
        if(st.find(it -1) == st.end()){
            int cnt =1;
            int x=it;
            while(st.find(x+1) != st.end()){
                x=x+1;
                cnt+=1;

            }
            longest = max(longest,cnt);

        }
    }
    return longest;
}

int main(){
    vector<int> a ={100,200,1,2,3,4};
    int ans = longestSuccessiveElements(a);
    cout<<"The longest consecutive sequence is "<<ans <<"\n";
    return 0;
}
/*
Time Complexity: O(N) + O(2*N) ~ O(3*N), where N = size of the array.
Reason: O(N) for putting all the elements into the set data structure. After that for every starting element, we are finding the consecutive elements. Though we are using nested loops, the set will be traversed at most twice in the worst case. So, the time complexity is O(2*N) instead of O(N2).

Space Complexity: O(N), as we are using the set data structure to solve this problem.
Note: The time complexity is computed under the assumption that we are using unordered_set and it is taking O(1) for the set operations. 
If we consider the worst case the set operations will take O(N) in that case and the total time complexity will be approximately O(N2). 
And if we use the set instead of unordered_set, the time complexity for the set operations will be O(logN) and the total time complexity will be O(NlogN).
*/

/*
🔎 Time Complexity:
Insert into set (for(int i=0; i<n; i++) st.insert(a[i]);)
Average case: O(n), since each insert into unordered_set is O(1) on average.
Iterating over set (for(auto it: st))
At most n unique elements.
Inside the loop:
Checking st.find(it-1) is O(1) average.
If it’s the start of a sequence, we do a while loop expanding forward:
while(st.find(x+1) != st.end())
Each element in the set is visited at most once across all sequences, because you only expand when you find a sequence start.
✅ So, total work for all while loops = O(n).
Overall Time Complexity = O(n) (average case).
⚠️ Worst-case (if hashing causes collisions) → O(n²), but practically it’s O(n).
🔎 Space Complexity
unordered_set<int> st stores all unique elements → O(n).
Few integer variables (cnt, x, longest) → O(1).
Overall Space Complexity = O(n).
*/
/*
Time Complexity

We need to see how many operations happen in total.
Putting into set:
Loop over array → insert elements into set.

Each insert = O(1) average.

For n elements → O(n).

Main loop over set:
You check every element in the set once → O(n).

For most elements, the if (st.find(it-1) == st.end()) fails, so nothing happens.

For the first element of a sequence, you enter the while loop and walk forward until the sequence ends.

🔑 Important point:
Each number in the set will be visited at most once in all the while loops combined.
Example:

Sequence {1,2,3,4}

You start at 1, loop through 2,3,4 → they will not be re-counted when you reach them later because they won’t satisfy the "start condition".

👉 That’s why the total work across all while loops = O(n), not O(n²).

✅ So, Total Time Complexity = O(n) (average).

📌 Step 3: Space Complexity

You store all n numbers in an unordered_set.
→ That’s O(n).

Extra variables like cnt, x, longest → O(1).

✅ So, Space Complexity = O(n).
*/
