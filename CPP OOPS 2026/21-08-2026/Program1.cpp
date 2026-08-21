/*
1. Problem: Without Constructor

Suppose we create a Student class having rollNo and marks.

Every time we create an object, we have to manually assign values.

*/

#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    float marks;
};

int main()
{
    Student s1;

    s1.rollNo = 101;
    s1.marks = 85.5;

    cout << "Roll No: " << s1.rollNo << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}