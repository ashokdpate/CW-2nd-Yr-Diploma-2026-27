// Type 4: Arguments With Return Value (Most Important)


#include<stdio.h>

int add(int a, int b){
    
    int sum=a+b;

    return sum; 
}


int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int result= add(a,b);
    printf("%d", result);
    return 0;
}