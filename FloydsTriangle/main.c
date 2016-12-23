#include <stdio.h>
#include <stdlib.h>

int main()
{
        int i , j, number, k=1;
        printf("Enter Range: ");
        scanf("%d",&number);
        for(i =1 ; i<=number ; i++){
            for(j=1; j<=i;j++,k++){
                printf("%d ",k);
            }
            printf("\n");

        }

}
