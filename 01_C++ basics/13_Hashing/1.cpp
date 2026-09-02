#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    //precompute
    int hash[13]={0};        //whatever the maxm size the problem states
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;

    }
    


    int q;
    cin>>q;
    while(q--)   {  //while(q--) → The loop runs as long as the current value of q is not zero.}
        int number;
        cin>>number;

        //fetch
        cout<<hash[number] <<endl;

    }   
    return 0;
}          