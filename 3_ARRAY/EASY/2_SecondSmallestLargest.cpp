//Solution 1: (Brute Force) [this approach only works if there are no duplicates]


// #include<bits/stdc++.h>
// using namespace std;

// void getElements(vector<int>& arr){
//     sort(arr.begin(),arr.end());

//     int secondsmall = *(arr.begin()+1);  //arr.begin() and arr.end() return iterators, not integers.
//     int secondlarger = *(arr.end()-2);   // -1 = last, -2 = second last
    
    
//     cout<<"Second smallest element : "<<secondsmall<<endl;
//     cout<<"Second largest is : "<<secondlarger<<endl;
// }

// int main(){
//     vector<int> arr1 ={2,5,1,3,0};

//     getElements(arr1);    

//     return 0;

// }


//don't use like this:
//After sorting, the vector will be permanently changed. If you want original order, consider making a copy before sorting.
/*
Complexity Analysis:
Sorting: O(n log n)
Accessing elements: O(1)
Total Time Complexity: O(n log n)
Auxiliary Space: O(log n) (recursion stack of std::sort)
Total Space: O(n) (input vector)

Space Complexity = Auxiliary Space
so total space compl : O(n log n)

Do not count input array/vector.
Because the interviewer assumes the input already exists — what they care about is how much extra memory your algorithm consumes
.

Always report auxiliary space.
If interviewer asks “total memory usage”, then explain: “Input is O(n), my algorithm adds O(1) extra space”.
This shows maturity in understanding.
*/



// #include<bits/stdc++.h>
// using namespace std;

// void getElements(int arr[],int n)
// {
//     if(n==0|| n==1)                          //edge case when only one or no element is present in array
//         cout<<-1<<" "<<-1<<endl;   
//     sort(arr,arr+n);
//     int small=arr[1];
//     int large= arr[n-2];

//     cout<<"Second smallest is: "<<small<<endl;
//     cout<<"Second largest is : "<<large<<endl;
    
// }

// int main(){
//     vector<int>arr= {1,2,4,6,7,5};
//     int n= sizeof(arr)/sizeof(arr[0]);
    
//     return 0; 
// }

/*
Time Complexity:
Edge case check:
if (n == 0 || n == 1) → O(1)

Sorting:
sort(arr, arr+n) → uses Introsort in C++ STL.

Best case: O(n log n)
Average case: O(n log n)
Worst case: O(n log n)

🔑 Sorting dominates the complexity.

Accessing second smallest & largest:
Constant-time lookups → O(1)

✅ Final Time Complexity: O(nlogn)


Space Complexity: 
sort() in STL uses Introsort, which is a mix of Quicksort, Heapsort, and Insertion sort.

Auxiliary space:
Worst case recursion depth for Quicksort = O(log n)
No extra array created (sorting is in-place).

✅ Final Space Complexity: O(logn)
Final Answer:
Time Complexity: O(n log n)
Space Complexity: O(log n)
*/




//Solution 2(Better Solution):

// #include<bits/stdc++.h>
// using namespace std;

// void getElements(int arr[], int n)
// {
//     if(n==0 || n==1) {   //if(n<2)
//         cout<<-1<<-1<<endl;
//         return;
//     }
//     int small =INT_MAX , second_small =INT_MAX;
//     int large = INT_MIN, second_large= INT_MIN;
//     int i;
//     for(i=0;i<n;i++)
//     {
//         small =min(small,arr[i]);
//         large =max(large, arr[i]);
        
//     }
//     for( i=0;i<n;i++){
//         if(arr[i]<second_small && arr[i]!=small)
//             second_small=arr[i];
//         if(arr[i]>second_large && arr[i]!=large)
//             second_large = arr[i];

//     }

        // Check if second smallest/largest exist
        // if (second_small == INT_MAX)
        //     second_small = -1;
        // if (second_large == INT_MIN)
        //     second_large = -1;



//     cout<<"Second smallest is: "<<second_small<<endl;
//     cout<<"Decond largest is: "<<second_large<<endl;

// }

// int main(){
//     int arr[] ={1,2,4,6,7,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     getElements(arr,n);

//     return 0;

// }

/*
Time Complexity: O(N), We do two linear traversals in our array
Space Complexity: O(1)
*/
/*
Time Complexity:
First loop → find small and large
Iterates over n elements → O(n)

This loop runs n times.
Each iteration does constant work → O(1).
Time = O(n)


Second loop → find second_small and second_large
Iterates over n elements → O(n)

This also runs n times.
Each iteration does constant comparisons → O(1).
Time = O(n)


Total Time Complexity:
O(n) + O(n) = O(n)
✅ Linear time,


Space Complexity:
Extra variables used: small, second_small, large, second_large, i→ all O(1) extra space.

Input array is not copied.

No extra arrays or data structures used
Space Complexity: O(1) (constant space)
*/



//Solution 3(Best Solution)   OPTIMAL SOLUTION:
/*
In the previous solution, even though we were able to bring down
the time complexity to O(N), we still needed to do two traversals
to find our answer. Can we do this in a single traversal by using 
smart comparisons on the go?
*/



#include<bits/stdc++.h>
using namespace std;
int secondSmallest(int arr[],int n)
{
    if(n<2)
        return -1;
    int small = INT_MAX;
    int second_small = INT_MAX;
    int i;
    for(i = 0; i < n; i++) 
    {
       if(arr[i] < small)
       {
          second_small = small;
          small = arr[i];
       }
       else if(arr[i] < second_small && arr[i] != small)
       {
          second_small = arr[i];
       }
    }
   return second_small;     
}
int secondLargest(int arr[],int n)
{
	if(n<2)
	return -1;
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for (i = 0; i < n; i++) 
    {
        if (arr[i] > large) 
        {
            second_large = large;
            large = arr[i];
        }
 
        else if (arr[i] > second_large && arr[i] != large) 
        {
            second_large = arr[i];
        }
    }
    return second_large;                
}

int main() {
    int arr[]={1,2,4,7,7,5};  
    int n=sizeof(arr)/sizeof(arr[0]);
        int sS=secondSmallest(arr,n);
        int sL=secondLargest(arr,n);
    cout<<"Second smallest is "<<sS<<endl;
    cout<<"Second largest is "<<sL<<endl;
    return 0;
}

// Time Complexity: O(N), Single-pass solution

// Space Complexity: O(1)

/*
Time Complexity
1. secondSmallest()

Single for-loop: for(i = 0; i < n; i++) → O(n)

Each iteration does constant-time comparisons and assignments → O(1) per iteration
✅ Total for secondSmallest():𝑂(𝑛)

2. secondLargest()

Same reasoning → O(n)

3. Overall

Both functions are called in main() → 2 × O(n) = O(n)

✅ Final Time Complexity: O(n)

Space Complexity:
Only a few integer variables are used in each function (small, second_small, large, second_large, i) → O(1) auxiliary space.
No extra arrays or recursion used.
✅ Final Space Complexity: O(1)
*/

/*
Note:

This is the most efficient approach for finding second smallest and second largest in a single pass each.
You could further combine both in a single pass to improve slightly, still O(n) time but just one loop over the array.
I can write that combined one-pass version for you, if you want. It will find both second smallest and second largest in just one iteration.
*/

/*
#include <bits/stdc++.h>
using namespace std;

void secondSmallestLargest(int arr[], int n, int &second_small, int &second_large) {
    if (n < 2) {
        second_small = -1;
        second_large = -1;
        return;
    }

    int small = INT_MAX, large = INT_MIN;
    second_small = INT_MAX;
    second_large = INT_MIN;

    for (int i = 0; i < n; i++) {
        // Update smallest and second smallest
        if (arr[i] < small) {
            second_small = small;
            small = arr[i];
        } else if (arr[i] != small && arr[i] < second_small) {
            second_small = arr[i];
        }

        // Update largest and second largest
        if (arr[i] > large) {
            second_large = large;
            large = arr[i];
        } else if (arr[i] != large && arr[i] > second_large) {
            second_large = arr[i];
        }
    }

    // Handle cases when second smallest/largest doesn't exist
    if (second_small == INT_MAX) second_small = -1;
    if (second_large == INT_MIN) second_large = -1;
}

int main() {
    int arr[] = {1, 2, 4, 7, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sS, sL;

    secondSmallestLargest(arr, n, sS, sL);

    cout << "Second smallest is " << sS << endl;
    cout << "Second largest is " << sL << endl;

    return 0;
}

*/