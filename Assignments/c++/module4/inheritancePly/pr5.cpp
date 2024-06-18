// Assume that the test results of a batch of students are stored in three
// different classes. Class Students are storing the roll number. Class Test 
// stores the marks obtained in two subjects and class result contains the 
// total marks obtained in the test. The class result can inherit the details 
// of the marks obtained in the test and roll number of students.
// (Multilevel Inheritance)

#include <iostream>
using namespace std;
class Students {
protected:
    int rollNumber;

public:
    void inputStudentDetails() {
         cout << "Enter Roll Number: ";
         cin >> rollNumber;
    }

    void displayStudentDetails() const {
         cout << "Roll Number: " << rollNumber <<  endl;
    }
};

class Test : public Students {
protected:
    float subject1Marks;
    float subject2Marks;

public:
    void inputTestDetails() {
        inputStudentDetails(); 
         cout << "Enter Marks for Subject 1: ";
         cin >> subject1Marks;
         cout << "Enter Marks for Subject 2: ";
         cin >> subject2Marks;
    }

    void displayTestDetails() const {
        displayStudentDetails(); 
         cout << "Marks for Subject 1: " << subject1Marks <<  endl;
         cout << "Marks for Subject 2: " << subject2Marks <<  endl;
    }
};

class Result : public Test {
private:
    float totalMarks;

public:
    void calculateTotalMarks() {
        totalMarks = subject1Marks + subject2Marks;
    }

    void displayResult() const {
        displayTestDetails(); 
         cout << "Total Marks: " << totalMarks <<  endl;
    }
};

int main() {
    Result studentResult;

     cout << "Enter details for the student:" <<  endl;
    studentResult.inputTestDetails();

    studentResult.calculateTotalMarks();

     cout << "\nStudent Result:" <<  endl;
    studentResult.displayResult();

    return 0;
}
