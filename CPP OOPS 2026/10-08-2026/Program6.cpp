#include <iostream>
#include <conio.h>
int main()
{
    using namespace std;
    
    int num1, num2;

    cout << "Enter the value of num1: ";
    //in cpp lang
    
    cin >> num1;
    //scanf("%d",&num); in c lang
    
    cout << "Enter the value of num2: ";
    cin >> num2;
    
    int sum=num1+num2;
    cout << "The sum of num1 and num2 is: " << sum << endl;
    
    return 0;
}