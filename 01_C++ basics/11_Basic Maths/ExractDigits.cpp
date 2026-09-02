#include <iostream>
#include<vector>

#include<algorithm>

using namespace std;
vector<int> extractDigits(int N){

    vector<int> ans;

    while(N>0){
        int lastDigit =N % 10;

        ans.push_back(lastDigit);

        N=N/10;
    }
    reverse(ans.begin(), ans.end());



    return ans;



}


int main(){
    int  N= 987456;
    
    cout<<"N: "<<N<<endl;

    vector<int>digits = extractDigits(N);

    cout<<"Extracted Digits: ";
    for(auto num: digits){
        cout<<num;
    }
    cout<<endl;
    return 0;



}