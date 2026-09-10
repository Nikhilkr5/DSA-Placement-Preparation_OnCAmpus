#include<bits/stdc++.h>
using namespace std;


int binarySearch(vector<int>& arr, int low , int high,int target){
    while(low <= high){
        int guess = low + (high - low)/2;

        if(arr[guess] == target){
            return guess;
        }
        else if(arr[guess] < target){
            low = guess + 1;
        }
        else{
            high = guess - 1;
        }
    }
    return -1;
}


int searchInfiniteArray(vector<int>& arr, int target){
    int low =0;
    int high = 1;

    //Find a suiable search range
    while(arr[high] < target){
        low =high;
        high = high * 2;
    }

    //Binary search in the range
    return binarySearch(arr, low, high, target);
}

int main(){
    vector<int> arr = {
        2, 3, 5, 7, 9, 12, 15, 18,
        21, 25, 30, 35, 40, 45, 50
    };

    int target;
    cin>>target;

    int index= searchInfiniteArray(arr, target);

    cout<<index<<endl;
}