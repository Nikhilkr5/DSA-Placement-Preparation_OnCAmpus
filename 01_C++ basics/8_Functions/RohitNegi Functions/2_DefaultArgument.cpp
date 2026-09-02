#include<bits/stdc++.h>
using namespace std;

void prints(int num = 5){   //default arguument
    for(int i=1;i<=num;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    int num;
    cin>>num;
    prints(num);
    prints();   // if any argument is not given, then it is run according to default argument

    return 0;
}