/*
Write a program to define class ‘staff’ with datamembers, name, designation
& experience in years. Accept data for five objects from the user. Display the
name of staff who are manager

Winter-2024 Q5-A  6 Marks
*/
#include<iostream>
using namespace std;

class Staff{
    private:
    string name;
    string designation;
    int experience;
    
    public:
    void accept(){
        cout<<"Enter a staff name";
        cin>>name;
        cout<<"Enter a staff designation";
        cin>>designation;
        cout<<"Enter a staff experience in year";
        cin>>experience;
    }

    void display(){
        if (designation=="Manager")
        {
            cout<<"Staff Name is : "<<name<<endl;
            cout<<"Staff Designation is : "<<designation<<endl;
            cout<<"Staff experience is : "<<experience<<endl;

        }
        
    }
};

int main(){
    
    Staff s[5];
    for (int i = 0; i < 5; i++)
    {
        s[i].accept();
    }
    for (int i = 0; i < 5; i++)
    {
        s[i].display();
    }
    
    return 0;

}