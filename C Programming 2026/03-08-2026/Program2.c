// Program 1: Declare and Print Array

#include<stdio.h>
int main()
{
    int arr[5]={10, 20, 30, 40,50};

    for (int i = 0; i < 5; i++)
    {
        printf("%4d", arr[i]);
    }
    return 0;
}

/*
arr[0] arr[1] arr[2] arr[3] arr[4]
 10     20     30     40     50
 */
