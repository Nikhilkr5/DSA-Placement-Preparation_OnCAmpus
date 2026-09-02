//vector of pair

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<pair<int,int>> vec ={{1,2},{2,3},{3,4}};

    //for(pair<int,int> p : vec){
    //or
    for(auto p: vec){
        cout<<p.first<<" "<<p.second<<endl;
    }

   

    return 0;

}