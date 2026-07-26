/*
If else statement 

  write a program to take count of patient and print if count >1000 
   + Impose lockdown
   count < 1000 
   + Relase the lockdown

*/

#include <stdio.h>
int main()
{
         int count=999;
         if (count>1000)
         {
            printf("Impose the lockdown");
         }
         else{

            printf(" Release lockdown");
         }
               
    return 0;
}
// output:  Release the lockdown

