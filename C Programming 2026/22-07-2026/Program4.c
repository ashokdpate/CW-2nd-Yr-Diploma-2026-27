/*
2. logical Operators
    1) &&  logical And operator
    
    In && if all the operand is true then and then it will return true value.
    If any operand return false the result is false

    
           operand 1        operand 2         Result
             True             True             True
             True             false            false
             False            True             false
             False            false            false
    
    - logical operators gives the result in the form of true or false
    - True means 1 and false means 0
*/

#include <stdio.h>
int main()
{
    int num1= 200;
    int num2= 400;

    printf("%d\n", num1 && num2);  // output:  1
                //  T   &&   T
                //  T 
                //   1
   

    return 0;
}

