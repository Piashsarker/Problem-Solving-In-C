#include <stdio.h>
#include <stdlib.h>

int main()
{   int num1 , num2 , gcd =1, k=2;
    printf("Enter Two Number : ");
    scanf("%d  %d",&num1 , &num2);

    while(k<=num1 && k<=num2){
        if(num1%k==0 && num2%k==0){
            gcd = k ;
        }
        k++;
    }
    printf("GCD is : %d",gcd);
}
