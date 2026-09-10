/*
write a program to calculate the simple interest , taking principle amount , rate of interest and 
number of years as input from user.
*/
#include <iostream>
using namespace std;

int main()
{
    float principal, rate, time, simple_interest;

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the rate of interest: ";
    cin >> rate;

    cout << "Enter the number of years: ";
    cin >> time;

    simple_interest = (principal * rate * time) / 100;

    cout << "The simple interest is: " << simple_interest << endl;

    return 0;
}