/*
2. logical Operators
    1) ||  logical OR operator
    
    In || if any  operand is true then  it will return true value.
    If all the operand return false then result is false

    
           operand 1        operand 2         Result
             True             True             True
             True             false            True
             False            True             true
             False            false            false
    
    - logical operators gives the result in the form of true or false
    - True means 1 and false means 0
*/

#include <stdio.h>
int main()
{
    int num1= 400;
    int num2= 300;
    int num3= 200;
    int num4=  250 ;

    printf("%d\n", num1>=num2 || num1<num3 || num3>num4 || num1>num4);  // output:  1
                //     F   ||     F       ||    F    ||    T
                //       T
                //       1
    return 0;
}