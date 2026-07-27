
#include <stdio.h>
int main()
{

            for (int i=1;  i<=100;  i++)
            {
                printf("%d\n", i);
            }
            
    return 0;
}



























/*

for (initialization; condition; increment/decrement)
{
    // Statements to be executed
}


+ Initialization: Executes only once before the loop starts.
+ Condition: Checked before each iteration. If it is true, 
             the loop body executes; otherwise, the loop terminates.
+ Increment/Decrement: Updates the loop variable after each iteration

   i++  = post increment   i= i+1;
                            6=5+1;
             
   i-- = post decrement    i = i-1;
                            4  = 5-1;

    ++i =  pre increment     i=i+1;
    --i = pre decrement      i= i-1;



*/
// 1.Write a program Print Numbers from 1 to 10 using for loop