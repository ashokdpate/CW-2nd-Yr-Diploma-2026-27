#include<stdio.h>

int main()
{
    int  num1;
    int num1=30;
/*
Program6.c:6:9: error: redeclaration of 'num1' with no linkage
    6 |     int num1=30;

    Got the error because num1 is declare two time its not valid
*/
printf("This is num1 value: %d\n", num1);

    return 0;
}

