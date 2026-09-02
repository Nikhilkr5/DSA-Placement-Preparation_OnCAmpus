#include<iostream>
using namespace std;

int main(){
    int num = 500;
    cout<<num<<endl;

    char c ='a';
    cout<<c<<endl;

    double num2 =98.45675;
    cout<<num2<<endl;

    float d = 1.34;
    cout<<d<<endl;

    return 0;
}


/*
you cannot declare two variables with the same name in the same scope, even if the types are different (int vs double). 
It will cause a compilation error.

 But you can reuse the name in a different scope, like inside a block ({}) or a different function.


 example :
 int main() {
    int num = 5;
    cout << "int: " << num << endl;

    {
        double num = 7.8; // ✅ valid in a new block
        cout << "double: " << num << endl;
    }

    cout << "int again: " << num << endl;

    return 0;
}

same variable name in same scope is not allowed
same name in different scopes are allowed
*/