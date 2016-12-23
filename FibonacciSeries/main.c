#include <stdio.h>
#include <stdlib.h>

int main()
{
    int range, count=0;
    long i =0l , j=1,k;
    printf("Enter range of series: ");
    scanf("%d",&range);
    printf("%ld %ld",i,j);
    while(count<range){
        k = i+j;
        i = j;
        j=k;
        count++;
        printf("%ld ",k);
    }

}
