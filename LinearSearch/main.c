#include <stdio.h>
#include <stdlib.h>

int main()
{
     int numberList[10], i , number , range , present=0;

     printf("Enter Array Size: ");
     scanf("%d", &range);
     for(i=0 ; i<=range-1;i++){
        scanf("%d",&numberList[i]);
     }
     printf("\n Enter Number To Search : ");
     scanf("%d",&number);
     for(i=0 ; i<=range-1 ; i++){
        if(numberList[i]== number){
            present=1;
            break;

        }

     }
     if(present==1){
        printf("Number is on the list...");

     }
     else{
        printf("Number is not in the list.......");
     }

}
