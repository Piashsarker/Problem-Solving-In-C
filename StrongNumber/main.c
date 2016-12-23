#include <stdio.h>
#include <stdlib.h>

int main()
{   int number , temp , remaining , sum=0 , i;
    printf("Enter A Number: ");
    scanf("%d", &number);
    temp = number ;
    while(temp!=0){
        remaining = temp%10 ;
        temp = temp/10;
        int factorial =1;
        for(i = 1; i<=remaining ; i++){
            factorial = factorial*i;
        }
        sum = sum+factorial;


    }
    if(sum==number){
        printf("%d is a Strong Number",number);
    }
}
