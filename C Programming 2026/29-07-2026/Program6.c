// Write a program to create user defined function ‘area( )’ 
//  with no return type & no argument to display 
// 1. area of rectangle 2.Area of circle 3. area of triangle 4.area of square

#include <stdio.h>

void areaReactangle(){

    int length;
    printf("Enter a reactangle length: ");
    scanf("%d", &length);
    
    int width;
    printf("Enter a Reactangle width: ");
    scanf("%d", &width);

    int area= 0.5 * length * width;
    printf("Area of reactangle is : %d\n", area);
}

void areaCircle(){

        float radius;
        printf("Enter the radius : ");
        scanf("%f", &radius);

        float area= 3.14 * radius * radius;
        printf("Area of Circle is: %f\n" , area);

}

void areaTriangle(){
        int base;
        printf("Enter the base : ");
        scanf("%d", &base);
        
        int height;
        printf("Enter the height : ");
        scanf("%d", &height);

        int area= (base * height)/(2);
        printf("Area of Triangle is: %d\n" , area);
}
void areaSquare(){
        int square;
        printf("Enter the square : ");
        scanf("%d", &square);

        int area= square * square;
        printf("Area of Square is: %d\n" , area);
}

int main()
{
    areaReactangle(); // function call
    areaCircle();
    areaTriangle();
    areaSquare();
    return 0;
}
