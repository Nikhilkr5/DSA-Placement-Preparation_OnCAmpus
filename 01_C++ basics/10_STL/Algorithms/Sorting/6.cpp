//custom logic build
// we  want to sort on the basis of 2nd vaue of the pair but if the second value is same then comparison should be on the basis of first
//{3,1} {2,1} { 7,1} { 5,2}
//custom comparator
//comparator -->boolean function return boolean based on some comparison

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool comparator(pair<int, int> p1, pair<int,int>p2){
    if(p1.second< p2.second) return true;
    if(p1.second > p2.second) return false;
    if(p1.first < p2.first) return true;
    else return false;


}


int main(){

    vector<pair<int, int>> vec = { {3,1},{2,1},{7,1},{5,2}};


    

    sort(vec.begin(),vec.end(),comparator);

    

    for(auto p: vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
   

   
    return 0;

}
