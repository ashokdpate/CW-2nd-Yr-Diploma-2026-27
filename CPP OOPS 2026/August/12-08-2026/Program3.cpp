/*Write a program to define a class student having data members 
rollno, name, marks and member functions to accept and display 
the details of student.*/

#include <iostream>
#include <string>
using namespace std;

class Student {
    int rollno;
    //char name[20];
    string name;
    float marks;

public:
    void accept() {
        cout << "Enter name: ";
        cin>>name;
        cout << "Enter roll number: ";
        cin >> rollno;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollno << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.accept();
    s.display();
    return 0;
}
