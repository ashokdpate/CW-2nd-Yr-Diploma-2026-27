/*
Write the program to print even number using while loop
*/


#include <stdio.h>
int main()
{
    int i=1;
    while (i<=10)
    {
        if (i%2==0)
        {
            printf("%d", i);
        }
    }
    return 0;
}