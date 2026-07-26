// Type 3: No Arguments With Return Value

#include<stdio.h>

int add(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int sum=a+b;

    return sum; 
}


int main()
{
    int result= add();
    printf("%d", result);
    return 0;
}
