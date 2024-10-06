#include <iostream>
using namespace std;

int main () {
    // Arithmetic operator
    int a = 10, b = 5;

    cout << "sum =" << (a+b) << endl;
    cout << "difference = " << (a-b) << endl;
    cout << "product = " << (a*b) << endl;
    cout << "division = " << (a/b) << endl;
    cout << "modulo = " << (a % b) << endl;

    int c = 10, d = 3;
    cout << (10 / (double)3) << endl;

    // Relational Operator

    cout << (5 < 10) << endl; //true -> 1
    cout << (5 > 10) << endl; //false -> 0
    cout << (5 <= 5) << endl; //true -> 1
    cout << (5 >= 10) << endl; //false -> 0
    cout << (5 == 5) << endl; //true -> 1
    cout << (5 == 10) << endl; //false -> 0
    cout << (5 != 10) << endl; //true -> 1
    cout << (5 != 5) << endl; //false -> 0

    
        // Logical Operator

        cout << ( (3<5) || (3>5) ) << endl;
    
    

    
    return 0;
}

