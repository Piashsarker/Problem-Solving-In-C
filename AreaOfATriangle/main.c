#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float a , b, c,s , area ;
    printf(" Enter A , B , C ");
    scanf(" %f %f %f",&a, &b, &c);
    s= (a+b+c)/2;

    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area is :  %f", area );

    return 0;
}
