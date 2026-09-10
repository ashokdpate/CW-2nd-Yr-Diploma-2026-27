/*
Write a program to find area of a circle using object oriented programming
such that the class circle must have three inline member functions namely
a) read() to accept radius of circle from user
b) compute() to calculate area of circle
c) display() to display the area of circle
*/


#include <iostream>
using namespace std;

class circle{

    private:
    float radius, area;

    public:
    void read();
    void compute();
    void display();
};

inline void circle:: read(){
    cout<<"Enter a radius ";
    cin>>radius;
}


inline void circle:: compute(){
                area=3.14*radius*radius;
}

inline void circle::display(){
    cout<<"Area of cicle is :" <<area<<endl;
    cout<<"Area of cicle is :" <<area;
}



int main(){
        circle c;
        c.read();
        c.compute();
        c.display();
}
























