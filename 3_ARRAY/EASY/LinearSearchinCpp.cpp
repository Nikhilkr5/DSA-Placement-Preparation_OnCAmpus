//Linear search in c++

#include<bits/stdc++.h>
using namespace std;
int search(vector<int> & arr,int num){
    for(int i=0;i<arr.size();i++){
        if(arr[i]== num)
            return i;   //return index if found

    }
    return -1;
}

int main(){
    vector<int>arr ={1,2,3,4,5};
    int num =4;

    int val = search(arr,num);

    if(val !=-1)
        cout<<"Element "<<num<<" found at index "<<val<<endl;
    else
        cout<<"Element "<<num<<" not found in array"<<endl;
    
    return 0;

    
}

//Time Complexity: O(n), where n is the length of the array.
//Space Complexity: O(1)