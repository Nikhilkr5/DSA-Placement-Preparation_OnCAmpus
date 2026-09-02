// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={1,2,3,4,5,6,7,8};
//     int n= sizeof(arr)/sizeof(arr[0]);

    
//     for(int i=0;i<n;i++){

//         if(arr[i]<2) continue;     //skip numbetr <2
        
//         bool isPrime = true;
//         for(int num=2;num*num<=arr[i];num++){
//             if(arr[i]%num == 0){
//                 isPrime = false;
//                 break;
//             }

//         }
//         if(isPrime){
//         cout<<arr[i]<<" ";
        
//     }
    
//     }
//     return 0;


// }

// #include<iostream>
// using namespace std;

// void prime(int num){
//     if(n<2)
//         return;
//     for(int i=2;i*i<num;i++){
//         if(num%i)
//             return;

//     }
//     cout<<num<<" ";    
// }

// int main(){
//     int arr[8] = {2,3,7,1,-11,8,13,12};

//     for(int i=0;i<8;i++){
//         prime(arr[i]);
//     }
//     return 0;
// }




#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int num){
    if(num<2) return false;

    for(int i=2;i*i<num;i++){
        if(num%i == 0)
            return false;
    }
    return true;
}

int main(){
    int arr[5] ={1,2,3,4,5};

    int n=5;

    cout<<"Prime numbers: ";
    for(int i=0;i<n;i++){
        if(isPrime(arr[i])){
            cout<<arr[i]<<" ";
        }
    }
    cout<< endl;
    return 0;
}

