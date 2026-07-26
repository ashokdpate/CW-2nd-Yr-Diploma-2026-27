#include <stdio.h>
int main()
{
    int num1= 200;
    int num2= 400;
   

    printf("%d\n", num1 > num2 || num1<num2 );  // output:  1
                // F   ||    T 
                //       T
                //       1
    return 0;
}