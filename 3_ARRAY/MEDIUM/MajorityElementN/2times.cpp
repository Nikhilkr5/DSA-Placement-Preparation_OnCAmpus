// #include<bits/stdc++.h>
// using namespace std;
// int majorityElement(vector<int> v){
//     int n= v.size();

//     for(int i=0;i<n;i++){
//         int cnt =0;
//         for(int j=0;j<n;j++){
//             if(v[j]==v[i]){
//                 cnt++;
//             }
//         }
//         if(cnt> (n/2))
//             return v[i];
//     }
//     return -1;
// }
// int main(){
//     vector<int> arr ={2,2,1,1,1,2,2};
//     int ans = majorityElement(arr);
//     cout<<"The maority element is: "<<ans<<endl;
//     return 0;
    
// }
/*
Time Complexity: O(N2), where N = size of the given array.
Reason: For every element of the array the inner loop runs for N times. 
And there are N elements in the array. So, the total time complexity is O(N2).
Space Complexity: O(1) as we use no extra space.
*/

//Better appproach
#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> v){
    //size of the givn arrray:
    int n = v.size();

    map<int,int> mpp;

    //storing the elements with its occurence:
    for(int i=0;i<n;i++){
        mpp[v[i]]++;        
    }

    //searchijng for the majority element:
    for(auto it: mpp){
        if(it.second >(n/2)){
            return it.first;
        }
    }
    return -1;

}



int main(){
    vector<int> arr ={2,2,1,1,2,2};
    int ans = majorityElement(arr);
    cout<<"the majority elment is: "<< ans<< endl;
    return 0;    
}

