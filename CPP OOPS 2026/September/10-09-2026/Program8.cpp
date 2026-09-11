/*
Write a program to implement single inheritance from following hierarchy in C++.
accept and display data for one table.
                
            _____________
            |   class    |
            |   furniture|
            |   material,|
            |    price   |
            |            |
            |____________|

        Derived       public
            _____________
            |   class    |
            |    table   |
            |   height   |
            |surface area|
            |____________|

*/

#include <iostream>
using namespace std;

class furniture {
protected:
    string material;
    float price;
};

class table : public furniture {
private:
    float height;
    float surface_area;
public:
    void accept() {
        cout << "Enter material: ";
        cin >> material;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter height: ";
        cin >> height;
        cout << "Enter surface area: ";
        cin >> surface_area;
    }
    void display() {
        cout << "Material: " << material << endl;
        cout << "Price: " << price << endl;
        cout << "Height: " << height << endl;
        cout << "Surface Area: " << surface_area << endl;
    }
};

int main() {
    table t;
    t.accept();
    t.display();
    return 0;
}

