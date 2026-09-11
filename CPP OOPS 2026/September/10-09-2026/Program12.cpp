/*
Write a program to calculate percentage of student using mutilevel inheritance in cpp.
The base class function will aceept the marks of three subjects from the user
A class will be derived from the above mentioned class that will have a function to find
the total marks obtained and another class derived from this will have a function to 
calculate and display the scored.
                
                Data
            _____________
            |   private  |
            |   protected|
            |physics,    |
            |chemistry,  |
            |mathematics |
            |    public  |
            |     read() |
            |____________|


            Sum     public
            _____________
            |   private  |
            |   protected|
            |  total,    |
            |physics     |
            |chemistry   |
            |mathematics |
            |    public  |
            |     read() |
            |  sum()     |
            |____________|

        Percentage       public
            _____________
            |   private  |
            | percentage |
            |   protected|
            |  total,    | 
            |physics     |
            |chemistry   |
            |mathematics |
            |    public  |
            |     read() |
            |calculate() |
            |  sum()     |
            |display()   |
            |____________|
*/


#include <iostream>
using namespace std;

class Data {
protected:
    float physics, chemistry, mathematics;
public:
    void read() {
        cout << "Enter marks for Physics: ";
        cin >> physics;
        cout << "Enter marks for Chemistry: ";
        cin >> chemistry;
        cout << "Enter marks for Mathematics: ";
        cin >> mathematics;
    }
};

class Sum : public Data {
protected:  

    float total;
public:
    void sum() {
        total = physics + chemistry + mathematics;
    }
};

class Percentage : public Sum {
private:
    float percentage;
public:
    void calculate() {
        percentage = (total / 300) * 100; // Assuming each subject is out of 100
    }

    void display() {
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Percentage student;
    student.read();      // Read marks for three subjects
    student.sum();       // Calculate total marks
    student.calculate(); // Calculate percentage
    student.display();   // Display total marks and percentage
    return 0;
}