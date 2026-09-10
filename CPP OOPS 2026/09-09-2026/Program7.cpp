/*
write a program to find the area of circle using single inheritance in C++ such that
the base class function must accept the radius from the user and the derived class function 
must calculate and display the area of circle.

                Circle
             _____________
            |   private  |
            |   protected|
            |    radius  |
            |    public  |
            |     read() |
            |____________|

        Area       public
            _____________
            |   private  |
            |    area    |
            |   protected|
            |    radius  |
            |    public  |
            |     read() |
            |calculate() |
            |  display() |
            |____________|
*/

#include<iostream>
using namespace std;
class circle{
    protected:
    float radius;

    public:
    void read(){
        cout<<"Enter a radius :"<<endl;
        cin>>radius;
    }
};

class Area : public circle{
    private:
    float area;

    public:
    void calculate(){
       area =3.14* radius*radius;
    }
    void display(){
        cout<<"Area of circle is: "<<area;
    }
};

int main(){
    Area  a;
    a.read();
    a.calculate();
    a.display();
}

