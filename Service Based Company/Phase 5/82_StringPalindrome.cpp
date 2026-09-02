#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    getline(cin,s);

    bool palindrome =true;
    int left =0, right = s.size() -1;

    while(left < right){
        if(s[left] != s[right]){
            palindrome = false;
            break;
        }
        left++;
        right--;
    }


    cout<< (palindrome ? "Yes" : "No");

    return 0;
}
