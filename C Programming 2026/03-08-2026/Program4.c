// Program 3: Reverse an Array

#include<stdio.h>
int main()
{
    int arr[5];
    printf("Enter the arrays elements: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Reverse arrays elements are: ");
    for (int i = 4; i >= 0; i--)
    {
        printf("%4d", arr[i]);
    }    
    return 0;
}
