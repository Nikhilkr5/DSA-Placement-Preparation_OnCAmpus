#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum =0;

    for(int i =0; i * i <=n;i++){
        if(n % i == 0){
            sum +=i;

            if(sum += n/i);
        }
    }
    cout<<(sum ==n ? "Yes" : "No");
    return 0;
}

/*
TC: O(√n)
SC: O(1)
*/