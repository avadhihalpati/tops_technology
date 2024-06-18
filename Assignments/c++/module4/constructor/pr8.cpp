//  Write a C++ program to implement a class called Student that has private
// member variables for name, class, roll number, and marks. Include
// member functions to calculate the grade based on the marks and display
// the student's information. Accept address from each student implement
// using of aggregation

#include <iostream>
#include <string>
using namespace std;
class Address {
public:
     string street;
     string city;
     string state;

    Address(const  string& s, const  string& c, const  string& st)
        : street(s), city(c), state(st) {}
};

class Student {
private:
     string name;
     string className;
    int rollNumber;
    int marks;
    Address address;  

public:
   
    Student(const  string& n, const  string& cls, int roll, int m,
            const  string& street, const  string& city, const  string& state)
        : name(n), className(cls), rollNumber(roll), marks(m), address(street, city, state) {}

    char calculateGrade() const {
        if (marks >= 90) {
            return 'A';
        } else if (marks >= 80) {
            return 'B';
        } else if (marks >= 70) {
            return 'C';
        } else if (marks >= 60) {
            return 'D';
        } else {
            return 'F';
        }
    }

    void displayStudentInfo() const {
         cout << "Student Information:" <<  endl;
         cout << "Name: " << name <<  endl;
         cout << "Class: " << className <<  endl;
         cout << "Roll Number: " << rollNumber <<  endl;
         cout << "Marks: " << marks <<  endl;
         cout << "Grade: " << calculateGrade() <<  endl;
         cout << "Address: " << address.street << ", " << address.city << ", " << address.state <<  endl;
    }
};

int main() {
   
     string userName, userClass, userStreet, userCity, userState;
    int userRollNumber, userMarks;

     cout << "Enter student details:" <<  endl;
     cout << "Name: ";
     getline( cin, userName);

     cout << "Class: ";
     getline( cin, userClass);

     cout << "Roll Number: ";
     cin >> userRollNumber;

     cout << "Marks: ";
     cin >> userMarks;

     cin.ignore();

     cout << "Street: ";
     getline( cin, userStreet);

     cout << "City: ";
     getline( cin, userCity);

     cout << "State: ";
     getline( cin, userState);

    Student userStudent(userName, userClass, userRollNumber, userMarks, userStreet, userCity, userState);
    userStudent.displayStudentInfo();

    return 0;
}
