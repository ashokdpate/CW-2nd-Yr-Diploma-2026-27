/*
Problem 6: Friend Function with Two Different Classes

Question

Create two classes Student and Sports. Store marks in Student and sports marks in Sports. 
Use a friend function to calculate the total marks.

*/

#include <iostream>
using namespace std;

class Sports;

class Student
{
private:
    int academicMarks;

public:

    Student(int m)
    {
        academicMarks = m;
    }

    friend void totalMarks(Student s, Sports sp);
};

class Sports
{
private:
    int sportsMarks;

public:

    Sports(int m)
    {
        sportsMarks = m;
    }

    friend void totalMarks(Student s, Sports sp);
};

void totalMarks(Student s, Sports sp)
{
    cout << "Academic Marks: " << s.academicMarks << endl;
    cout << "Sports Marks: " << sp.sportsMarks << endl;

    cout << "Total Marks: "
         << s.academicMarks + sp.sportsMarks << endl;
}

int main()
{
    Student s1(80);
    Sports sp1(15);

    totalMarks(s1, sp1);

    return 0;
}