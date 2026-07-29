
// What is a Function?
// A function is a block of code that performs a specific task.
// Instead of writing the same code again and again, we write it once 
// in a function
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

// function 
void  message(){
    printf("Hello world\n");
}

int main()
{
    //Function call
    message();
    
    //Function call
    message();
    
    message();
    
    //Function call
    message();
    return 0;
}
