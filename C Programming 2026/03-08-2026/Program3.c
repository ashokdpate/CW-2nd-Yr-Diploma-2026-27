// Program 2: Take Input from User and print

#include<stdio.h>

int main()
{
    int arr[5];
    
    printf("Enter array elements: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Arrays Elements are: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
    

    return 0;
}
