/*
Write a C++ program to find area of rectangle using class rectangle which has
following details :
 (i) Accept length and breadth from user
 (ii) Calculate area
 (iii) Display result 

 Summer-2026 Q3 - C
*/

#include<iostream>
using namespace std;

class Rectangle{
    private:
        float length, breadth, area;
    public:
        void accept(){
            cout<<"Enter length: ";
            cin>>length;
            cout<<"Enter breadth: ";
            cin>>breadth;
        }
        
        void calculateArea(){
            area = length * breadth;
        }
        
        void display(){
            cout<<"The area of the rectangle is: "<<area<<endl;
        }
};

int main(){
    Rectangle r;
    r.accept();
    r.calculateArea();
    r.display();
    return 0;
}
