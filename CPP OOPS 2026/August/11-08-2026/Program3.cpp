/*
Write a program to accept float number and 
display the interger part of the number using type casting.
*/
#include <iostream>
using namespace std;

int main()
{
    float num;
    int integerPart;

    cout << "Enter a float number: ";
    cin >> num;

    integerPart = (int)num;

    cout << "Integer part: " << integerPart << endl;

    return 0;
}