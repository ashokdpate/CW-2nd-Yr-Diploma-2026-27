/*
Write a C++ program to create a class BankAccount with account number and balance. 
Use a parameterized constructor to initialize the account number and balance. 
Display the details.
*/
#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNum, double bal) {
        accountNumber = accNum;
        balance = bal;
    }

    void displayDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount ba(12345, 1000.0);
    ba.displayDetails();
    return 0;
}