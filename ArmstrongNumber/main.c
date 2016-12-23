#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  temp , r,  i ;
    for(i=1; i<500; i++){
        temp = i ;
       int sum =0 ;
     while(temp!=0){
        r = temp%10 ;
        temp = temp/10;
        sum = sum+(r*r*r);
    }

    if(sum==i){
        printf("%d \n",i);
    }
    }

}
