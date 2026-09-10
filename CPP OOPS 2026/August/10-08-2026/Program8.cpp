/*
Write a cpp program to accept a number and display product.
*/

#include <iostream>

int main()
{
    using namespace std;
    
    int num1, num2;
    
    cout << "Enter the value of num1: ";
    cin >> num1;
    
    cout << "Enter the value of num2: ";
    cin >> num2;
    
    int product = num1 * num2;
    cout << "The product of num1 and num2 is: " << product << endl;
    
    return 0;
}
