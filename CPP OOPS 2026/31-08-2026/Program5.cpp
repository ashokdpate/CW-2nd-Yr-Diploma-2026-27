/*
Example 3: Destructor with Two Objects

This is important for understanding when the destructor is called.

Problem

Write a C++ program to demonstrate destructor execution for two objects.
*/

#include <iostream>
using namespace std;

class Demo
{
    int x;

public:

    Demo(int a)
    {
        x = a;
        cout << "Constructor: " << x << endl;
    }

    ~Demo()
    {
        cout << "Destructor: " << x << endl;
    }
};

int main()
{
    Demo d1(10);
    Demo d2(20);

    cout << "Objects are being used" << endl;

    return 0;
}
/*
Constructor: 10
Constructor: 20
Objects are being used
Destructor: 20
Destructor: 10
*/