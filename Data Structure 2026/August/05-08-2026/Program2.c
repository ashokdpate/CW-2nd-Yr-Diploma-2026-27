#include <stdio.h>

// Function Declarations
int linearSearch(int arr[],  int key);

int main()
{
    int arr[5]={11,22,33,44,55};
    
    int key;
    printf("\nEnter the element to search: ");
    scanf("%d", &key);

    // Function to search
   int position = linearSearch(arr, key);

    if(position == -1)
        printf("Element Not Found");
    else
        printf("Element Found at Position = %d", position + 1);

    return 0;
}

// Function to perform Linear Search
int linearSearch(int arr[], int key)
{
    int i;

    for(i = 0; i < 5; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}