// .9 Write a program to Find the Sum of First N Natural Numbers
// using for loop 

#include<stdio.h>
int main()
{
    int sum=0;
    for (int i = 1; i <=10; i++)
    {
        sum=sum+i;
    }
    printf("Addition of all number is: %d", sum);
    
    return 0;
}
