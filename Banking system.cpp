/*
Description:A C++ program that creates a simple Bank management system and outputs the given bank member details.
Name:Geoffrey Njenga Wanene
Reg_no:BCS-03-0006/2025
*/
#include <iostream>
#include <string>
using namespace std;

// Base class
class AccountHolder {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }
};

// Derived class
class BankAccount : public AccountHolder {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(string n, int accNum, double bal) {
        setName(n);
        accountNumber = accNum;
        balance = bal;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    double getBalance() {
        return balance;
    }
};

// Further derived class
class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(string n, int accNum, double bal, double rate)
        : BankAccount(n, accNum, bal) {
        interestRate = rate;
    }

    double getInterestRate() {
        return interestRate;
    }
};

int main() {
    // Creating an object of SavingsAccount
    SavingsAccount mySavings("John Doe", 12345, 5000.0, 2.5);

    // Displaying account details
    cout << "Account Holder: " << mySavings.getName() << endl;
    cout << "Account Number: " << mySavings.getAccountNumber() << endl;
    cout << "Balance: " << mySavings.getBalance() << endl;
    cout << "Interest Rate: " << mySavings.getInterestRate() << "%" << endl;

    return 0;
}
