


//For 3 digit No
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int original = n;
//     int sum =0;

//     while(n != 0){
//         int digit = n % 10;
//         sum += digit * digit * digit;
//         n /= 10;
//     }

//     if(original == sum){
//         cout<< "Armstrong";
//     }
//     else{
//         cout<<"Not Armstrong";
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int original = n;
    int digits = to_string(n).length();
    int sum =0;

    while(n >0){
        int digit = n%10;
        int power =1;

        for(int i =0;i<digits;i++){
            power *= digit;
        }

        sum += power;
        n/=10;
    }
    if(sum == original){
        cout<<"Yes, Armstrong";
    }
    else{
        cout<<"No";
    }
    return 0;
}

/*
T.C: O(d ^2)
S.C: O(!)
*/