#include<stdio.h>

    void bubbleSort(int arr[], int n){

        int temp, itr=0, pass=0;

        for (int i = 0; i < n-1; i++)
        { int flag=0;
            
            for (int j = 0; j < n-1-i; j++)
            {
                itr++;
                    if (arr[j]> arr[j+1])
                    {
                        //swapping
                        temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                        flag=1;
                    }
            }
            pass++;
            if (flag==0)
            {
                break;
            }
        }
        
        printf("\nTotal Passes are: %d",pass);
        printf("\nTotal Iteration are: %d",itr);
    }


    void inputArray(int arr[], int n){
        printf("Enter Array element: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[], int n){
    printf("\nArrays elements are:");
    for (int i = 0; i < n; i++)
    {
        printf("%4d", arr[i]);
    }
}

int main()
{

    int arr[100];
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    inputArray(arr,n);
    displayArray(arr, n);

    bubbleSort(arr, n);
    
    printf("\nAfter Sorting : ");
    displayArray(arr,n);
     
    return 0;
}
