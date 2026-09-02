//Decimal to Binary Conversion

#include<bits/stdc++.h>
using namespace std;

int decToBinary(int decNum){
    int ans =0, pow =1;

    while(decNum>0){
        int rem = decNum %2;
        decNum /=2;

        ans += (rem * pow); //  eg for decnum =5; we have ans = 1*100 + 0*10 + 1*1 =101
        pow *=10;
    }
    return ans;
}

int main(){
    int decNum =50;
    cout<<decToBinary(decNum)<<endl;
    return 0;

}

