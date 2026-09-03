/*
Problem:5
Write a C++ program with two classes Theory and Practical. 
Store marks in private data members. Use a friend function to calculate total marks.
*/
#include <iostream>
using namespace std;

class Practical;   // Forward declaration

class Theory
{
private:
    int theoryMarks;

public:
    Theory()
    {
        theoryMarks = 70;
    }

    friend void total(Theory t, Practical p);
};

class Practical
{
private:
    int practicalMarks;

public:
    Practical()
    {
        practicalMarks = 25;
    }

    friend void total(Theory t, Practical p);
};

void total(Theory t, Practical p)
{
    cout << "Theory Marks: " << t.theoryMarks << endl;
    cout << "Practical Marks: " << p.practicalMarks << endl;

    cout << "Total Marks: "
         << t.theoryMarks + p.practicalMarks;
}

int main()
{
    Theory t1;
    Practical p1;

    total(t1, p1);

    return 0;
}