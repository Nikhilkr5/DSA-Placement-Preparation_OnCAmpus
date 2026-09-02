//if lowercase letters

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cin>>s;

//     //precompute
//     int hash[26]={0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i]-'a']++;

//     }


//     int q;
//     cin>>q;
//     while(q--){
//         char c;
//         cin>>c;

//         //fetch
//         cout<<hash[c-'a']<<endl;
//     }
//     return 0;
// }



//if there is uppercase

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    //precompute
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'A']++;

    }


    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;

        //fetch
        cout<<hash[c-'A']<<endl;
    }
    return 0;
}





//if question does not let you know that it has just lower case letters
//in this case, we know that  the number of characters that exist is 256
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cin>>s;

//     //precompute
//     int hash[256]={0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i]]++;

//     }


//     int q;
//     cin>>q;
//     while(q--){
//         char c;
//         cin>>c;

//         //fetch
//         cout<<hash[c]<<endl;
//     }
//     return 0;
// }

