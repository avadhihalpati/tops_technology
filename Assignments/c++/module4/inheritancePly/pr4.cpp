// Write a C++ Program display Student Mark sheet using Multiple inheritance

#include <iostream>
#include <string>
using namespace std;

class PersonalInfo {
protected:
     string name;
    int age;

public:

    void inputPersonalInfo() {
         cout << "Enter name: ";
         cin >> name;
         cout << "Enter age: ";
         cin >> age;
    }

  
    void displayPersonalInfo() const {
         cout << "Name: " << name <<  endl;
         cout << "Age: " << age <<  endl;
    }
};

class AcademicInfo {
protected:
    float marks;

public:
    
    void inputAcademicInfo() {
         cout << "Enter marks: ";
         cin >> marks;
    }

    void displayAcademicInfo() const {
         cout << "Marks: " << marks <<  endl;
    }
};


class StudentMarkSheet : public PersonalInfo, public AcademicInfo {
public:

    void inputStudentMarkSheet() {
        inputPersonalInfo(); 
        inputAcademicInfo();
    }

    
    void displayStudentMarkSheet() const {
         cout << "\nStudent Mark Sheet:" <<  endl;
        displayPersonalInfo(); 
        displayAcademicInfo();
    }
};

int main() {
    StudentMarkSheet student;

    student.inputStudentMarkSheet();

    student.displayStudentMarkSheet();

    return 0;
}
