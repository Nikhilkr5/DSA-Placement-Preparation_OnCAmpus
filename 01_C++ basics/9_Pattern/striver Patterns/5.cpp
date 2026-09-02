#include<iostream>
using namespace std;

void print3(int n){
    for(int i=0;i<n;i++){
        int count =1;
        for(int j=0;j<=i;j++){
            cout<<count<<" ";
            count++;

        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        print3(n);
    }
    return 0;
}
