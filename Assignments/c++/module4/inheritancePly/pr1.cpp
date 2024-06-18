// 1. Assume a class cricketer is declared. Declare a derived class batsman 
// from cricketer. Data member of batsman. Total runs, Average runs and 
// best performance. Member functions input data, calculate average 
// runs, Displaydata.(Single Inheritance)

#include <iostream>
#include <string>
using namespace std;

class Cricketer {
protected:
    string playerName;
    int matchesPlayed;

public:
    void inputData() {
        cout << "Enter player name: ";
        cin >> playerName;
        cout << "Enter number of matches played: ";
        cin >> matchesPlayed;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;

public:
    void inputBatsmanData() {
        inputData(); 
        cout << "Enter total runs scored: ";
        cin >> totalRuns;
        cout << "Enter best performance (highest score in a single match): ";
        cin >> bestPerformance;

        averageRuns = static_cast<float>(totalRuns) / matchesPlayed;
    }

    void displayData() {
        cout << "\nPlayer Name: " << playerName << endl;
        cout << "Matches Played: " << matchesPlayed << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman batsman1;
    batsman1.inputBatsmanData();
    batsman1.displayData();

    return 0;
}
