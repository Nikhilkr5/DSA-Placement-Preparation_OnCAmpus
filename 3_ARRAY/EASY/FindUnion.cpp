///union of two sorted arrays:

//Using Map
/*
We want to find the union of two arrays (all unique elements present in either array).
🔧 Approach:
Use a map<int,int> to store elements.
Keys of the map → array elements.
Values → frequency count (not actually used, but needed because map stores key–value pairs).
Insert elements of arr1 into the map.
Insert elements of arr2 into the map.
If an element already exists, frequency increases.
If new, it gets added.
Collect all the keys (it.first) → this is the union.
📊 Complexity
Time: O((n + m) * log(n + m))
Each insertion in map costs O(logN).
Space: O(n + m) (for storing map + result).
*/




/*
How it works

Data Structure Used → map<int,int>
A map in C++ stores unique keys in sorted order.
Here, the key is the element from the arrays, and the value (int) is just a frequency counter.

Step 1: Insert all elements of arr1 into map
After this loop, all elements of arr1 are stored in map.
Step 2: Insert all elements of arr2 into map

If elements are new, they get added.
If elements already exist (like 2, 3, 4, 5), their frequency just increases.
⚡ But we don’t actually care about the frequency — only about the unique keys.
Step 3: Collect the union

Iterating over a map gives pairs (key, value).
We only take the key (it.first), because that represents each unique element.
Since map is ordered, the union will also be sorted automatically.


*/
// #include<bits/stdc++.h>
// using namespace std;

// vector<int> FindUnion(int arr1[],int arr2[],int n,int m){
//     map<int,int> freq;
//     vector<int> Union;

//     // Insert all elements of arr1 into map
//     for(int i=0;i<n;i++)
//         freq[arr1[i]]++;

//     // Insert all elements of arr2 into map   
//     for(int i=0;i<m;i++)
//         freq[arr2[i]]++;

//     //Takeonly the keys (unique elements) from map
//     for(auto &it : freq)
//         Union.push_back(it.first);
        
//     return Union;    
// }

/*
Complexity Analysis:
Time Compleixty : O( (m+n)log(m+n) ) . Inserting a key in map takes logN times, where N is no of elements in map. At max map can store m+n elements {when there are no common elements and elements in arr,arr2 are distntict}. So Inserting m+n th element takes log(m+n) time. Upon approximation across insertion of all elements in worst it would take O((m+n)log(m+n) time.
Using HashMap also takes the same time, On average insertion in unordered_map takes O(1) time but sorting the union vector takes O((m+n)log(m+n))  time. Because at max union vector can have m+n elements.
Space Complexity : O(m+n) {If Space of Union ArrayList is considered} 
O(1) {If Space of union ArrayList is not considered}
*/


//Using set

#include<bits/stdc++.h>
using namespace std;

vector<int>FindUnion(int arr1[],int arr2[],int n,int m){
    set<int>s;

    vector<int>Union;
    for(int i=0;i<n;i++){
        s.insert(arr1[i]);

    }
    for(int i=0;i<m;i++){
        s.insert(arr2[i]);
    }

    for(auto &it:s){
        Union.push_back(it);
    }

    return Union;


}

    int main(){
    
    int n= 10,m=7;

    int arr1[] ={1,2,3,4,5,6,7,8,9,10};
    int arr2[] ={2,3,4,4,5,11,12};

    vector<int> Union = FindUnion(arr1,arr2,n,m);
    cout<<"Union of arr1 and arr2 is: "<<endl;
    for(auto &val: Union)
        cout<<val<<" ";
    return 0;

}

/*
Time Compleixty : O( (m+n)log(m+n) ) . Inserting an element in a set takes logN time, where N is no of elements in the set. At max set can store m+n elements {when there are no common elements and elements in arr,arr2 are distntict}. So Inserting m+n th element takes log(m+n) time. Upon approximation across inserting all elements in worst, it would take O((m+n)log(m+n) time.
Using HashSet also takes the same time, On average insertion in unordered_set takes O(1) time but sorting the union vector takes O((m+n)log(m+n))  time. Because at max union vector can have m+n elements.
Space Complexity : O(m+n) {If Space of Union ArrayList is considered} 
O(1) {If Space of union ArrayList is not considered}
*/

/*
1. Using a set
In C++, std::set is usually implemented as a self-balancing BST (Red-Black Tree).
Insert operation takes O(log k) time, where k is the number of elements in the set at that point.
2. Inserting elements of arr1
Each insertion: O(log size_of_set)
For n elements: O(n log n) (worst case, when all elements are unique)
3. Inserting elements of arr2
Each insertion: O(log size_of_set)
For m elements: O(m log (n+m)) (because after inserting arr1, the set has up to n elements)
✅ Total insertion complexity:O(nlogn+mlog(n+m))
In Big-O, we can simplify to O((n + m) log(n + m))
4. Copying set to vector
Iterates through the set once: O(n + m)
Each push_back is amortized O(1), so overall O(n + m)
5. Overall Time Complexity : O((n+m)log(n+m))  (dominated by set insertion)
O((n+m)log(n+m))(dominated by set insertion)
6. Space Complexity:
set<int> s stores up to (n + m) elements → O(n + m)
vector<int> Union stores up to (n + m) elements → O(n + m)
✅ Total Space Complexity: O(n + m)
*/

//Solution 3: Two Pointers

#include<bits/stdc++.h>
using namespace std;

vector<int>FindUnion(int arr1[], int arr2[], int n, int m){
    int i=0,j=0;  //pointers
    vector<int> Union; //Union vector
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            if(Union.size() == 0 || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;

        } 
        else if (arr1[i] > arr2[j]){
            if(Union.size()== 0 || Union.back() != arr2[j])
                Union.push_back(arr2[j]);
            j++; 
        }
        else { // arr1[i] == arr2[j]
            if (Union.size() == 0 || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
            j++;
        }    
    }
    while(i<n)  //If any element left in arr1
    {
        if(Union.size() == 0 || Union.back() != arr1[i])
            Union.push_back(arr1[i]);
        i++;    
    }

    while( j< m)    //If any elements left in arr2{
    {
        if(Union.size() == 0 || Union.back() != arr2[j])
            Union.push_back(arr2[j]);
        j++;    

    }   
    return Union;
        
}

int main(){
    int n=10, m=7;

    int arr1[] ={1,2,3,4,5,6,7,8,9,10};
    int arr2[]={2,3,4,4,5,11,12};

    vector<int> Union = FindUnion(arr1,arr2,n,m);
    cout<<"Union of arr1 and arr2 is: "<<endl;
    for(auto & val: Union)
        cout<<val<<" ";
    return 0;    

}


/*
Complexity Analysis:
Time Complexity: O(m+n), Because at max i runs for n times and j runs for m times. When there are no common elements in arr1 and arr2 and all elements in arr1, arr2 are distinct. 
Space Complexity : O(m+n) {If Space of Union ArrayList is considered} 
O(1) {If Space of union ArrayList is not considered}
*/

/*
🔹 Time Complexity
Step 1: While loop (while (i < n && j < m))
Both i and j move at most n+m steps total.
Each step does a constant-time check and sometimes a push_back.
👉 O(n+m)

Step 2: Remaining elements (while (i < n) and while (j < m))
Each loop runs for leftover elements in one array.
Together, that’s also at most O(n+m).

Step 3: Printing result

Iterates through the final union (size ≤ n+m).
Adds O(n+m).
✅ Overall Time Complexity = O(n+m)

🔹 Space Complexity
Extra storage:
Union vector
Stores at most all unique elements from both arrays.
Worst case (no overlap) → size = n+m.
👉 O(n+m)

Pointers (i, j) and small variables → O(1)
✅ Overall Space Complexity = O(n+m)
(Auxiliary space is O(1) apart from output storage.)
*/