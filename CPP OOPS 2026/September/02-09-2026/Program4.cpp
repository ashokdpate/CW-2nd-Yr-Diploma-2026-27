/*
Problem 2: Calculate Employee Salary
Question

Create a class Employee with private data members basicSalary and bonus.
Write a friend function to calculate and display the total salary.
*/
#include <iostream>
using namespace std;

class Employee
{
private:
    float basicSalary;
    float bonus;

public:

    Employee(float b, float bo)
    {
        basicSalary = b;
        bonus = bo;
    }

    friend void calculateSalary(Employee e);
};

void calculateSalary(Employee e)
{
    float total;

    total = e.basicSalary + e.bonus;

    cout << "Basic Salary: " << e.basicSalary << endl;
    cout << "Bonus: " << e.bonus << endl;
    cout << "Total Salary: " << total << endl;
}

int main()
{
    Employee e1(30000, 5000);

    calculateSalary(e1);

    return 0;
}