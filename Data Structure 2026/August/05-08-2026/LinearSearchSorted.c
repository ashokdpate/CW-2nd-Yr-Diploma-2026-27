// Q. Linear search in sorted arrays?

#include<stdio.h>

// Function to take input
void inputArray(int arr[], int n){

    printf("Enter array element in sorted mannar:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }   
}

// Function to display array
void displayArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%4d", arr[i]);
    }
    
}

int linearSearchOnSorted(int arr[], int n , int key){
    
    for (int i = 0; i < n; i++)
    {
        // if arrays is sorted then check element is greater than 
        // from current if yes then break the loop
        if (arr[i]>key)
        {
            return -1;
        }

        if (arr[i]==key)
        {
            return i; //return index
        }        
    }
    return -1;
    
}

int main()
{
    
        int arr[100];
        int n , key;

        printf("Enter the size of arrays: ");
        scanf("%d", &n);

        inputArray(arr, n);        
        displayArray(arr, n);
        
        printf("Enter Key to find the element: ");
        scanf("%d", &key);

    

    int position =linearSearchOnSorted(arr, n , key);

    if (position== -1)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element %d found at position: %d " , key, position+1);
    }

    return 0;
}

