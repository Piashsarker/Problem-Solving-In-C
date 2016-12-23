#include <stdio.h>
#include <stdlib.h>
//Write a c program to find out the sum of series 1 + 2 + ….  + n.
int main()
{       int n , sum=0,i ;
     printf("Enter N :");
     scanf("%d",&n);

     for(i=1 ; i<=n  ; i++){
        sum = sum+i;
        if(i!=n){
            printf(" %d +",i);
        }
        else{
            printf("%d = %d ",i,sum);
        }


     }


}
