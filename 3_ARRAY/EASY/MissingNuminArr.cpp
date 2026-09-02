//BRUTE FORCE APPROACH 


// #include<bits/stdc++.h>
// using namespace std;

// int missingNumber(vector<int>&a , int N){
//     //Outer loop that runs from 1 to N:
//     for(int i=1;i<=N;i++){
//         int flag =0;
//         for(int i=0;i<N-1;j++){
//             if(a[j]== i){
//                 flag =1;
//                 break;
//             }

//         }
//         if(flag == 0) return i;
//     }
// }



// int main(){
//     int N=5;
//     vector<int> a ={1,2,3,4,5};
//     int ans= missingNumber(a,N);
//     cout<<"The missing number is : "<<ans<< endl;
//     return 0;

// }

/*
Complexity Analysis
⏱ Time Complexity:
Outer loop runs N times.
Inner loop runs up to N-1 times in the worst case.
Worst-case work: O(N)×O(N−1)=O(N2)

So time complexity = O(N²).

📦 Space Complexity:
Only flag and loop variables used.
No extra data structure (hash array, set, etc.).
So space complexity = O(1).
Behavior:
Best case: Missing number is 1. Then outer loop runs once, inner loop runs at most N-1, so O(N).
Worst case: Missing number is N or no missing → loops run fully → O(N²).
✅ Summary:
Time complexity: O(N²) (worst case)
Space complexity: O(1)
*/


/*
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& a, int N) {
    for (int i = 1; i <= N; i++) {
        int flag = 0;
        for (int j = 0; j < a.size(); j++) {
            if (a[j] == i) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) return i;  // missing number found
    }
    return -1;  // no missing number
}

int main() {
    int N = 5;
    vector<int> a = {1, 2, 3, 4, 5}; // complete sequence

    int ans = missingNumber(a, N);
    if (ans == -1)
        cout << "No number is missing" << endl;
    else
        cout << "The missing number is: " << ans << endl;

    return 0;
}

*/


//BETTER APPROACH
//uSING HASH MAP


// #include<bits/stdc++.h>
// using namespace std;

// int missingNumber(vector<int>&a, int N){
//     int hash[N+1]={0};
//     for(int i=0;i<a.size();i++){
//         hash[a[i]]++;

//     }
//     for(int i=1;i<=N;i++){
//         if(hash[i]== 0){
//             return i;
//         }
//     }
//     return-1;
// }


// int main(){
//     int N=5;
//     vector<int> a ={1,2,4,5};
//     int ans = missingNumber(a,N);
//     cout<<"The missing number is: "<<ans <<endl;
//     return 0;

    /*    
    if (ans == -1)
        cout << "No number is missing" << endl;
    else
        cout << "The missing number is: " << ans << endl;
    return 0;
    */
//}
/*
Complexity Analysis of Hashing Method:
Time Complexity:
Filling the hash array → O(N)
Checking the hash array → O(N)
Total = O(N) + O(N) = O(2N)
Drop constants → O(N)
Space Complexity:
Extra hash array of size N+1 → O(N)
✅ Final Statement
The hashing approach runs in linear time O(N) but requires extra O(N) space for the frequency array.
*/


//Optimal Approach
//summation approach

// #include<bits/stdc++.h>
// using namespace std;

// int missingNumber(vector<int>a,int N){
//     int sum1=(N*(N+1))/2;
//     int sum2 =0;
//     for(int i=0;i<a.size();i++){
//         sum2 += a[i];
//     }
    

//     int miss= sum1-sum2;

//     if(miss != 0){
//         return miss;
//     }
//     return -1;
//     // if(miss==0) return -1;
//     // return miss;


// }
// int main(){
//     int N=5;
//     vector<int>a ={1,2,4,5};
//     int ans = missingNumber(a,N);
//     cout<<"the missing  Number : "<<ans<<endl;
//     return 0;

// }  

/*
Complexity Analysis
⏱ Time Complexity:

Compute sum1 = (N*(N+1))/2 → O(1)
Loop over array (a.size() = N-1 or N) → O(N)
Constant operations (sum1 - sum2, return checks) → O(1)
👉 Total = O(N) + O(1) + O(1) = O(N)
📦 Space Complexity:
Only variables sum1, sum2, miss are used.
No extra data structures.
👉 Space complexity = O(1)
Best / Worst Case
Best case: Still must sum the entire array → O(N).
Worst case: Same → O(N).
So unlike brute force, there’s no faster “best case” here — it’s always linear.
✅ Summary:
Time Complexity: O(N)
Space Complexity: O(1)
This is the most optimal solution (along with the XOR trick).
Better than:
Brute force → O(N²), O(1)
Hashing → O(N), O(N)
*/


//optimal solutuin 2

//using xor

#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>&a, int N){
    int xor1=0, xor2 =0;

    for(int i=0;i<a.size();i++){
        xor2 =xor2 ^ a[i];       //xor  of array elments
        xor1 = xor1 ^(i+1);

    }
    xor1 = xor1 ^ N;

    return  (xor1 ^ xor2);   //the missing number

}


int main(){
    int N=5;
    vector<int> a ={1,2,4,5};
    int ans= missingNumber(a,N);
    cout<<"the missing number  is: "<<ans<< endl;
    return 0;

}



/*
Time Complexity:
The loop runs over the array of size N-1 → O(N)
Inside the loop, each XOR operation is O(1)
XOR with N after the loop → O(1)

✅ Total time complexity = O(N)
Space Complexity
Only constant variables used: xor1 and xor2
No extra arrays or data structures
✅ Space complexity = O(1)
*/


/*
Let’s compare the four methods and see which is optimal in practice:

1. Brute Force (nested loops)
Time: O(N²)
Space: O(1)
✅ Works for small N
❌ Very slow for large N
2. Hashing / Frequency Array
Time: O(N)
Space: O(N)
✅ Fast, easy to understand
❌ Extra memory used
3. Sum Formula
Time: O(N)
Space: O(1)
✅ Fast, minimal space
❌ Risk of integer overflow if N is large (sum exceeds int range)
4. XOR Method
Time: O(N)
Space: O(1)
✅ Fast, minimal space
✅ No risk of overflow (unlike sum method)
 Preferred in interviews and competitive programming
✅ Conclusion
For small arrays or learning purposes: Hashing or sum formula is simple and clear.
For large arrays or optimal solution: XOR method is the best choice.
Brute force is only useful to understand the basic idea, not for real use.
*/