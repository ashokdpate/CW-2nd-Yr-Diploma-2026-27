#include <stdio.h>
int main()
{
    int num1= 200;
    int num2= 400;
    int num3= 250;

    printf("%d\n", num1>num2 || num3>num2 || num3>num1 );  // output:  1
                //   F     ||    F  ||     T 
                //       T
                //       1
    return 0;
}