/*
Solution using friend function
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
   friend void display(Student s);
};

//now we can access the private data member because of friend function
void display(Student s)
{
    cout << "Marks: " << s.marks;
}

int main()
{
    Student s1;

    display(s1);

    return 0;
}
