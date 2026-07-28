//Write down the program to print ODD number between 1 to 10 using for loop.

#include <stdio.h>
int main()
{
    for (int i = 1; i<=10; i++)
    {
        if (i % 2==1)
        {
            printf("%d",i);
        }
        
    }
    return 0;
}

/*
Dry Run
       step-1    step-2    step-3   step-4
itr1    1        1<=10       1         2 
itr2    -        2<=10       -         3
itr3    -        3<=10       3         4
itr4    -        4<=10       -         5
itr5    -        5<=10       5         6
itr6    -        6<=10       -         7
itr7    -        7<=10       7         8
itr8    -        8<=10       -         9
itr9    -        9<=10       9         10
itr10   -        10<=10      -        11
itr11   -        11<=10      -          -

*/