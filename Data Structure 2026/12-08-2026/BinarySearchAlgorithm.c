#include <stdio.h>

int binarySearch(int arr[], int n, int key)
{
    int left = 0;
    int right = n - 1;
    int mid;
    int itr=0;
    while (left <= right)
    {
        itr++;
        mid = (left + right) / 2;
        if (arr[mid] == key)
        {
            printf("Number of Iteration : %d", itr);
            return mid;   // Element found
        }
        else if (key < arr[mid])
        {
            right = mid - 1;   // Search left side
        }
        else
        {
            left = mid + 1;    // Search right side
        }
    }
    printf("Number of Iteration : %d", itr);
    return -1;  // Element not found
}

int main()
{
    int arr[100], n, key, i, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array Element are: ");
    for ( i = 0; i < n; i++)
    {
        printf("%4d",arr[i]);
    }
    
    printf("\nEnter element to search: ");
    scanf("%d", &key);

    result = binarySearch(arr, n, key);

    if (result != -1)
    {
        printf("\nElement %d found at position %d\n", key, result + 1);
    }
    else
    {
        printf("\nElement %d not found\n", key);
    }

    return 0;
}


/*
Best Case	    O(1)    	Element is found at the middle in the first comparison
Average Case	O(log n)	Element is usually found after several divisions
Worst Case	    O(log n)	Element is found at the last possible comparison or is absent
*/