// What is a Function?
// A function is a block of code that performs a specific task.
// Instead of writing the same code again and again, we write it once in a function
// and call it whenever needed.
/*
syntax
return_type function_name(parameters)
{

     return value;
}
*/
// Type 1: No Arguments No Return Value



















#include<stdio.h>

void hello(){
    printf("Hello world\n");
}

void add(){
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
    hello();
    hello();
    hello();
    hello();
    add();

    return 0;
}
