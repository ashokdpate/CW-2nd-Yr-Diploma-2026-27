// 8 Write a program to Find the Sum of First N Natural Numbers
// using while loop

#include<stdio.h>
int main()
{
    int i=1;
    int sum=0;
    while (i<=10)
    {
        sum=sum+i;
        i++;
    }
    
    printf("%d", sum);
    return 0;
}

