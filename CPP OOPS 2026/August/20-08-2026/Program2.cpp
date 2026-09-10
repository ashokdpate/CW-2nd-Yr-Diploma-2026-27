/*Multiple objects program*/

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
    int main(){
        
        Employee e1, e2,e3;
        cout << "Enter details for employee 1:" << endl;
        e1.accept();
        cout << "Enter details for employee 2:" << endl;
        e2.accept();
        cout << "Enter details for employee 3:" << endl;
        e3.accept();

        cout << "\nDetails of employee 1:" << endl;
        e1.display();
        cout << "\nDetails of employee 2:" << endl;
        e2.display();
        cout << "\nDetails of employee 3:" << endl;
        e3.display();

        return 0;
    }