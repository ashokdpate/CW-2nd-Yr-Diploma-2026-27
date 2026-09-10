/*
Write a program to add two numbers using single inheritance in C++.
such that the base class function must accept the two numbers from the user and 
the derived class function must add these numbers and display the sum

                Data
            _____________
            |   private  |
            |   protected|
            |    a, b    |
            |    public  |
            |     read() |
            |____________|

        sum       public
            _____________
            |   private  |
            |    sum     |
            |   protected|
            |    a, b    |
            |    public  |
            |     read() |
            |     add()  |
            |  display() |
            |____________|
*/

#include <iostream>
using namespace std;

class Data {
protected:
    int a, b;
public:
    void read() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
};

class Sum : public Data {
private:
    int sum;
public:
    void add() {
        sum = a + b;
    }
    void display() {
        cout << "Sum: " << sum << endl;
    }
};

int main() {
    Sum obj;
    obj.read();   // Read two numbers
    obj.add();    // Add the numbers
    obj.display(); // Display the sum
    return 0;
}