#include<iostream>
using namespace std;

int main(){
    //pair<int,int> p ={1,5};
    //pair<string, int> p={"shradha",5};
    pair<int, pair<char,int>> p={1,{'a',3}};
        cout<<p.first <<endl;
        cout<<p.second.first<<endl;
        cout<<p.second.second<<endl;

        return 0;

    
}

