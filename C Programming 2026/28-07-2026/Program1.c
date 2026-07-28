// Print reverse number 10 to 1 using for loop

#include <stdio.h>
int main()
{
    for (int i = 10; i>=1; i--)
    {
        printf("%d",i);
    }
    return 0;
}

/*
Dry Run
       step-1    step-2    step-3   step-4
itr1    10       10>=1      10        9
itr2    -        9>=1       9         8
itr3    -        8>=1       8         7
itr4    -        7>=1       7         6
itr5    -        6>=1       6         5
itr6    -        5>=1       5         4
itr7    -        4>=1       4         3
itr8    -        3>=1       3         2
itr9    -        2>=1       2         1
itr10   -        1>=1       1         0
itr11   -        0>=1       -          -

*/