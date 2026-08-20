/* 
Externally defined member function of class in C++ using:

Scope resolution Operator
->Now in this program member function definition written outside
the class function and declaration of member function given in the
class.
-> that’s why we used here :: scope resolution operator for member
function and it is denotes as(::)

*/
#include <iostream>
using namespace std;
class Employee {
    private:
    int empid;
    char name[20];
    float salary;

    public:
    void accept();
    void display();
};

void Employee::accept() {
    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter employee ID: ";
    cin >> empid;
    cout << "Enter employee salary: ";
    cin >> salary;
}

void Employee::display() {
    cout << "Employee Name: " << name << endl;
    cout << "Employee ID: " << empid << endl;
    cout << "Employee Salary: " << salary << endl;
}

int main() {
    Employee e;
    e.accept();
    e.display();
    return 0;
}
