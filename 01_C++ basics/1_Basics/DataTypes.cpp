#include<bits/stdc++.h>
using namespace std;

int main(){
    // int x=10;
    // cout<<x;


    // long x2  = 100;
    // cin>>x2;

    // long long x3=999999;
    // cin>>x3;
   

    // float  x4=5.6;
    // float y=5;
    // cout<<x4<<" "<<y;

    // string s;
    // cin>>s;
    // cout<<s<<endl;

    /*
    cin >> s reads the first word (e.g., "Hello").

The remaining part of the line (including the \n) stays in the buffer.
getline(cin, s2) then starts reading from where cin >> s left off:
The first thing it sees is the leftover newline → so it stops immediately → s2 becomes empty.
That’s why it looks like s2 "skips", but in reality, it's just reading an empty line because of the leftover \n.


Correct Way to Fix:

Add

cin.ignore();



Pressing Enter adds \n

cin >> leaves \n in buffer

getline() stops at \n

So it reads empty string

cin.ignore() removes that leftover newline


*/



    //cin.ignore();   // removes one character leftover
    

    // string s2;
    // getline(cin,s2);
    // cout<<s2;

    char ch;
    cin>>ch;
    cout<<ch;

    char chh ='g';
    cin>>chh;
    cout<<chh;

    return 0;

    

}
