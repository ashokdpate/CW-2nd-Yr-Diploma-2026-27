/*
My requirement is take three number and then do the addition
substraction and the multiplication.
*/
#include<stdio.h>

int main()
{
    int num1= 150;
    int num2= 50;

    int sum= num1 + num2 ;
    int sub = num1 - num2;
    int mul = num1 * num2;

    printf("The addition is : %d\n", sum);
    printf("The substraction is : %d\n", sub);
    printf("The multiplication is : %d\n", mul);

    return 0;
}

/*
The addition is : 200
The substraction is : 100
The multiplication is : 7500

*/