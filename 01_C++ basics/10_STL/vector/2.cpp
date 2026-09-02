//vector pe loop chalane ke liye , we can simply use for each loop

//For-each Loop (Range-based for):
//Introduced in C++11, it allows easy iteration over containers (like vector, set, unordered_set, map, etc.).


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

    for(int val : vec) {
        cout<< val << " ";
    }
    cout<<endl;
    
   
    return 0;


}