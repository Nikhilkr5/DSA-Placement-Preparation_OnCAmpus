#include<iostream>
using namespace std;
int main(){
    int n; 
    cin>>n;

    for(int i=0;i<n;i++){
        char c='A';
        for(int j=n;j>i;j--){
            cout<<c;
            c++;
        }
        cout<<endl;
    }


}