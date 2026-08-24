/*
Write a C++ program to create a class Product with data members productId, price and quantity. 
Use a parameterized constructor to initialize all values and calculate the total amount.
*/
#include <iostream>
using namespace std;

class Product {
private:
    int productId;
    double price;
    int quantity;

public:
    Product(int id, double p, int q) {
        productId = id;
        price = p;
        quantity = q;
    }

    double calculateTotalAmount() {
        return price * quantity;
    }
};

int main() {
    Product p(1, 10.0, 5);
    cout << "Total amount: " << p.calculateTotalAmount() << endl;
    return 0;
}