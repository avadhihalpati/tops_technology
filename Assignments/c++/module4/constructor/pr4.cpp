// Write a C++ program to implement a class called Bank Account that has
// private member variables for account number and balance. Include
// member functions to deposit and withdraw money from the account.

#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:

    BankAccount(int accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
             cout << "Deposit of $" << amount << " successful. New balance: $" << balance << endl;
        } else {
             cout << "Invalid deposit amount. Please enter a positive amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
             cout << "Withdrawal of $" << amount << " successful. New balance: $" << balance << endl;
        } else {
             cout << "Invalid withdrawal amount or insufficient funds." << endl;
        }
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    
    int userAccountNumber;
    double initialBalance;

     cout << "Enter account details:" <<  endl;
     cout << "Account Number: ";
     cin >> userAccountNumber;

     cout << "Initial Balance: $";
     cin >> initialBalance;

    BankAccount userAccount(userAccountNumber, initialBalance);

    double depositAmount, withdrawAmount;

     cout << "\nEnter deposit amount: $";
     cin >> depositAmount;
    userAccount.deposit(depositAmount);

     cout << "\nEnter withdrawal amount: $";
     cin >> withdrawAmount;
    userAccount.withdraw(withdrawAmount);
     cout << "\nFinal Account Balance: $" << userAccount.getBalance() <<  endl;

    return 0;
}
