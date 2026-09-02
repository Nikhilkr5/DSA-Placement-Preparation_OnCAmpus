//reverse function
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;



int main(){

    vector<int> vec = { 1, 2, 3, 4, 5};


    

    

    reverse(vec.begin(), vec.end());

    for(auto val: vec){
        cout<<val<<endl;
    }
    
   

   
    return 0;

}
