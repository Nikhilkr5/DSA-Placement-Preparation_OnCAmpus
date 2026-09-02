// push_back and emplace_back:  basically to insert the data at the last
//difference is there in the working , we will learn later

//pushback assume that whatever type of data we want to store in our vector ,we are already getting it in the same type
//while emplace_back in place object ko cretae krta hai
//we will understandd this while reading pairs

//pop_back --> used to delete the data of last index of the vector


#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;  // currently vector empty so size is 0
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6);

    vec.pop_back();

    for(int val : vec) {
        cout<< val << " ";
    }
    cout<<endl;
    
   
    return 0;


}