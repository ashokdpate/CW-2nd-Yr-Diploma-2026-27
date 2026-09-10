/*
Write C++ program to declare a class mobile having data members price and
model number. Accept & display data for 10 objects. 

Summer-2025 Q2- B 4 Mark
*/
#include<iostream>
using namespace std;
class Mobile{
    private:
        float price;
        int modelNumber;
    public:
        void acceptData(){
            cout<<"Enter Model Number: ";
            cin>>modelNumber;
            cout<<"Enter Price: ";
            cin>>price;
        }
        
        void displayData(){
            cout<<"\nModel Number: "<<modelNumber;
            cout<<"\nPrice: "<<price<<endl;
        }
};
int main(){
    Mobile m[10];
    for (int i = 0; i <10; i++)
    {
        m[i].acceptData();
    }
    for (int i = 0; i <10; i++){
        m[i].displayData();
    }
}