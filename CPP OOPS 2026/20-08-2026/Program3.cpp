
/*Write a program to find area of a circle using object oriented programming 
such that the class circle must have three member functions externally namely
 
a) read() to accept radius of circle from user
b) compute() to calculate area of circle
c) display() to display the area of circle
*/

#include <iostream>
using namespace std;

class Circle {

    float radius, area;

    public: 
    void read();
    void compute();
    void display();
};

void Circle::read() {
    cout << "Enter the radius of the circle: ";
    cin >> radius;
}

void Circle::compute() {
    area = 3.14 * radius * radius;
}

void Circle::display() {
    cout << "The area of the circle is: " << area << endl;
}

int main() {
    Circle c;
    c.read();
    c.compute();
    c.display();
    return 0;
}