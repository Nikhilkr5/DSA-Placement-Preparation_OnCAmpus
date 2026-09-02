//Reverse String without reverse

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    int left = 0, right = s.size()-1;

    while(left <= right){
        swap(s[left], s[right]);
        left++;
        right--;
    }
    cout<<s;

}