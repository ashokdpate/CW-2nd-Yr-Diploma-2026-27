// Type 2: Arguments No Return Value

#include<stdio.h>

void add(int a , int b){

    int sum=a+b;
    printf("%d",sum);
}

int main()
{

    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    add(a, b);
    return 0;
}
