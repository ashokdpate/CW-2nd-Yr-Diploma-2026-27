/*
Write the cpp program to accept a numer and display its square and cube of the number.
*/

#include <iostream>

int main()
{
    using namespace std;
    
    int num;
    
    cout << "Enter the value of num: ";
    cin >> num;
    
    int square=num*num;
    int cube=num*num*num;
    
    cout << "The square of num is: " << square << endl;
    cout << "The cube of num is: " << cube << endl;
    
    return 0;
}