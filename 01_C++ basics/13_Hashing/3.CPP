//USING MAP

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];

//     }

//     //precompute
//     map<int,int> mpp;               //key is the number so int; if the number goes til 10 to the power 9 or 12,then you can also goout and take  the long because there will be bigger numbers or you can take long long as well depending on the size of  numbers   you can define your keys data type    
//     for(int i=0;i<n;i++){
//         mpp[arr[i]]++;
//     }

//     //note:map stores all the values in the sorted order
//     //can prove it:
//     // for(auto it : mpp){
//     //     cout<<it.first<<" --> "<<it.second<<endl;
//     // }



//     int q;
//     cin>>q;
//     while(q--){
//         int number;
//         cin>>number;

//         //fetch
//         cout<<mpp[number]<<endl;

//     }
//     return 0;
// }

//abouve  you are precomputing there .it's like running a loop 
//or taking the input and then doing the pre compute you can also do this like below showed:
//precomputation can be done while taking the input as well
//it doesn't matter
//it will save one for loop
//that won't cgange anything or that won't make your program super fast
//because time comp:  it's N+N not N*N

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    map<int,int> mpp;                          ////key is the number so int; if the number goes til 10 to the power 9 or 12,then you can also goout and take  the long because there will be bigger numbers or you can take long long as well depending on the size of  numbers   you can define your keys data type    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
        mpp[arr[i]]++;
    }

    

    
                   
    

    



    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;

        //fetch
        cout<<mpp[number]<<endl;

    }
    return 0;
}