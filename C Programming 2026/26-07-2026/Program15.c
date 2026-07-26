// Write a program to create user defined function ‘area( )’ with no return type &
// no argument to display area of rectangle.

#include <stdio.h>

void areaReactangle(); // function declaration
void areaCircle();
int main()
{
    areaReactangle(); // function call
    areaCircle();
    return 0;
}

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