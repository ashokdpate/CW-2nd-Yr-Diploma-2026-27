/* Write a cpp program define class laptop having data members serialno, brand
ram , storage , price accept data/ innitilize the data from constructor and display
 the record. */

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

    Laptop(int serialNo, string brand, int ram, int storage, float price)
    {
        this->serialNo=serialNo;
        this->brand=brand;
        this->ram=ram;
        this->storage=storage;
        this->price=price;
    }

    void displayRecord()
    {
        cout << "Serial No: " << serialNo << endl;
        cout << "Brand: " << brand << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Storage: " << storage << " GB" << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Laptop l1(1001, "Dell", 16, 512, 65000);

    l1.displayRecord();

    return 0;
}