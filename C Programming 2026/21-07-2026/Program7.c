#include<stdio.h>

int main()
{
    int  num1;
         num1=30;
         num1=40;
         num1=60;

printf("This is num1 value: %d\n", num1);
/*
Here the output is 60 because first 30 stor then override and 40 store
then again 40 override and 60 store so at the end 60 is store in num1 variable

output: This is num1 value: 60
*/

    return 0;
}