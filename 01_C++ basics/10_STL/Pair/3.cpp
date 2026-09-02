//vector of pair
//insert in vector



#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<pair<int,int>> vec ={{1,2},{2,3},{3,4}};

    vec.push_back({4,5});    //insert
    
    vec.emplace_back(4,5);   //in place back objects create at the time of insertion

    //for(pair<int,int> p : vec){
    //or
    for(auto p: vec){
        cout<<p.first<<" "<<p.second<<endl;
    }

   

    return 0;

}