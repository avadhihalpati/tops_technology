//  Write a C++ Program to illustrates the use of Constructors in multilevel
// inheritance

#include <iostream>

class Grandparent {
public:
    Grandparent() {
        std::cout << "Grandparent Constructor" << std::endl;
    }
};

class Parent : public Grandparent {
public:
    Parent() {
        std::cout << "Parent Constructor" << std::endl;
    }
};

class Child : public Parent {
public:
    Child() {
        std::cout << "Child Constructor" << std::endl;
    }
};

int main() {
    Child childObject;

    return 0;
}
