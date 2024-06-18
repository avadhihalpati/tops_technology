//  Write a programto find the multiplication values and the cubic values
// usinginline function

#include<iostream>
#include<conio.h>
using namespace std;

inline int multiply(int x, int y) {
    return x * y;
}

inline int cube(int x) {
    return x * x * x;
}

int main() {

    int num;
     cout << "Enter a number: ";
     cin >> num;

    int multiResult = multiply(num, 2);
     cout << "Multiplication value: " << multiResult <<endl;

    int cubicResult = cube(num);
     cout << "Cubic value: " << cubicResult <<endl;

    return 0;
}
