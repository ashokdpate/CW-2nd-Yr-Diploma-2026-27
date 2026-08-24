/*
Parameterized Constructor: 

Write a C++ program to create a class Rectangle with data members length and breadth. 
Use a parameterized constructor to initialize the values and calculate the area.
*/



#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double breadth;

public:
    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }

    double calculateArea() {
        return length * breadth;
    }
};

int main() {
    Rectangle r(5.0, 3.0);
    cout << "Area of the rectangle: " << r.calculateArea() << endl;
    return 0;
}