/*
Write a program to implement single inheritance declare base class employee
with data members empid, name, salary and derived class fitness with data members height
and weight. Accept and display data for one object.
*/

#include <iostream>
using namespace std;

class Employee {
protected:  

    int empid;
    string name;
    float salary;
};
class Fitness : public Employee {
private:
    float height;
    float weight;

    public:
    void accept() {
        cout << "Enter employee ID: ";
        cin >> empid;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter salary: ";
        cin >> salary;
        cout << "Enter height: ";
        cin >> height;
        cout << "Enter weight: ";
        cin >> weight;
    }

    void display() {
        cout << "Employee ID: " << empid << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Height: " << height << endl;
        cout << "Weight: " << weight << endl;
    }
};
int main() {
    Fitness f;
    f.accept();
    f.display();
    return 0;
}