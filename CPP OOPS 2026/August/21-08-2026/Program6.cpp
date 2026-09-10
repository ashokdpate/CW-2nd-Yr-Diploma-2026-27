/*
2. Solution: Constructor
*/

#include <iostream>
using namespace std;    

class Student
{
public:
    int rollNo;
    float marks;

    // Constructor
    Student(int r, float m) {
        rollNo = r;
        marks = m;
    }
};

int main()
{
    Student s1(101, 85.5);
    Student s2(102, 78.5);
    Student s3(103, 91.5);

    cout << "Roll No: " << s1.rollNo << endl;
    cout << "Marks: " << s1.marks << endl;

    cout << "Roll No: " << s2.rollNo << endl;
    cout << "Marks: " << s2.marks << endl;

    cout << "Roll No: " << s3.rollNo << endl;
    cout << "Marks: " << s3.marks << endl;

    return 0;
}
