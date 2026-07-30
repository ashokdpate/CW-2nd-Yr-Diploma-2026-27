// Type 4: Arguments With Return Value (Most Important)


#include<stdio.h>

int add(int a, int b){
    
    int sum=a+b;

    return sum; 
}
int areaSquare(int side){
    
    int area=side * side;
    return area; 
}


int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    int result= add(a,b);
    printf("%d", result);

    int side;
    printf("Enter a side of square: ");
    scanf("%d", &side);

    int ans=areaSquare(side);
    printf("%d", ans);
    return 0;
}
//using type 4
// Homework solve multiplication / division/ modulus
//Homework solve area of square , circle , triangle, reactangle