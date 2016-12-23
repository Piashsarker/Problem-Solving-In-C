#include <stdio.h>
#include <stdlib.h>

int main()
{   int range , i , j ;
    printf("Enter Range: ");
    scanf("%d",&range);
    for(i=1 ; i<=range; i++){
        for(j=1; j<=10 ; j++){
            printf("%d x %d = %d",i,j,i*j);
            printf("\n");
        }
    }



}
