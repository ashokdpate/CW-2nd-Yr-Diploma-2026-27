/*
problem 7
Write a C++ program with two classes Employee1 and Employee2. Store their salaries as private data members.
Use a friend function to compare their salaries.
*/
#include <iostream>
using namespace std;

class Employee2;

class Employee1
{
private:
    float salary1;

public:
    Employee1()
    {
        salary1 = 30000;
    }

    friend void compare(Employee1 e1, Employee2 e2);
};

class Employee2
{
private:
    float salary2;

public:
    Employee2()
    {
        salary2 = 35000;
    }

    friend void compare(Employee1 e1, Employee2 e2);
};

void compare(Employee1 e1, Employee2 e2)
{
    if (e1.salary1 > e2.salary2)
        cout << "Employee 1 has higher salary";
    else
        cout << "Employee 2 has higher salary";
}

int main()
{
    Employee1 e1;
    Employee2 e2;

    compare(e1, e2);

    return 0;
}