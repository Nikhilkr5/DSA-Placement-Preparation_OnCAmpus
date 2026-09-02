//using recursion


// #include<bits/stdc++.h>
// using namespace std;

// void print(int i){    //void print(int i, int n)

//     if(i<1) return ;
//     cout<<i<<endl;
//     print(i-1);        //print(i-1,n)
// }

// int main(){
//     int n=9;
//     cin>>n;

//     print(n);        //print(n,n)
//     return 0;




// }




/*
Time Complexity: O(N) { Since the function is being called n times, and for each function, we have only one printable line that takes O(1) time, so the cumulative time complexity would be O(N) }

Space Complexity: O(N) { In the worst case, the recursion stack space would be full with all the function calls waiting to get completed and that would make it an O(N) recursion stack space }.
*/



//USING BACKTRACKING

#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
    if(i>n)  return;

    func(i+1,n);
    cout<<i<<endl;

}

int main(){

    int n=9;
    func(1,n);
    return 0;

}


/*
Time Complexity: O(N) { Since the function is being called n times, and for each function, we have only one printable line that takes O(1) time, so the cumulative time complexity would be O(N) }

Space Complexity: O(N) { In the worst case, the recursion stack space would be full with all the function calls waiting to get completed and that would make it an O(N) recursion stack space }

*/




