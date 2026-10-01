/*
Write a cpp program to declare a class COLLEGE with members  as college code.
derive a new class as STUDENT with members as studid, studname, studmarks.
accept and display the details of student along with college for one object.
*/



























#include<iostream>
using namespace std;
class COLLEGE {
protected:
int collegeCode;
string collegeName;
};

class STUDENT : public COLLEGE {
private:
    int studId;
    string studName;
    float studMarks;
public:
    void acceptDetails() {
        cout << "Enter college code: ";
        cin >> collegeCode;
        cout << "Enter college name: ";
        cin >> collegeName;
        cout << "Enter student ID: ";
        cin >> studId;
        cout << "Enter student name: ";
        cin >> studName;
        cout << "Enter student marks: ";
        cin >> studMarks;
    }

    void displayDetails() {
        cout << "\nCollege Details:\n";
        cout << "College Code: " << collegeCode << endl;
        cout << "College Name: " << collegeName << endl;
        cout << "\nStudent Details:\n";
        cout << "Student ID: " << studId << endl;
        cout << "Student Name: " << studName << endl;
        cout << "Student Marks: " << studMarks << endl;
    }
};

int main() {
    STUDENT student;
    student.acceptDetails();
    student.displayDetails();
    return 0;
}

