/*
Write a program to declare a class ‘staff’ having data member as name and
department. Accept this data for 10 staff and display names of staff that are
CM department.

Summer-2025 Q6- C  6 Mark
*/
#include<iostream>
using namespace std;

class Staff{
    private:
        string name;
        string department;
    public:
        void acceptData(){
            cout<<"Enter Staff Name: ";
            cin.ignore();
            getline(cin, name);
            cout<<"Enter Department: ";
            getline(cin, department);
        }
        
        void displayData(){
            if(department == "CM"){
                cout<<"\nStaff Name: "<<name;
                cout<<"\nDepartment: "<<department<<endl;
            }
        }
};
int main(){
    Staff s[10];
    for (int i = 0; i <10; i++)
    {
        s[i].acceptData();
    }
    for (int i = 0; i <10; i++){
        s[i].displayData();
    }
    return 0;
}