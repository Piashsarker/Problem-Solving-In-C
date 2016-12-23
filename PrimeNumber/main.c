#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool isPrime = true ;
   int i , number ;
   printf("Enter A Number ");
   scanf("%d",&number);

   for(i=2 ; i<number/2 ; i++){

    if(number%i==0){

        isPrime = false;
    }


   }
   if(isPrime){
    printf("%d Is a Prime Number", number);
   }

}
