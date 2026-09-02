#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age:  "<<endl;
    cin>>age;

    if(age>=18){
        cout<<"adult"<<endl;    
    }
    else {
        cout<<"Not adult"<<endl;
    }
    return 0;
}
