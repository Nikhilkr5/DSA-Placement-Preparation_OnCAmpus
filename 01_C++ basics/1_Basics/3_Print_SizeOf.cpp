#include<iostream>
using namespace std;

int main(){
    int num = 500;
    cout<<num<<endl;
    cout<<sizeof(num)<<endl;

    char c ='a';
    cout<<c<<endl;
    cout<<sizeof(c)<<endl;

    double num2 =98.45675;
    cout<<num2<<endl;
    cout<<sizeof(num2)<<endl;

    float d = 1.34;
    cout<<d<<endl;
    cout<<sizeof(d)<<endl;

    bool num3 = 1;
    //bool num3 = true;            //bool can be 0, false , 1 . true
    cout<<sizeof(num3)<<endl;
    
    cout<<"sizes:--int:4, char: 1, double ka size: 8, float ka size: 4 , bool  ka size : 1"<<endl;

    return 0;
}