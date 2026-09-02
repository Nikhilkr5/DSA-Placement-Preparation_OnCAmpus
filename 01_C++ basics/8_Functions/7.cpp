#include<bits/stdc++.h>
using namespace std;

int maxx(int num1,int num2){
    if(num1>num2) return num1;
    else return num2;
}

int main(){
    int num1,num2;
    cin>>num1>>num2;

    int maximum = maxx(num1,num2);
    cout<<"maximum is: "<<maximum<<endl;

    return 0;
}


//use of Standard Library Function(Best Practice)
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1,num2;
    cin>>num1>>num2;

    cout<<"maximum is: "<<max(num1,num2)<<endl;

    return 0;
}

*/