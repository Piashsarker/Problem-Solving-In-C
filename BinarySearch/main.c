#include <stdio.h>
#include <stdlib.h>

int main()
{
    int range,i , a[10] , low , mid , upper , number , c=0  ;
     printf("Enter Limit Of Array : ");
     scanf("%d", &range );
     printf("Enter Numbers : ");
     for(i=0 ; i<range ; i++){
        scanf("%d",&a[i]);
     }

     printf("Enter Number to search: ");
     scanf("%d",&number);
     low =0 ;
    upper = range-1;

     while(low<=upper){
        mid = (low+upper)/2;

        if(a[mid]==number){
                c=1;
            break;
        }
        else if(a[mid]>number){
            upper = mid-1;
        }
        else{
            low = mid+1;
        }

     }

     if(c==1){
        printf("Number Present");
     }
     else{
        printf("Number Not Found");
     }





}

