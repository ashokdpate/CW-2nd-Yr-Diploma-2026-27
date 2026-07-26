#include <stdio.h>
int main()
{
    int num1= 400;
    int num2= 400;
   

    printf("%d\n", num1>num2 || num2<num1 );  // output:  0
                // F   ||    F 
                //       0
                //       0
    return 0;
}