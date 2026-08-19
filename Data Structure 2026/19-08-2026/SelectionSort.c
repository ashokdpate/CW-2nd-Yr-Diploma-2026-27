#include <stdio.h>

void selectionSort(int arr[], int n)
{
    int i, j, min, temp;
int pass=0, itr=0;
    for(i = 0; i < n - 1; i++)
    {
        min = i;
        
        for(j = i + 1; j < n; j++)
        {
            itr++;
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        pass++;

        // Swap
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    printf("%d", pass);
    printf("%d",itr);
}

void displayArray(int arr[], int n){
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {30, 20, 60, 50, 10, 40};
    int n = 6;
    int i;

    printf("\nBefore Sorted array elements: ");
    displayArray(arr, n);

    selectionSort(arr, n);
    
    printf("\nAfter Sorted Array elements: ");
    displayArray(arr, n);
    

    return 0;
}