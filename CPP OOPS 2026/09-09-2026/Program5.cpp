#include <iostream>
using namespace std;

class Parent
{
public:
    int a = 10;

protected:
    int b = 20;

private:
    int c = 30;
};

class Child : protected Parent
{
public:
    void display()
    {
        cout << a << endl;   // Allowed
        cout << b << endl;   // Allowed
        // cout << c;        // Not allowed
    }
};

int main()
{
    Child obj;

    obj.display();

    // cout << obj.a;  // Not allowed
    // cout << obj.b;  // Not allowed
    // cout << obj.c;  // Not allowed

    return 0;
}

/*
Effect:

Parent                    Child
--------------------------------
public  a   ------------> protected a
protected b ------------> protected b
private c  ------------> NOT accessible
*/