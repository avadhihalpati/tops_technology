// Write a program to calculate the area of circle, rectangle and
// triangleusing Function Overloading
// Rectangle: Area * breadth
// Triangle: ½ *Area*
// breadthCircle: Pi * Area
// *Area

#include <iostream>
#include <cmath>
using namespace std;

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

double calculate_rectangle_area(double length, double breadth) {
    return length * breadth;
}

double calculate_triangle_area(double base, double height) {
    return 0.5 * base * height;
}

double calculate_circle_area(double radius) {
    return M_PI * radius * radius;
}

int main() {
   
    double rectangle_area = calculate_rectangle_area(5, 10);
    double triangle_area = calculate_triangle_area(6, 8);
    double circle_area = calculate_circle_area(3);

    cout << "Area of rectangle: " << rectangle_area << endl;
    cout << "Area of triangle: " << triangle_area << endl;
    cout << "Area of circle: " << circle_area << endl;

    return 0;
}

