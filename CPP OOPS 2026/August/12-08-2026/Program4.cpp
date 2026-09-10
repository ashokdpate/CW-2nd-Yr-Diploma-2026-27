/*Write a program to define a class employee having data members 
 empid , name, salary and member functions to accept and display 
the details of employee.*/

#include <iostream>
using namespace std;
class Employee {
    private:
    int empid;
    char name[20];
    float salary;

    public:
    void accept() {
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter employee ID: ";
        cin >> empid;
        cout << "Enter employee salary: ";
        cin >> salary;
    }
    void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << empid << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};
int main() {
    Employee e;
    e.accept();
    e.display();
    return 0;
}