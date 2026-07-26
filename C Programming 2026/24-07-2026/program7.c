/*
write a program take amount and discount as vaiableName 
if amount is greater than 5000 then give  35 percent discount
if ampunt is greater than 2500 and less than 5000 then give 20% discount
else give 5% discount

*/ 
 

#include <stdio.h>
int main()
{
            float amount= 745;
            float discount;
            
            if (amount>5000)
            {
                discount = amount * 0.35;
                printf("You got the discount of : %f", discount);  
            }
            else if (amount>2500 && amount<=5000)
            {
                discount = amount * 0.20;
                printf("You got the discount of: %f", discount); 
            }
            else
            {
                discount = amount * 0.05;
                printf("You got the discount of: %f", discount); //You got the discount of : 37.25
            }
               
    return 0;
}

