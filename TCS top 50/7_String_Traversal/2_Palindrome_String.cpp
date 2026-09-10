//Pattern:  Reverse + Compare
/*
Example:  madam
Reverse:  madam
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    string temp = s;

    reverse(temp.begin(), temp.end());

    if(s == temp){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }

    return 0;

}

/*
Complexity::::::
Time: O(n)
Space: O(n) for temp
*/