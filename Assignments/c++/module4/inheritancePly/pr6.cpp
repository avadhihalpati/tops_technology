//  Write a C++ Program to show access to Private Public and Protected 
// using Inheritance

#include <iostream>
using namespace std;

class Base {
private:
    int privateMember;

protected:
    int protectedMember;

public:
    int publicMember;

    Base() : privateMember(1), protectedMember(2), publicMember(3) {}

    void displayBaseMembers() const {
        cout << "Base Class Members:" << endl;
        cout << "Private Member: " << privateMember << endl;
        cout << "Protected Member: " << protectedMember <<endl;
        cout << "Public Member: " << publicMember <<endl;
    }
};

class Derived : public Base {
public:
    void accessBaseMembers() {
    
        cout << "Derived Class Access to Base Class Members:" <<endl;
        cout << "Public Member (Accessible): " << publicMember <<endl;
        cout << "Protected Member (Accessible): " << protectedMember <<endl;
    
    }
};

int main() {
    Derived derivedObject;

 cout << "Access Public Members from Derived Class Object:" << endl;
 cout << "Public Member (Accessible): " << derivedObject.publicMember << endl;

    derivedObject.accessBaseMembers();

    return 0;
}
