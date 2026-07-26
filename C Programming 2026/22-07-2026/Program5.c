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
    int num2= 0;

    printf("%d\n", num1 && num2);  // output:  0
                //  T   &&   F
                //    F 
                //    0
    return 0;
}