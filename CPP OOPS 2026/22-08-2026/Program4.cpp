/*
Write a C++ program, to declare a class distance having data members km,
meter, cm, mm. Accept and display data for one object using constructor
concept.
Summer-2025 Q3- B)   4Marks
*/
#include <iostream>
using namespace std;

class Distance{
    private:
    int km;
    int meter;
    int cm;
    int mm;

    public:

    //parameteerless
    Distance(){
        cout<<"Parameterless construtor called";
    }

    //Parameterized constructor
    Distance(int km,  int meter, int cm , int mm){
        this->km=km;
        this->meter=meter;
        this->cm=cm;
        this->mm=mm;
    }

    void display(){
        cout<<"Kilometer is: "<<km<<endl;
        cout<<"meter is: "<<meter<<endl;
        cout<<"centimeter is: "<<cm<<endl;
        cout<<"milimeter is: "<<mm<<endl;
    }
};

int main(){

    int km , meter, cm, mm;

cout<<"Enter a kilometer value: "<<endl;
    cin>>km;
cout<<"Enter a meter value: "<<endl;
    cin>>meter;
cout<<"Enter a centimeter value: "<<endl;
    cin>>cm;
cout<<"Enter a milimeter value: "<<endl;
    cin>>mm;
    
    Distance d1(km, meter,cm,mm);
    d1.display();
}






























