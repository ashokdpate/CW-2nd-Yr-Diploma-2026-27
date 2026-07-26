/*
scanf() function is used for to take the input from the user.
for that we can use the & Address of operator 

Here my requirement is take two values from user and do the 
addition , substraction , multiplication ,division , modulus
*/

#include <stdio.h>

int main(){
    int num1;
    printf("Enter number 1 value: ");
    scanf("%d", &num1);

    int num2;
    printf("Enter num 2 value: ");
    scanf("%d", &num2);

  int sum =num1+num2;
  printf("addition is : %d\n", sum);

  
  int sub=num1-num2;
  printf("substration is : %d\n", sub);

  int mul=num1*num2;
  printf("Multiplication is: %d\n", mul);

  int div= num1/num2;
  printf("Division is : %d\n", div);

  int modulus=num1%num2;
  printf("Modulus is : %d\n", modulus);

}