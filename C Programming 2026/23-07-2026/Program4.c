#include <stdio.h>
int main()
{
    int num1= 400;
    int num2= 400;
   

    printf("%d\n", num1>=num2 || num2<=num1 );  // output:  1
                // T   ||    T 
                //       T
                //       1
    return 0;
}