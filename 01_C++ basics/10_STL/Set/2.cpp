#include<iostream>
#include<set>

using namespace std;

int main(){

    set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    //s.insert(4);
    //s.insert(5);

    //s.insert(6);
    

    cout<<"lower_bound = "<<*(s.lower_bound(4))<<endl;  //return garbage value or 0 but here 3 because UB (undefined behaviour) tricking you
    
    for(auto val: s){
        cout<< val<<"  ";
    }
    cout<<endl;
    return 0;

}
