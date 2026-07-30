// Type 2: Arguments/parameter with No Return Value

#include<stdio.h>

void addition(int a , int b){

    int sum=a+b;
    printf("%d",sum);
}

void substraction(int a , int b){

    int sub=a-b;
    printf("%d",sub);
}

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
       
    //function call
    addition(a, b);

    //function call
    substraction(a, b);
    return 0;
}

// using type 2
// Homework solve multiplication / division/ modulus
//Homework solve area of square , circle , triangle, reactangle