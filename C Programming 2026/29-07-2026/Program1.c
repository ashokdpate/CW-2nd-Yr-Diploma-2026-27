/*
write down the multiplication table
*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <=10; i++)
    {
        printf("%d x %d= %d\n" , num , i, num*i);
    }
    
    return 0;
}
/*
Output
Enter a number: 11
11 x 1= 11
11 x 2= 22
11 x 3= 33
11 x 4= 44
11 x 5= 55
11 x 6= 66
11 x 7= 77
11 x 8= 88
11 x 9= 99
11 x 10= 110
*/
