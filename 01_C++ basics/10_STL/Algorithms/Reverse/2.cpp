//reverse function

//reverse by range


#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;



int main(){

    vector<int> vec = { 1, 2, 3, 4, 5};    

    

    

    reverse(vec.begin()+1, vec.begin()+3);

    for(auto val: vec){
        cout<<val<<" ";
    }
    cout<<endl;
    
   

   
    return 0;

}
