/*
Write a program to calculate volume of sphere using multilevel inheritance in cpp.
The base class function will accept the radius from the user. a class will be derived from the above 
mentioned class that wiill have a function to find the area of circle and another class derived
from this will have functions to calculate and display the volume of the sphere.
                
                Data
            _____________
            |   private  |
            |   protected|
            |radius      |
            |    public  |
            |     read() |
            |____________|

            Area     public
            _____________
            |   private  |
            |   protected|
            |  area      |
            |    public  |
            |  area()    |
            |____________|


        Volume       public
            _____________
            |   private  |
            | volume     |
            |   protected|
            |  area    | 
            |radius      |
            |    public  |
            |     read() |
            |calculate() |
            |display()   |
            |____________|
*/


#include <iostream>
using namespace std;

class Data {
protected:

    float radius;
public: 
    void read() {
        cout << "Enter radius of sphere: ";
        cin >> radius;
    }
};

class Area : public Data {
protected:  

    float area;
public:
    void areaCircle() {
        area = 3.14 * radius * radius;
    }   
};  

class Volume : public Area {
private:    

    float volume;
public:
    void calculate() {
        volume = (4.0 / 3.0) * 3.14 * radius * radius * radius;
    }

    void display() {
        cout << "Area of Circle: " << area << endl;
        cout << "Volume of Sphere: " << volume << endl;
    }
};

int main() {
    Volume v;
    v.read();
    v.areaCircle();
    v.calculate();
    v.display();
    return 0;
}