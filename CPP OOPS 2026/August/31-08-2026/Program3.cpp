/*
Basic Destructor
Problem

Write a C++ program to demonstrate the use of a destructor.
*/
#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "Constructor is called" << endl;
    }

    ~Demo()
    {
        cout << "Destructor is called" << endl;
    }
};

int main()
{
    Demo d1;

    cout << "Object is being used" << endl;

    return 0;
}

/*
Execution
Demo d1;
   ↓
Constructor is called
   ↓
Object is used
   ↓
main() ends
   ↓
Destructor is called
*/