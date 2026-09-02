//Solution:  Using Loop

// #include<iostream>
// using namespace std;
// void solve(int n){
//     int sum =0;
//     for(int i=1;i<=n;i++){
//         sum+=i;

//     }
//     cout<<"The sum of the first "<<n<<" numbers is : "<<sum<<endl;
// }

// int main(){

//     solve(6);
//     solve(7);


// }



/*
Time Complexity: O(N)

Space Complexity: O(1)


*/





//solution: Using th eformula 

// #include<bits/stdc++.h>
// using namespace std;

// void solve(int n){
//     int sum = n *(n+1)/2;
//     cout<<"The sum of the first "<<n<<" numbers is: "<<sum<<endl;
// }

// int main(){
//     solve(5);
//     solve(6);
//     return 0;

// }

/*
Time Complexity: O(1)

Space Complexity: O(1)


*/








//solution=tion:Recursive way:
//parametrise way and functional way


// //Parametrised way

// #include<bits/stdc++.h>

// using namespace std;

// void solve(int i,int sum){

//     if(i<1){
//         cout<<sum<<endl;
//         return;
//     }

//     solve(i-1,sum+i);


// }

// int main(){

//     int n=9;

//     solve(n,0);
//     return 0;

// }

/*
Time Complexity: O(N) { Since the function is being called n times, and for each function, we have only one printable line that takes O(1) time, so the cumulative time complexity would be O(N) }

Space Complexity: O(N) { In the worst case, the recursion stack space would be full with all the function calls waiting to get completed and that would make it an O(N) recursion stack space }.
*/




//Functional way

#include<iostream>
using namespace std;

int func(int n){
    if(n==0){
        return 0;
    }
    return n + func(n-1);
}


int main(){
     
    int n=9;
    cout<<func(n)<<endl;
    return 0;
}

/*
Time Complexity: O(N) { Since the function is being called n times, and for each function, we have only one printable line that takes O(1) time, so the cumulative time complexity would be O(N) }
*/






