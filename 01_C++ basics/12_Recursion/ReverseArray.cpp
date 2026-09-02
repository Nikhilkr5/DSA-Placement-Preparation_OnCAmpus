//using an extra array


// #include<bits/stdc++.h>
// using namespace std;

// void printArray(int ans[], int n){
//     cout<<"The reversed array is: "<<endl;

//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";

//     }
// }

// void reverseArray(int arr[], int n){
//     int ans[n];
//     for(int i=0;i<n;i++){      //for(int i=n-1;i>=0;i--)

//         ans[n-i-1] = arr[i];
//     }
//     printArray(ans, n);
// }


// int main(){

//     int n=5;
//     int arr[]={5,4,3,2,1};

//     reverseArray(arr, n);
//     return 0;

// }

/*
Time Complexity: O(n), single-pass for reversing array.

Space Complexity: O(n), for the extra array used.
*/



//space optimised iterative method

// #include<bits/stdc++.h>
// using namespace std;

// void printArray(int arr[], int n){
//     cout<<"the reversed array is: "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
        
//     }

// }


// void reverseArray(int arr[], int n){
//     int p1=0;int p2=n-1;

//     while(p1<p2){
//         swap(arr[p1],arr[p2]);
//         p1++;p2--;

//     }
//     printArray(arr,n);
        
    
// }

// int main(){

//     int n=5;
//     int arr[]= {5,4,3,2,1};
//     reverseArray(arr, n);
//     return 0;

// }

/*
Time Complexity: O(n), single-pass involved.

Space Complexity: O(1) 
*/





// Recursiive  method

// #include<bits/stdc++.h>
// using namespace std;

// void printArray(int arr[], int n){
//     cout<<"The reversed array is: "<<endl;

//     for(int i=0; i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// void reverseArray(int arr[], int start, int end){
//     if(start < end){
//         swap(arr[start], arr[end]);
//         reverseArray(arr,start+1,end-1);
//     }
// }

// int main(){

//     int n=5;
//     int arr[] = {5,4,3,2,1};

//     reverseArray(arr, 0 , n-1);
//     printArray(arr,n);
//     return 0;

// }

/*
Time Complexity: O(n)

Space Complexity: O(1)
*/








//using libbraries 

#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n){
    cout<<"The reversed array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    
    
}
void reverseArray(int arr[],int n){

    reverse(arr,arr+n);


    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    //printArray(arr,n);

}


int main(){
    int n=5;
    int arr[]= {5,4,3,2,1};

    reverseArray(arr,n);
    printArray(arr,n);
    return 0;
}


/*
Time Complexity: O(n)

Space Complexity: O(1)

*/
