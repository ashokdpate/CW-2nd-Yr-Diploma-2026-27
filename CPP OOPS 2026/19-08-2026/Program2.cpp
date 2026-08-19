/*
Write a program to declare a class ‘employee’ having data members 
‘emp-id’ and ‘salary’. Accept and display this data for 10 employees

Summer-2026 Q5 - A 6 Mark
*/

#include<iostream>
using namespace std;

class Employee{
    private:
        int empId;
        float salary;
    public:
        void acceptData(){
            cout<<"Enter Employee ID: ";
            cin>>empId;
            cout<<"Enter Salary: ";
            cin>>salary;
        }
        
        void displayData(){
            cout<<"\nEmployee ID: "<<empId;
            cout<<"\nSalary: "<<salary<<endl;
        }
};

int main(){
    Employee e[10];
    for(int i = 0; i < 10; i++){
        e[i].acceptData();
    }
    for(int i = 0; i < 10; i++){
        e[i].displayData();
    }
    return 0;
}