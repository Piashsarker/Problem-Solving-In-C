#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c, length , width ,radius, trianglePerimeter , rectangalePerimeter , circlePerimeter ;

    printf(" Triangle Perimeter : \n ");
    printf("Enter A,B,C : ");
    scanf("%f %f %f",&a,&b,&c);
    trianglePerimeter = a+b+c ;
    printf("Triangle Perimeter: %f", trianglePerimeter);
    printf(" Rectangle Perimeter :  \n");
    printf("Enter Length And Width: \n");
    scanf("%f %f",&length,&width);
    rectangalePerimeter= 2*(length+width);
    printf("Rectangle Perimeter is : %f", rectangalePerimeter);

    printf(" Circle  Perimeter :  \n");

    printf("Enter Radius: ");
    scanf("%f",&radius);
    circlePerimeter = 2*3.1416*radius;
    printf("\n Circle Perimeter is : %f",circlePerimeter);
    return 0;
}
