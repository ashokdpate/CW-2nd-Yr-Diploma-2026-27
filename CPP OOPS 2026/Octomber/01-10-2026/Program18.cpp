/*
Write a program to define the following relationship using multiple inheritance.

           Teacher                            student
            _____________                _____________ 
            |            |               |   private  |   
            |   protected|               |   protected|
            |teacherId   |               |studentId   |
            |teacherName |               |studentName |
            |subject     |               |sRollNo     |
            |    public  |               |____________|
            |     read() |
            |____________|
                 ^                             ^
                 |                             |
                 |_________     _______________|  
                        ___|____|_____    
                       |class : info|
                       |____________|
*/
#include<iostream>
using namespace std;
class Teacher{
    protected:
    int teacherId;
    string teacherName;
    string teacherSub;
};

class Student{
    protected:
    int studentId;
    string studentName;
    int sRollNo;
};

class Info: public Teacher, public Student{
    public:
    void accept(){
        cout << "Enter teacher ID: ";
        cin >> teacherId;
        cout << "Enter teacher name: ";
        cin >> teacherName;
        cout << "Enter subject taught: ";
        cin >> teacherSub;
        cout << "Enter student ID: ";
        cin >> studentId;
        cout << "Enter student name: ";
        cin >> studentName;
        cout << "Enter student roll number: ";
        cin >> sRollNo;
    }
    void display(){
        cout<<"Techer id is"<<teacherId<<endl;
        cout<<"Techer name is"<<teacherName<<endl;
        cout<<"Techer subject is"<<teacherSub<<endl;
        cout<<"Student id is"<<studentId<<endl;
        cout<<"Student name is"<<studentName<<endl;
        cout<<"Student Roll no is"<<sRollNo<<endl;
    }
};

int main(){
    Info obj;
    obj.accept();
    obj.display();
}
