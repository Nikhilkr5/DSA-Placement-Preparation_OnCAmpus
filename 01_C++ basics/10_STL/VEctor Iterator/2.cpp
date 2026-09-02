#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec ={1, 2, 3, 4, 5};
    

    //forward loop
    // vector<int>:: iterator it;
    // for(it =vec.begin(); it!= vec.end(); it++) {
    //     cout<< *(it) << " ";

    // }

    //reverse loop //backward loop
    // vector<int> :: reverse_iterator it;
    // for(it = vec.rbegin(); it!=vec.rend();it++){
    //     cout<< *(it) <<" ";

    // }


    //for(vector<int> :: reverse_iterator it = vec.rbegin(); it!=vec.rend();it++){   //khatarnak
    for(auto it = vec.rbegin(); it!=vec.rend();it++){     // hammra c++ smart jo h
        cout<< *(it) <<" ";

    }


    cout<<endl;
    return 0;



}
