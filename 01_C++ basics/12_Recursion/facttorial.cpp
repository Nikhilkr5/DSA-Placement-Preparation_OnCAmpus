//Iterative solution:



// #include<bits/stdc++.h>
// using namespace std;


// int factorial(int x){
//     int ans =1;

//     for(int i=1;i<=x;i++){

//         ans = ans *i;

//     }
//     return ans;

// }

// int main(){
//     int x=5;

//     int result = factorial(x);

//     cout<<"the factorial of "<<x<<" is "<<result;
//     return 0;
// }



//Recursive solution:

#include<bits/stdc++.h>
using namespace std;


int factorial(int n){

    if(n==0){
        return 1;
    }

    return n *factorial(n-1);
}

int main(){

    int n=3;

    cout<<factorial(n)<<endl;

    return 0;
}