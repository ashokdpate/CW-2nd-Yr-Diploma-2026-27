//Program 3: Take input from user and then print the Sum of Array


#include<stdio.h>
int main()
{
    int arr[5];
    int sum=0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum=sum+arr[i];
    }

    printf("%d", sum);
    
    return 0;
}
