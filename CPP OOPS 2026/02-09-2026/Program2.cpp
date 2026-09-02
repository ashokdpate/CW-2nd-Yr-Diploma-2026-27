/*
Problem

Write a C++ program to create a class Student having private data member marks.
Create a normal function display() to display marks.
*/


#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    Student()
    {
        marks = 85;
    }
    void display(Student s);
};

void display(Student s)
{
    //We cannot acces private data memeber so the solution 
    // is friend function and in next program we apply the 
    //friend function.
    cout << "Marks: " << s.marks;
}

int main()
{
    Student s1;

    display(s1);

    return 0;
}
/*
❌ Problem

This gives an error because:

s.marks

is private.

A normal external function cannot access private data.
*/