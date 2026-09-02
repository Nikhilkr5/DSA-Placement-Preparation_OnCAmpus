#include<bits/stdc++.h>
using namespace std;

void printName(string name){
    cout<<"Hey"<<" "<<name;
    cout<<endl;

}

int main()
{
    string name1;
    cin>>name1;

    printName(name1);

    string name2;
    cin>>name2;
    printName(name2);
    
    return 0;


}


/*
#include<bits/stdc++.h>
using namespace std;

void printName(string name){
    cout<<"Hey"<<" "<<name;
    cout<<endl;
}

int main()
{
    string name1;
    cin>>name1;   // Takes input until space
    printName(name1);

    string name2;
    cin>>name2;   // Again takes input until space
    printName(name2);

    // After using cin >> name2, a newline character '\n'
    // remains in the input buffer.
    // If we directly use getline(), it will read that leftover
    // newline and return an empty string.
    //
    // So we use cin.ignore() to clear the entire input buffer
    // until the newline character is found.
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string name3;
    getline(cin,name3);   // Now it correctly reads full line (including spaces)
    printName(name3);

    return 0;
}



*/