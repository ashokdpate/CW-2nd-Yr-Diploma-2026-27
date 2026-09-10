/*
Type casting: 

-converting one data type into another data type is called type casting.
-implicit conversion do not require any special syntax. 
    It is done automatically by the compiler.

- but explicit conversion requires a special syntax. 
    It is done manually by the programmer.

*/
/*
Write a program to accept integer value from user and  
float data type multiply the two numbers.
*/
#include <iostream>
using namespace std;

int main()
{
    int a;
    float b;

    cout << "Enter an integer value: ";
    cin >> a;
    cout << "Enter a float value: ";
    cin >> b;
    float result = a * b;

    cout << "Result: " << result << endl;

    return 0;
}