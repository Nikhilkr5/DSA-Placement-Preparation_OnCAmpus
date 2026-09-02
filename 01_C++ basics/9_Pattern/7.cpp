#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n; 
   

    for(int i=0;i<n;i++){
        char c='a'+i;
        for(int j=0;j<n;j++){
            cout<<c<<" ";
        }
        cout<<endl;
    }
}