#include<iostream>
#include<algorithm>

using namespace std;


int main(){

    int arr[] = {3,5,1,8,2};

    sort(arr,arr+5);

    

    for(int val: arr){
        cout<<val<<" ";
    }

    cout<<endl;
    return 0;

}
