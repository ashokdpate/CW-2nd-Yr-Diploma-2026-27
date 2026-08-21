/*
3. Problem: Without Constructor

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
};

int main()
{
    Laptop l1;

    l1.serialNo = 1001;
    l1.brand = "Dell";
    l1.ram = 16;
    l1.storage = 512;
    l1.price = 65000;

    cout << "Serial No: " << l1.serialNo << endl;
    cout << "Brand: " << l1.brand << endl;
    cout << "RAM: " << l1.ram << " GB" << endl;
    cout << "Storage: " << l1.storage << " GB" << endl;
    cout << "Price: " << l1.price << endl;

    return 0;
}