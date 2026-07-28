//Write down the program to print even number between 1 to 10 using for loop.


#include <stdio.h>
int main()
{
    for (int i = 1; i<=10; i++)
    {
        if (i % 2==0)
        {
            printf("%d",i);
        }
        
    }
    return 0;
}

/*
Dry Run
       step-1    step-2    step-3   step-4
itr1    1        1<=10       -         2 
itr2    -        2<=10       2         3
itr3    -        3<=10       -         4
itr4    -        4<=10       4         5
itr5    -        5<=10       -         6
itr6    -        6<=10       6         7
itr7    -        7<=10       -         8
itr8    -        8<=10       8         9
itr9    -        9<=10       -         10
itr10   -        10<=10      10        11
itr11   -        11<=10      -          -

*/