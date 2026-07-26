/*
My requirement is take two number and then do the 
division and the modulus.

- in division (/) we will get the quatient
- in modulus  (%) we will get the reminder
*/
#include<stdio.h>
int main()
{
    int num1= 14;
    int num2= 5;

    int div= num1 / num2 ;
    int modulus = num1 % num2;

    printf("The Division is : %d\n", div);
    printf("The modulus is : %d\n", modulus);
    
    return 0;
}

/*
The Division is : 2
The modulus is : 4

*/