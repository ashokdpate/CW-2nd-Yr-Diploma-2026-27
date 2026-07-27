// Rules for IF-Else statement

// 1. we cannnot write else before if statement
// 2. we can write only if condition with else is valid


// 2.Write down the program to Check Positive, Negative, or Zero


#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number");
    scanf("%d", &number);

    if (number> 0)
    {
        printf("Number is positive");
    }
    else if(number<0){
            printf("Number is negative");
    }
    else{
        printf("Number is zero");
    }
    
    
    return 0;
}
