// Write a C++ Program to find Area of Rectangle using inheritance

#include <iostream>
using namespace std;
class Shape {
protected:
    float width;
    float height;

public:
    void setDimensions(float w, float h) {
        width = w;
        height = h;
    }
};

class Rectangle : public Shape {
public:
    float calculateArea() {
        return width * height;
    }
};

int main() {
    Rectangle rectangle;
    float rectWidth, rectHeight;
     cout << "Enter the width of the rectangle: ";
     cin >> rectWidth;
     cout << "Enter the height of the rectangle: ";
     cin >> rectHeight;

    rectangle.setDimensions(rectWidth, rectHeight);

    float area = rectangle.calculateArea();
     cout << "Area of the rectangle: " << area <<  endl;

    return 0;
}
