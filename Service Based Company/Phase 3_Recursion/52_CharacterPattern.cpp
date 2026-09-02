//Character Pattern 

//For n = 3

// A
// AB
// ABC

#include<bits./stdc++.h>
using namespace std;

void printChars(int n){
    if(n == 0)
        return;
    
    printChars(n - 1);
    
    for(char ch = 'A'; ch <'A' + n; ch++){
        cout<<ch;
    }

    cout<<"\n";
}

int main(){
    int n;
    cin>>n;

    printChars(n);

    return 0;
}

/*
TC: O(n²)
SC: O(n)
*/