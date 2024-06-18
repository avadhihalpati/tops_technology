// Create a class person having members name and age. Derive a class
// student having member percentage. Derive another class teacher 
// having member salary. Write necessary member function to initialize, 
// read and write data. Write also Main function (Multiple Inheritance)


#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
  
    void initializeData(const string& n, int a) {
        name = n;
        age = a;
    }

    void readData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayData() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    float percentage;

public:
    
    void initializeStudentData(float p) {
        percentage = p;
    }
    void readStudentData() {
        readData(); 
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void displayStudentData() const {
        displayData(); 
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person {
private:
    float salary;

public:

    void initializeTeacherData(float s) {
        salary = s;
    }

    void readTeacherData() {
        readData(); 
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayTeacherData() const {
        displayData(); 
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Student student1;
    Teacher teacher1;

    cout << "Enter data for student:" << endl;
    student1.readStudentData();

    cout << "\nEnter data for teacher:" << endl;
    teacher1.readTeacherData();

    cout << "\nStudent details:" << endl;
    student1.displayStudentData();

    cout << "\nTeacher details:" << endl;
    teacher1.displayTeacherData();

    return 0;
}
