// Write a C++ program to implement a class called Employee that has
// private member variables for name, employee ID, and salary. Include
// member functions to calculate and set salary based on employee
// performance. Using of constructor

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
   
    Employee(const string& empName, int empID, double initialSalary) 
        : name(empName), employeeID(empID), salary(initialSalary) {}

    void calculateSalary(double performanceFactor) {
        
        salary *= performanceFactor;
    }

    string getName() const {
        return name;
    }

    int getEmployeeID() const {
        return employeeID;
    }

    double getSalary() const {
        return salary;
    }
};

int main() {
    
    string userName;
    int userID;
    double initialSalary;

    cout << "Enter employee details:" << endl;
    cout << "Name: ";
    getline(std::cin, userName);

    cout << "Employee ID: ";
    cin >> userID;

    cout << "Initial Salary: $";
    cin >> initialSalary;

    Employee userEmployee(userName, userID, initialSalary);

    cout << "\nInitial Employee Details:" << endl;
    cout << "Name: " << userEmployee.getName() << endl;
    cout << "Employee ID: " << userEmployee.getEmployeeID() << endl;
    cout << "Salary: $" << userEmployee.getSalary() << endl;

    double performanceFactor;
    cout << "\nEnter performance factor (e.g., 1.1 for a 10% increase): ";
    cin >> performanceFactor;

    userEmployee.calculateSalary(performanceFactor);

    cout << "\nUpdated Employee Details:" << endl;
    cout << "Name: " << userEmployee.getName() << endl;
    cout << "Employee ID: " << userEmployee.getEmployeeID() << endl;
    cout << "New Salary: $" << userEmployee.getSalary() << endl;

    return 0;
}
