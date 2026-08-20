/*
Q2 Write a C++ program to define a class Vehicle with data members modelName, 
company and mileage.define as inline member function to Accept data for five 
objects from the user. 
Display the modelName, company of the vehicle having the mileage above 80.
*/
#include<iostream>
#include<String>
using namespace std;

class Vehicle{

    private:
    string modelName;
    string companyName;
    float mileage;

    public:
    void acceptRecord();
    void displayRecord();
};

inline void Vehicle:: acceptRecord(){

    cout<<"Enter a model name"<<endl;
    cin>>modelName;
    cout<<"Enter a company name"<<endl;
    cin>>companyName;
    cout<<"Enter a mileage of bike"<<endl;
    cin>>mileage;
}

inline void Vehicle::displayRecord(){
    if(mileage>80){
        cout<<"model name is: "<<modelName<<endl;
        cout<<"Company name is: "<<companyName<<endl;
    }
}
int main(){
    Vehicle v[5];
    for (int i = 0; i<5; i++)
    {
        v[i].acceptRecord();
    }
    for (int i = 0; i <5; i++)
    {
        v[i].displayRecord();
    }
    
}


