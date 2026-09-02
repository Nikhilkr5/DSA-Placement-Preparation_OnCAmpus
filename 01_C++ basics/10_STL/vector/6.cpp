//if we want to construct a vector such that we want to tell the size and we want to keep the same values in the whole vector
// so instaed of repeating that value use the syntax 




#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec(10,-1); // we will have use and importance inin dynamic programming - tabulation DP[][]
   

    for(int val : vec) {
        cout<< val << " ";
    }
    cout<<endl;
    
   
    return 0;


}