// #include<bits/stdc++.h>
// using namespace std;


// vector<int> RearrangebySign(vector<int>A, int n){
//     vector<int> pos;
//     vector<int> neg;
//     for(int i=0;i<n;i++){
//         if(A[i]>0) pos.push_back(A[i]);
//         else neg.push_back(A[i]);

//     }

//     for(int i=0;i<n/2;i++){
//         A[2*i] =pos[i];
//         A[2*i+1] = neg[i];
//     }
//     return A;
// }

// int main(){
//     int n=4;
//     vector<int> A ={1,2,-4,5};
//     vector<int> ans =RearrangebySign(A,n);


//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }

/*
Time Complexity: O(N+N/2) { O(N) for traversing the array once for segregating positives and negatives and another O(N/2) for adding those elements alternatively to the array, where N = size of the array A}.
Space Complexity:  O(N/2 + N/2) = O(N) { N/2 space required for each of the positive and negative element arrays, where N = size of the array A}.
*/

//Optimal:
#include<bits/stdc++.h>
using namespace std;

vector<int>RearrangebySign(vector<int>A){
    int n= A.size();
    vector<int> ans(n,0);

    int posIndex =0,negIndex=1;
    for(int i=0;i<n;i++){
        if(A[i]<0){
            ans[negIndex] = A[i];
            negIndex+=2;
        }
        else{
            ans[posIndex] = A[i];
            posIndex+=2;
        }
    }
    return ans;

}

int main(){
    vector<int> A={1,2,-4,5};
    vector<int> ans = RearrangebySign(A);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
/*
Time Complexity: O(N) { O(N) for traversing the array once and substituting positives and negatives simultaneously using pointers, where N = size of the array A}.
Space Complexity:  O(N) { Extra Space used to store the rearranged elements separately in an array, where N = size of array A}.
*/


//Variety-2
#include<bits/stdc++.h>
using namespace std;

vector<int> RearrangebySign(vector<int>A,int n){
    vector<int>pos;
    vector<int>neg;

    for(int i=0;i<n;i++){
        if(A[i]>0) pos.push_back(A[i]);
        else neg.push_back(A[i]);
    }
    if(pos.size()<neg.size()){
        for(int i=0;i<pos.size();i++){
            A[2*i] = pos[i];
            A[2*i+1]= neg[i];
        }

        int index =pos.size()*2;
        for(int i=pos.size();i<neg.size();i++){
            A[index] =neg[i];
            index++;
        }
    }
    else{
        for(int i=0;i<n;i++){
            A[2*i] = pos[i];
            A[2*i+1]= neg[i];
        }
        int index= neg.size()*2;
        for(int i=neg.size();i<pos.size();i++){
            A[index] = pos[i];            
        }
    }
    return A;
}

int main(){
    int n=6;
    vector<int> A ={1,2,-4,-5,3,4};
    vector<int> ans = RearrangebySign(A,n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}

/*
Time Complexity:
Loop 1 (segregation):
for(int i=0;i<n;i++){
    if(A[i]>0) pos.push_back(A[i]);
    else neg.push_back(A[i]);
}

→ Runs n times → O(n).

Loop 2 (interleaving):
Runs for min(pos.size(), neg.size()) iterations → at most n/2 → O(n).

Loop 3 (leftover fill):
Runs for max(pos.size(), neg.size()) - min(pos.size(), neg.size()) ≤ n/2 → O(n).

✅ Total Time Complexity = O(n)
Space Complexity

pos can store at most n elements.
neg can store at most n elements.

Together → O(n) extra space in worst case.

The function modifies and returns A (which is already a copy of the input since you passed by value), so that doesn’t count as extra auxiliary space.
✅ Total Space Complexity = O(n)
Summary
Time Complexity: O(n)
Space Complexity: O(n)

⚡ Optimization Idea:
If you want O(1) extra space, you’d need to rearrange the array in place without creating separate pos and neg vectors (harder, since order matters, but possible using two-pointers and careful swapping).
Do you want me to rewrite this function in O(1) space (no pos/neg vectors), or are you okay with the extra O(n) space version?
You said:
but i used push bacjk
ChatGPT said:

Yes 👍 you used push_back — that only changes how elements are inserted into pos and neg, but it doesn’t change the overall complexity.

Here’s why:

🔹 push_back cost

In a std::vector, push_back is amortized O(1).
(Most of the time it’s O(1); when capacity doubles it’s a bit more, but overall average is O(1) per call.)

You’re calling push_back n times total (once for each element of A).

So the cost of all push_back calls together is O(n).

🔹 Effect on Space

Because you used pos and neg, you’re still storing up to all n elements twice (split across two vectors).
So auxiliary space is still O(n).

✅ Final Complexity with push_back:

Time: O(n)

Space: O(n)

👉 Using push_back makes your code cleaner and safe (no need to pre-allocate or manage indices), but it doesn’t change asymptotic complexity.

Would you like me to show you how to reduce it to O(1) space (without pos and neg) while keeping O(n) time?

You said:
is it not taking O(logn)
ChatGPT said:

Good catch 🙂 — you’re asking whether

pos.push_back(A[i]);


could make the time complexity O(log n).

The short answer: No, it’s not O(log n). It’s amortized O(1).

Why not O(log n)?

A std::vector keeps an internal capacity (larger than its current size).

When you push_back and the capacity is full, the vector allocates a new bigger array (usually 2× the size) and copies the elements.

That copying is O(n) in that moment, but it happens rarely (only when capacity doubles).

Across n total push_back calls, the total work done is still O(n), so the average per call is O(1).
That’s what “amortized O(1)” means.

So the total cost of building pos and neg with push_back is O(n), not O(n log n).

When do we see O(log n)?

Operations like:

Binary search on a sorted array → O(log n)

Insertion/lookup in std::map (balanced BST) → O(log n)

But push_back on std::vector is not one of them.

✅ So your function’s complexity is still:

Time: O(n)

Space: O(n)

Do you want me to walk you through a proof with doubling argument (showing why push_back amortizes to O(1))? That might clear up the doubt completely.
*/


