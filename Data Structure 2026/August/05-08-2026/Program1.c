#include <stdio.h>

// Function Declarations
void inputArray(int arr[], int n);
void displayArray(int arr[], int n);
int linearSearch(int arr[], int n, int key);

int main()
{
    int arr[100];
    int n, key, position;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    // Function to take array input
    inputArray(arr, n);

    // Function to display array
    printf("\nArray Elements are:\n");
    displayArray(arr, n);

    printf("\nEnter the element to search: ");
    scanf("%d", &key);

    // Function to search
    position = linearSearch(arr, n, key);

    if(position == -1)
        printf("Element Not Found");
    else
        printf("Element Found at Position = %d", position + 1);

    return 0;
}

// Function to take input
void inputArray(int arr[], int n)
{
    int i;

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

// Function to display array
void displayArray(int arr[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

// Function to perform Linear Search
int linearSearch(int arr[], int n, int key)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}