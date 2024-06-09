#include <iostream>
using namespace std;

int main() {
    
    double a, b;
    cout << "Enter the value of variable a: ";
    cin >> a;
    cout << "Enter the value of variable b: ";
    cin >> b;

    double* pa = &a;
    double* pb = &b;

    if (*pa > *pb) {
        *pa += 7;  
        *pb -= 3;  
    }
    else {
        *pb += 7;  
        *pa -= 3;  
    }

    cout << "Value of variable a: " << a << endl;
    cout << "Value of variable b: " << b << endl;

    return 0;
}

