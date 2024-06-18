// Write a C++ program to create a class called Car that has private
// member variables for company, model, and year. Implement member
// functions to get and set these variables.


#include <iostream>
#include <string>
using namespace std;

class Car {
private:
   string company;
   string model;
    int year;

public:

    Car(const std::string& comp, const std::string& mdl, int yr) {
        company = comp;
        model = mdl;
        year = yr;
    }

   
   string getCompany() const {
        return company;
    }

   string getModel() const {
        return model;
    }

    int getYear() const {
        return year;
    }

    void setCompany(const std::string& comp) {
        company = comp;
    }

    void setModel(const std::string& mdl) {
        model = mdl;
    }

    void setYear(int yr) {
        year = yr;
    }
};

int main() {
    
   string userCompany, userModel;
    int userYear;

   cout << "Enter car details:" << std::endl;
   cout << "Company: ";
   cin >> userCompany;

   cout << "Model: ";
   cin >> userModel;

   cout << "Year: ";
   cin >> userYear;

    Car userCar(userCompany, userModel, userYear);

   cout << "\nUser Input Car Details:" << std::endl;
   cout << "Company: " << userCar.getCompany() << std::endl;
   cout << "Model: " << userCar.getModel() << std::endl;
   cout << "Year: " << userCar.getYear() << std::endl;

    return 0;
}
