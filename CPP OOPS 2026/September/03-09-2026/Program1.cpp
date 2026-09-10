/*
Problem-4
Create a class Number with private data member num. 
Create two objects and use a friend function to add their values.
*/
#include <iostream>
using namespace std;

class Number
{
private:
    int num;

public:

    Number(int n)
    {
        num = n;
    }

    friend void add(Number n1, Number n2);
};

void add(Number n1, Number n2)
{
    cout << "First Number: " << n1.num << endl;
    cout << "Second Number: " << n2.num << endl;
    cout << "Addition: " << n1.num + n2.num << endl;
}

int main()
{
    Number n1(25);
    Number n2(35);

    add(n1, n2);

    return 0;
}