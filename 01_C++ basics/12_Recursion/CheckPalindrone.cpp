//Check if the given String is Palindrome or not


//solution 1

#include<bits/stdc++.h>
using namespace std;


bool isPalindrome(string str){
    int start = 0;
    int end = str.length() -1;

    while(start< end){
        if(str[start] != str[end]){
            return false;
        }
    }
}


int main(){

    string s;
    cout<<"Enter a string: ";
    cin>>s;

    if(isPalindrome(s)){
        cout<<"Palindrone";
    }
    else
        cout<<"Not Palindrone";

    return 0;    


    

}