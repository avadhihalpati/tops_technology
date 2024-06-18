// Write a C++ program to implement a class called Date that has private
// member variables for day, month, and year. Include member functions to
// set and get these variables, as well as to validate if the date is valid.

#include <iostream> 
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
   
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    int getDay() const {
        return day;
    }

    bool isValidDate() const {
        if (year < 1 || month < 1 || month > 12 || day < 1 || day > 31) {
            return false;
        }

        return true;
    }
};

int main() {

    int userDay, userMonth, userYear;

    cout << "Enter date details:" << endl;
    cout << "Day: ";
    cin >> userDay;

    cout << "Month: ";
    cin >> userMonth;

    cout << "Year: ";
    cin >> userYear;

    Date userDate(userDay, userMonth, userYear);

    cout << "\nUser Input Date Details:" << endl;
    cout << "Day: " << userDate.getDay() << endl;

    if (userDate.isValidDate()) {
        cout << "\nThe entered date is valid." << endl;
    } else {
        cout << "\nThe entered date is not valid." << endl;
    }

    return 0;
}
