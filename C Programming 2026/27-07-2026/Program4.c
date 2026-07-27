// 4. Write a program to Find the Largest of Three Numbers

#include<stdio.h>
int main()
{
    int num1;
    printf("Enter a number 1 value: ");
    scanf("%d", &num1);
    int num2 ;
    printf("Enter a number 2 value: ");
    scanf("%d", &num2);
    int num3; 
    printf("Enter a number 3 value: ");
    scanf("%d", &num3);


    if (num1>num2  &&  num1>num3)
    {
        printf(" Number 1 is largest");
    }
    else if (num2> num1  &&   num2>num3)
    {
        printf("Number 2 is laargest");
    }

    else{
        printf("Number 3 is largest");
    }
    


    
    return 0;
}





























































// #include<stdio.h>

// int main()
// {
//     int a=700;
//     int b=550;
//     int c=600;

//     if (a>=b && a>=c)
//     {
//         printf("Largest value is A : %d", a);
        
//     }
//     else if (b>=a && b>=c)
//     {
//         printf("Largest value is B: %d", b);
//     }
//     else{
//         printf("Largest value is C: %d", c);
//     }
    
    
//     return 0;
// }
