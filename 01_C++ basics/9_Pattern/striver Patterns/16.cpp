#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        //char c =65;
        char c ='A';
        for(int j=0;j<=i;j++){
            cout<<c;
            c++;

        }
        cout<<endl;
    }
}