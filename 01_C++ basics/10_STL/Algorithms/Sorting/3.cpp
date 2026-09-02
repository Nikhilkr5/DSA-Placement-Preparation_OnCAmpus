#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){

    vector<int> vec ={ 3,5,1,8,2} ;

    

    sort(vec.begin(),vec.end(), greater<int>());
    //greater<int>() → a predefined comparator from <functional> that tells sort() to arrange elements in descending order instead of ascending.

    

    for(int val: vec){
        cout<<val<<" ";
    }

    cout<<endl;
    return 0;

}
