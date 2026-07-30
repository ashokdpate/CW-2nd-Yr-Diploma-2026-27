// Type 3: No Arguments With Return Value

#include<stdio.h>

int add(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int sum=a+b;

    return sum; 
}

int areaSquare(){
    int side;
    printf("Enter a side of square: ");
    scanf("%d", &side);
    int area=side * side;
    return area;
}


int main()
{
    int result= add();
    printf("%d", result);

    int ans=areaSquare();
    printf("%d", ans);
    return 0;
}
// using type 3

// Homework solve multiplication / division/ modulus
//Homework solve area of square , circle , triangle, reactangle