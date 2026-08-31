/*
Example 2: Constructor + Destructor with Data
Problem

Write a C++ program to accept and display student details using constructor and destructor.
*/
#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    string name;

public:

    // Constructor
    Student(int r, string n)
    {
        rollNo = r;
        name = n;

        cout << "Constructor is called" << endl;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor is called" << endl;
    }
};

int main()
{
    Student s1(101, "Rahul");

    s1.display();

    return 0;
}

/*
Constructor is called
Roll No: 101
Name: Rahul
Destructor is called
*/