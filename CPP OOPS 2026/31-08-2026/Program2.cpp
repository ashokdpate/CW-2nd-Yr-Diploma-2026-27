/*
Destructor in C++ — Basics First

A destructor is a special member function of a class that is automatically 
called when an object is destroyed.

    -When the object is created, the constructor is called.
    -When the object is no longer needed, the destructor is automatically called
*/
/*
Syntax of Destructor

A destructor:

Has the same name as the class
Starts with ~ (tilde)
Has no return type
Takes no arguments
Is called automatically
A class can have only one destructor

class Demo
{
public:

    Demo()       // Constructor
    {
    }

    ~Demo()      // Destructor
    {
    }
};

*/