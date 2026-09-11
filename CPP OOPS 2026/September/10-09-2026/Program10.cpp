/*Write a program to implement following inheritance as shown in figure.
                
                 customer
                _____________
                |            | 
                |   name,    |
                |    phoneno |
                |____________|

    Derived   public Depositor  
                _____________
                |   acc_no   |
                |   balance  |
                |____________|
*/









































#include <iostream>
using namespace std;

class Customer {
protected:
    string name;
    string phoneno;
};

class Depositor : public Customer {
private:

    int acc_no;
    float balance;
    
public:
    void accept() {
        
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter phone number: ";
        cin >> phoneno;
        cout << "Enter account number: ";
        cin >> acc_no;
        cout << "Enter balance: ";
        cin >> balance;
    }   
    void display() {
        cout << "Name: " << name << endl;
        cout << "Phone Number: " << phoneno << endl;
        cout << "Account Number: " << acc_no << endl;
        cout << "Balance: " << balance << endl;
    }
};  

int main() {
    Depositor d;
    d.accept();
    d.display();
    return 0;
}