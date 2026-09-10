/*
Example 5: Practical Problem — Bank Account
Problem

Write a C++ program to create a BankAccount class with constructor and destructor.
*/
#include <iostream>
using namespace std;

class BankAccount
{
    int accountNo;
    float balance;

public:

    // Constructor
    BankAccount(int acc, float bal)
    {
        accountNo = acc;
        balance = bal;

        cout << "Account created" << endl;
    }

    void display()
    {
        cout << "Account No: " << accountNo << endl;
        cout << "Balance: " << balance << endl;
    }

    // Destructor
    ~BankAccount()
    {
        cout << "Account object destroyed" << endl;
    }
};

int main()
{
    BankAccount b1(1001, 25000);

    b1.display();

    return 0;
}
/*
Account created
Account No: 1001
Balance: 25000
Account object destroyed
*/