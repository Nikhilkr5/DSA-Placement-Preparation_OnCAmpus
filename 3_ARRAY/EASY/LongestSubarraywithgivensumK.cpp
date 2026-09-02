//Naive approach (Brute force appproach)

#include<bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int> &a, long long k){
    int n= a.size();

    int len=0;
    for(int i=0;i<n;i++){//starting index
        for(int j=i;j<n;j++){// ending index
            //add al the elemenets of
            //subarray = a[i.....j]:
            long long s=0;
            for(int K=i;K<=j;K++){
                s +=a[K];
            }

            if(s == k)
                len= max(len,j-i+1);

        }
    }
    return len;

}
int main(){
    vector<int> a ={2,3,5,1,9};
    long long k=10;
    int len = getLongestSubarray(a, k);
    cout<<"The length of the longest subarray is: "<<len<<"\n";
    return 0;
}
/*
Time Complexity: O(N3) approx., where N = size of the array.
Reason: We are using three nested loops, each running approximately N times.
Space Complexity: O(1) as we are not using any extra space.
*/

//OPTImizing he naive approach(Using two loops):


#include<bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int> &a, long long k){
    int n= a.size();

    int len = 0;
    for(int i=0;i<n;i++){   //starting index
            long long s =0;     //Sum variable
        for(int j=i;j<n;j++){    //Sum Variable
            //add the current element to
            //the subarray a[i.....j-1]:
            s += a[j];

            if(s==k )
                len = max(len, j-i+1);
        }
    }
    return len;
}

int main(){
    vector<int> a ={2,3,5,1,9};
    long long k=10;
    int len = getLongestSubarray(a,k);
    cout<<"This length of te longest subarray is: "<<len<<"\n";
    return 0;    
}


//BETTER APPROACH (Using Hashing):

