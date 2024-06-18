// Write a program to Mathematic operation like Addition, Subtraction,
// Multiplication, Division Of two number using different parameters and
// Function Overloading


#include <iostream>
using namespace std;

class MathOperations {
public:
   
    int operate(int a, int b) {
        return a + b;
    }
    int operate(int a, int b, char) {
        return a - b;
    }

    double operate(double a, double b) {
        return a * b;
    }
    double operate(double a, double b, char) {
        if (b != 0) {
            return a / b;
        } else {
            cerr << "Error: Division by zero!" << endl;
            return 0.0; 
        }
    }
};

int main() {
    MathOperations calculator;

    int resultAdditionInt = calculator.operate(5, 3);
    cout << "Addition of 5 and 3 (int): " << resultAdditionInt << endl;

    int resultSubtractionInt = calculator.operate(5, 3, '-');
    cout << "Subtraction of 5 and 3 (int): " << resultSubtractionInt << endl;

    double resultMultiplicationDouble = calculator.operate(2.5, 3.5);
    cout << "Multiplication of 2.5 and 3.5 (double): " << resultMultiplicationDouble << endl;

    double resultDivisionDouble = calculator.operate(10.0, 2.0, '/');
    cout << "Division of 10.0 by 2.0 (double): " << resultDivisionDouble << endl;

    double resultDivisionByZero = calculator.operate(5.0, 0.0, '/');

    return 0;
}
