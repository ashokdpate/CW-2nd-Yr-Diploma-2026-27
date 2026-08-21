#include <iostream>
using namespace std;

class Laptop
{
private:
    int serialNo;
    string brand;
    int ram;
    int storage;
    float price;

public:

    // parameterless Constructor
    Laptop()
    {
        cout << "Enter Serial No: ";
        cin >> serialNo;

        cout << "Enter Brand: ";
        cin >> brand;

        cout << "Enter RAM: ";
        cin >> ram;
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
    Laptop l1;    // Constructor automatically called

    l1.displayRecord();

    return 0;
}