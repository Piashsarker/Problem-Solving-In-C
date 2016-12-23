#include <stdio.h>
#include <stdlib.h>

int main()
{   float radius , area;
    printf("Enter Radius Of Circle");
    scanf("%f",&radius);
    area = radius * radius*3.1416;
    printf("%f",area);
    return 0;
}
