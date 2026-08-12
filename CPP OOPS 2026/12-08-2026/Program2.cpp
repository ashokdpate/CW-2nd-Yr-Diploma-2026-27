/* 4M  Write a program to find area of a circle using object oriented programming 
such that the class circle must have three member functions internally namely

a) read() to accept radius of circle from user
b) compute() to calculate area of circle
c) display() to display the area of circle
*/

#include <iostream>
using namespace std;
class Circle {

    float radius, area;

    public: 
    void read() {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
    }   

    void compute() {
        area = 3.14 * radius * radius;
    }

    void display() {
        cout << "The area of the circle is: " << area << endl;
    }

};

int main() {
    Circle c;
    c.read();
    c.compute();
    c.display();
    return 0;
}

/*
ERROR:
If we declare the member function as private
In function 'int main()':
Program19.cpp:33:12: error: 'void Circle::read()' is private within this context
   33 |     c.read();
*/