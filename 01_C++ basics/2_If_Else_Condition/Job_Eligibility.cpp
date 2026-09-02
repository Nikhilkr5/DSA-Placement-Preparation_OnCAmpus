#include<iostream>
using namespace std;

int main(){
    int age;
    cin>>age;
    if(age<18){
        cout<<"not eligible for job"<<endl;
    }
    else if(age<=57){
        cout<<"eligible for job"<<endl;
        if(age>=55){
            cout<<"but retirement soon"<<endl;
        }
    }
    else{
        cout<<"retirement time";
    }
    return 0;    

}

