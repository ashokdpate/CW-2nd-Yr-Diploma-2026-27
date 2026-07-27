// Write down the program to Calculate Grade Based on Marks 
// Above 75 Distrinction
// Between 60 to 74 First class
// Between 35 to 59  Secondclass 
// below 35 failed.


#include<stdio.h>
int main()
{
        int mark;
        printf("Enter a student marks: ");
        scanf("%d", &mark);

        if (mark >= 75)
        {
            printf("Pass with a Distinction");
        }

        else if(mark>=60  &&  mark<75){
            printf("Pass witg first class");
        }
        else if (mark>=35  &&  mark<60)
        {
            printf("Pass with second class");
        }
        else{
            printf("Student is failed");
        }
    
    return 0;
}
