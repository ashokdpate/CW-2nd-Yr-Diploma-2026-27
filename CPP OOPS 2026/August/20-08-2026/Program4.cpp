/*
Nesting member function:
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
    compute(); // Calling compute() function from display()
    cout << "The area of the circle is: " << area << endl;
}

int main() {
    Circle c;
    c.read();
    c.display(); // This will call compute() internally
    return 0;
}