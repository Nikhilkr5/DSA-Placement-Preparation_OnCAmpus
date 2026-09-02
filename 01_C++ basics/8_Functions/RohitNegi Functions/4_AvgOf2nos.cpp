#include<iostream>
using namespace std;

int avgTwoNum(int num1, int num2)
{
    int sum = num1 + num2;
    int avg = sum/2;

    return  avg;
}
int main(){
    int num1, num2;
    cout<<"Enter Num1: ";
    cin>>num1;
    cout<<"Enter num2: ";
    cin>>num2;

    int result = avgTwoNum(num1,num2);
    cout<<result;

    return 0;

}