// #include<iostream>
// #include<algorithm>

// using namespace std;


// int findGcd(int n1, int n2){
//     int gcd=1;

//     for(int i=0;i<=min(n1,n2);i++){
//         if(n1%i == 0 && n2%i == 0){
//             gcd =i;
//         }
//     }
//     return gcd;

// }
// int main() {
//     int n1=20, n2=15;
//     int gcd = findGcd(n1,n2);

//     cout<<"GCD of "<< n1<<" and " <<n2<<"is"<<gcd<<endl;

//     return 0;

    
// }



//BETTER APPROach:

// #include<iostream>
// using namespace std;


// int FindGcd(int n1, int n2){
    
//     for(int i= min(n1,n2);i>0;i--){
//         if(n1%i==0 & n2%i== 0){
//             return i;
//         }
//     }

//     return 1;
// }


// int main(){
//     int n1 =20, n2=15;

//     int gcd =FindGcd(n1,n2);

//     cout<<"GCD of "<<n1<<" and "<<n2<<" is "<<gcd<<endl;

//     return 0;
// }



//Optimal Approach



//using euclidian algorithm

//can use this:

//but Time Complexity: O(max(a, b)) in the worst case because each subtraction only reduces the number slightly.

//Not efficient for large numbers because many subtractions might be needed.



// #include <iostream>
// using namespace std;

// int gcdSubtraction(int a, int b) {
//     while (a != 0 && b != 0) {
//         if (a > b) {
//             a = a - b;
//         } else {
//             b = b - a;
//         }
//     }
//     return (a == 0) ? b : a;
// }

// int main() {
//     int n1 = 20, n2 = 15;
//     cout << "GCD of " << n1 << " and " << n2 << " is: " << gcdSubtraction(n1, n2) << endl;
//     return 0;
// }


//

/*
More Efficient Version (using Modulus)

Instead of repeatedly subtracting, we can use the modulus operator %.
Formula:  gcd(a,b)=gcd(b,a%b)
*/
//Time Complexity: O(log(min(a,b)))

//Much faster because % reduces the number drastically in fewer steps.

//This is the most common and optimized iterative version.


#include<iostream>
using namespace std;


int findGcd(int a, int b){
    while(a>0 && b>0){

        if(a>b){
            a=a%b;
        }
        else{
            b= b%a;
        }
    }
    if(a==0){
        return b;
    }
    return a;
}

int main(){
    int n1 =20 , n2 =15;

    int gcd = findGcd(n1, n2);
    cout<<"GCD of "<<n1<<" and "<<n2<<" is "<<gcd<<endl;
    return 0;



   
}
