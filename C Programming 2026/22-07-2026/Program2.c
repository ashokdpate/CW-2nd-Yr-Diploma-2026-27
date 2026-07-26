/*
2. Relational Operators
    1) > greater than 
    2) < less than
    3) >=  greater than and equal to
    4) <=  less than and equal to
    5) ==  double equal to
    6) !=  not equal to

    - Relational operators gives the result in the form of true or false
    - True means 1 and false means 0
*/

#include <stdio.h>
int main()
{
    int num1=200;
    int num2= 400;

    printf("%d\n", num1 > num2);  // output:  0
    printf("%d\n", num1 < num2);  // output:  1
    printf("%d\n", num1>= num2);  // output:  0
    printf("%d\n", num1<=num2);  // output:  1
  

    return 0;
}

