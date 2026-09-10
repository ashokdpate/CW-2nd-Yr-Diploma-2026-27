/*
Type of constructor: 
1.Default constructor / parameterless constructor
    -If a class does not have any constructor, then the compiler automatically 
    provides a default constructor.
    -If a constructor does not have any parameter, then it is called default constructor or parameterless constructor
    
2.Parameterized constructor
    -If a constructor has one or more parameters, then it is called parameterized constructor.
    Thus, the parameterized constructor has argument list written in the brackets
    associated with the constructor name.
    

3.Copy constructor

Write a program to find area of a circle using object oriented programming
The value of radius is to be accepted from user in the constructor of the class circle. 
and class circle must have two member functions namely
a) compute() to calculate area of circle
b) display() to display the area of circle
*/

#include <iostream>
using namespace std;

class circle {
    float radius, area;


public:
    circle(){
        cout<<"Enter the radius of the circle: ";
        cin>>radius;
    }
    void compute();
    void display();
};

inline void circle::compute() {
    area = 3.14 * radius * radius;
}

inline void circle::display() {
    cout<<"The area of the circle is: "<<area<<endl;
}

int main() {
    circle c;
    c.compute();
    c.display();
    return 0;
}