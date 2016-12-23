#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number ,i ,factorial=1;
    printf("Enter An Integer Number: ");
    scanf("%d",&number);

    for(i=number; i>0; i--){
        factorial = factorial*i;
    }
    printf("%d ", factorial);
}
