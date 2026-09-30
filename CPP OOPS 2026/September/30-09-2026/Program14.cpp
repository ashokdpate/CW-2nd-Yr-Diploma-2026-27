/*
Identify the type of the inheritance and implement a program and assume suitable 
member function.


                customer
            _____________
            |   protected|
            |   name     |
            |    phoneNo |
            |address     |
            |____________|

            deposit     public
            _____________   
            |   protected|
            |accountNo   |
            | balance    |
            |____________|
            
            Borrower    public
            _____________
            |   private |
            |loanNo     |
            |loanAmount |
            |___________|
*/
#include<iostream>
using namespace std;
class Customer {
protected:
    string name;
    string phoneNo;
    string address;
};

class Deposit : public Customer {
protected:
    string accountNo;
    float balance;
};  

class Borrower : public Deposit {
private:
    string loanNo;
    float loanAmount;

    void acceptDetails() {
        cout << "Enter customer name: ";
        cin >> name;
        cout << "Enter phone number: ";
        cin >> phoneNo;
        cout << "Enter address: ";
        cin >> address;
        cout << "Enter account number: ";
        cin >> accountNo;
        cout << "Enter balance: ";
        cin >> balance;
        cout << "Enter loan number: ";
        cin >> loanNo;
        cout << "Enter loan amount: ";
        cin >> loanAmount;
    }

    void displayDetails() {
        cout << "\nCustomer Details:\n";
        cout << "Name: " << name << endl;
        cout << "Phone Number: " << phoneNo << endl;
        cout << "Address: " << address << endl;
        cout << "Account Number: " << accountNo << endl;
        cout << "Balance: " << balance << endl;
        cout << "Loan Number: " << loanNo << endl;
        cout << "Loan Amount: " << loanAmount << endl;
    }
};

int main() {
    Borrower borrower;
    borrower.acceptDetails();
    borrower.displayDetails();
    return 0;
}
