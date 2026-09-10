/*
write a program to accept basic salary.calculate gross salary that include 
DA=50% of basic salary,HRA=40%.
*/

#include <iostream>
using namespace std;

int main()
{
    float basic_salary, da, hra, gross_salary;

    cout << "Enter the basic salary: ";
    cin >> basic_salary;

    da = 0.5 * basic_salary;
    hra = 0.4 * basic_salary;

    gross_salary = basic_salary + da + hra;

    cout << "The gross salary is: " << gross_salary << endl;

    return 0;
}
/*
what is da DA stands for Dearness Allowance. It is a component of an 
employee's salary that is provided to offset 
the impact of inflation on the cost of living. 
In this program, DA is calculated as 50% of the basic salary.

Hra HRA stands for House Rent Allowance. It is a component of 
an employee's salary that is provided to help cover the cost of renting a home.
In this program, HRA is calculated as 40% of the basic salary.
*/ 