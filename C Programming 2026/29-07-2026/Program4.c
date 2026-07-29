/*
syntax
return_type function_name(parameters)
{

     return value;
}
*/
// Type 1: No Arguments No Return Value

#include<stdio.h>

// function 

void addition(){
    int a , b;
    printf("Enter a value: ");
    scanf("%d\n", &a);
    printf("Enter b value: ");
    scanf("%d\n", &b);

    int sum=a+b;
    printf("Addition is: %d", sum);
}


int main()
{
    //Function call
    addition();
    
    //Function call
    addition();
    
    //Function call
    addition();


    return 0;
}
