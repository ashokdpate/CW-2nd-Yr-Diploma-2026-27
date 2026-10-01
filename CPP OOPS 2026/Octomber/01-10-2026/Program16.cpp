/*
Write cpp program for following multilevel inheritance hierarchy. Accept and display data for one table.

            ________________
            |   class       |
            |CarManufacturer|
            | datamember    |
            |    Name       |
            |_______________|

        Derived       public
            _____________
            |   class    |
            |  CarModel  |
            |Datamember  |
            |ModelName   |
            |ModelNo     |
            |____________|

        Derived       public
            _____________
            |   class    |
            | Car        |
            |Datamember  |
            |CarNo       |
            |CarColor    |
            |____________|

            Accept and display data for one car with all details.
*/
#include<iostream>
using namespace std;
class CarManufacturer {
    protected:
    string name;
};

class CarModel: public CarManufacturer{
    protected:
    string modelName;
    int ModelNo;
};

class Car: public CarManufacturer{
    private:
    int carNo;
    string carColour;
    public:
    void accept(){
        cout<<"Enter the car manufacturer name:"<<endl;
        cin>>name;

        cout<<"Enter the car model name:"<<endl;
        cin>>modelName;
        cout<<"Enter the car model number:"<<endl;
        cin>>modelNo;
        cout<<"Enter the car number:"<<endl;
        cin>>carNo;
        cout<<"Enter the car colour name:"<<endl;
        cin>>carColour;
    }

    void display(){
        cout<<"The car manufacturer name:"<<endl;

        cout<<"The car model name:"<<endl;
       
        cout<<"The car model number:"<<endl;
      
        cout<<"The car number:"<<endl;
        
        cout<<"The car colour name:"<<endl;
  
    }
};


int main(){
            Car c;
            c.accept();
            c.display();
}
