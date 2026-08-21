/*
4. Problem: Without Constructor

Suppose we create a Laptop class having serialNo, brand,ram,storage,price.

Every time we create an object, we have to manually assign values.

*/
#include <iostream>
using namespace std;

class Laptop
{
public:
    int serialNo;
    string brand;
    int ram;
    int storage;
    float price;

    void acceptRecord()
    {
        cout << "Enter Serial No: ";
        cin >> serialNo;

        cout << "Enter Brand: ";
        cin >> brand;

        cout << "Enter RAM: ";
        cin >> ram;

        cout << "Enter Storage: ";
        cin >> storage;

        cout << "Enter Price: ";
        cin >> price;
    }

    void displayRecord()
    {
        cout << "\n--- Laptop Details ---" << endl;
        cout << "Serial No: " << serialNo << endl;
        cout << "Brand: " << brand << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Storage: " << storage << " GB" << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Laptop l1;

    l1.acceptRecord();
    l1.displayRecord();

    return 0;
}