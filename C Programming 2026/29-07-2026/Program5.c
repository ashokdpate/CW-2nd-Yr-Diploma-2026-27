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
void substraction(){
    int a , b;
    printf("Enter a value: ");
    scanf("%d\n", &a);
    printf("Enter b value: ");
    scanf("%d\n", &b);

    int sub=a-b;
    printf("Substraction is: %d", sub);
}
void multiplication(){
    int a , b;
    printf("Enter a value: ");
    scanf("%d\n", &a);
    printf("Enter b value: ");
    scanf("%d\n", &b);

    int mul=a*b;
    printf("multiplication is: %d", mul);
}
void division(){
    int a , b;
    printf("Enter a value: ");
    scanf("%d\n", &a);
    printf("Enter b value: ");
    scanf("%d\n", &b);

    int div=a/b;
    printf("Division is: %d", div);
}
void modulus(){
    int a , b;
    printf("Enter a value: ");
    scanf("%d\n", &a);
    printf("Enter b value: ");
    scanf("%d\n", &b);

    int modulus=a % b;
    printf("Modulus is: %d", modulus);
}


int main()
{
    //Function call
    addition();
    
    //Function call
    substraction();
    
    //Function call
    multiplication();
    
    //Function call
    division();

    //Function call
    modulus();
    
    return 0;
}
