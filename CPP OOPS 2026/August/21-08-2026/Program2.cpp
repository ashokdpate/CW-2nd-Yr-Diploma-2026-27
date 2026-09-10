
/*
2. Problem: Without Constructor

Suppose we create a patient class having patientId, name , age and roomNo.

Every time we create an object, we have to manually assign values.

*/
#include <iostream>
using namespace std;

class Patient
{
public:
    int patientId;
    string name;
    int age;
    int roomNo;
};

int main()
{
    Patient p1;

    p1.patientId = 1001;
    p1.name = "Amit";
    p1.age = 35;
    p1.roomNo = 205;

    cout << "Patient ID: " << p1.patientId << endl;
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Room No: " << p1.roomNo << endl;

    return 0;
}