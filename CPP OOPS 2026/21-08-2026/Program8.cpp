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

    // Parameterized Constructor
    Laptop(int s, string b, int r, int st, float p)
    {
        serialNo = s;
        brand = b;
        ram = r;
        storage = st;
        price = p;
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
    int serialNo, ram, storage;
    string brand;
    float price;

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

    // Passing user values to constructor
    Laptop l1(serialNo, brand, ram, storage, price);

    l1.displayRecord();

    return 0;
}