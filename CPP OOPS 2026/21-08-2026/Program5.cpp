/*
2. Solution: Constructor

A constructor is a special member function that is automatically called when an object is created.

It is mainly used to initialize the data members of an object.

Properties of Constructor:
1. The name of constructor is the same as the class name.
2. It has to be defined only in the public visibility of class.
3. it should not have any return type, not even void.
4. The constructor is automatically invoked when the object is created.
5. It can have default arguments.
6. A constructor cannot be inherited, but the derived class can call the base class constructor.
7. A constructor cannot be declared as static or virtual.
*/

#include<iostream>
#include<String>

using namespace std;

class Patient{

    public:
    int pid;
    string name;
    int age;

    //Parameteless constructor;
    Patient(){
        cout<<"Constructor is called"<<endl;
    }

    //Parameterized constructor
    Patient(int p, string n, int a){
        pid=p;
        name=n;
        age=a;
    }
    void display(){
        cout<<"patient id is :"<<pid<<endl;
        cout<<"patient name is :"<<name<<endl;
        cout<<"patient age is :"<<age<<endl;
    }

};

int main(){
    Patient p1(101, "Ashok", 21);
    Patient p2(202, "Sarthak", 20);
    Patient p3(303, "Krushna", 19);
    Patient p4;
    p1.display();
    p2.display();
    p3.display();
}
