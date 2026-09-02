#include<iostream>
using namespace std;

int main(){
//     int num = 'A';
//     cout<<num<<endl;         //can also write cout<<(num)

//     char num2 = 65;
//     cout<<num2<<endl;
//     return 0;
// }



    //int to char
    int num = 66;
    char c1 = (char)num;
    cout << "Int " << num << " -> char: " << c1 << endl << endl;

    // 3) float <-> int
    float f = 5.9;
    int n1 = (int)f;
    cout << "Float " << f << " -> int: " << n1 << endl;

    int val = 12;
    float f1 = (float)val;
    cout << "Int " << val << " -> float: " << f1 << endl << endl;

    // 4) bool <-> int
    bool flag = true;
    int val1 = (int)flag;
    cout << "Bool " << flag << " -> int: " << val1 << endl;

    int zero = 0;
    bool b1 = (bool)zero;
    cout << "Int " << zero << " -> bool: " << b1 << endl << endl;

    // 5) long <-> double
    long L = 100000;
    double d1 = (double)L;
    cout << "Long " << L << " -> double: " << d1 << endl;

    double d2 = 12345.67;
    long L2 = (long)d2;
    cout << "Double " << d2 << " -> long: " << L2 << endl;

    cout << "\n===== End of Typecasting Examples =====\n";

    return 0;
}
