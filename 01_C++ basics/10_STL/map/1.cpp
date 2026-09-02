#include<iostream>
#include<map>

using namespace std;


int main (){

    map<string,int> m;

    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphone"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;

    //for each loop can be used to print that data
    // since that data is  pair  kind of the data
    // so auto me pair key p use kar skte hai

    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;

}