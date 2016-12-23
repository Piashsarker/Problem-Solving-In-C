#include <stdio.h>
#include <stdlib.h>

int main()
{   int number ;
   printf("Enter An Integer Number : ");
   scanf("%d",&number);

   if(number%2==0){
    printf("%d is a Even number.",number);
   }
   else{

    printf("%d is a odd number.",number);
   }

}
